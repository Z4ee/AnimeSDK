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

#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1744F880)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1744F6D0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1744F3A0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1744F670)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1744FA00)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1744F420)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1744FA40)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1744FC20)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1744FFD0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174502E0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1744FB80)
#define RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1744FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideConfigExcelTable_TypeDefinitionIndex = 12994;

	class MonsterGuideConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C8C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C8C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C8D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xED00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xED01);
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

		static ::RPG::GameCore::MonsterGuideConfigRow* GetData(::System::UInt32 MonsterID)
		{
			return ((::RPG::GameCore::MonsterGuideConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE_GETDATA_OFFSET))(MonsterID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterGuideConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
