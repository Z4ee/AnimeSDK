#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterDifficultyGuideConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199A68D0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199A6760)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199A6450)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199A6700)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199A6A60)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199A64D0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199A6AA0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199A6C70)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199A6EE0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199A7250)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199A6BD0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199A6B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDifficultyGuideConfigExcelTable_TypeDefinitionIndex = 13537;

	class MonsterDifficultyGuideConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDifficultyGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F940);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDifficultyGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F948);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterDifficultyGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F950);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterDifficultyGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterDifficultyGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterDifficultyGuideConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterDifficultyGuideConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterDifficultyGuideConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterDifficultyGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
