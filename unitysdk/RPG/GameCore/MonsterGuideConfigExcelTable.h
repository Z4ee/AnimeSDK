#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterGuideConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199ABD30)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199ABBC0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199AB8B0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199ABB60)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199ABE80)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199AB930)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199ABEC0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199AC090)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199AC410)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199AC730)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199ABFF0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199ABF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideConfigExcelTable_TypeDefinitionIndex = 13526;

	class MonsterGuideConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FC00);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FC08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FC10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterGuideConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterGuideConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterGuideConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
