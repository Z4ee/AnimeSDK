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

#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1711BAD0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1711B920)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1711B5F0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1711B8C0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1711BED0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1711B670)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1711BF10)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1711C0F0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1711C3B0)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1711C710)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1711C050)
#define RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1711BFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalentExcelTable_TypeDefinitionIndex = 10462;

	class ClockParkTalentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalentRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x28690);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x28698);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x286A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0xD490);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0xD491);
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

		static ::RPG::GameCore::ClockParkTalentRow* GetData(::System::UInt32 ActivityTalentID)
		{
			return ((::RPG::GameCore::ClockParkTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE_GETDATA_OFFSET))(ActivityTalentID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkTalentRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
