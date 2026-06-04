#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnConstValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19A3ECB0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A3EB40)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19A3E830)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19A3EAE0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19A3EE60)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A3E8B0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19A3EEA0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A3F070)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19A3F1F0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A3F560)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19A3EFD0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A3EF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnConstValueExcelTable_TypeDefinitionIndex = 13795;

	class PlayerReturnConstValueExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x8980);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x8988);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x8990);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x3940);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x3941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnConstValueRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::PlayerReturnConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerReturnConstValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
