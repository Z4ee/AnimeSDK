#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkRaidRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1965C540)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1965C3D0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1965C0C0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1965C370)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1965C690)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1965C140)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1965C6D0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1965C8A0)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1965CA30)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1965CD50)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1965C800)
#define RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1965C760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRaidExcelTable_TypeDefinitionIndex = 10752;

	class ClockParkRaidExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0xF9F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0xF9F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0xFA00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkRaidExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRaidRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkRaidRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkRaidRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkRaidRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkRaidRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
