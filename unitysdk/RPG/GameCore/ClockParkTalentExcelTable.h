#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFEAAB0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFEA940)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFEA630)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFEA8E0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFEAC40)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFEA6B0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFEAC80)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFEAE50)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFEB110)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFEB480)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFEADB0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFEAD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalentExcelTable_TypeDefinitionIndex = 11167;

	class ClockParkTalentExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CD40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CD48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1CD50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x9CB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x9CB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkTalentRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
