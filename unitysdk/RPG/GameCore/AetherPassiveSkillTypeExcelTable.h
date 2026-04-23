#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1868E600)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1868E450)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1868E120)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1868E3F0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1868E7D0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1868E1A0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1868E810)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1868E9F0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1868EBC0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1868EF20)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1868E950)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1868E8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex = 10484;

	class AetherPassiveSkillTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x251E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x251E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x251F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9BC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9BC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherPassiveSkillTypeRow* GetData(::RPG::GameCore::AetherPassiveSkillType PassiveSkillType)
		{
			return ((::RPG::GameCore::AetherPassiveSkillTypeRow*(*)(::RPG::GameCore::AetherPassiveSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETDATA_OFFSET))(PassiveSkillType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherPassiveSkillTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherPassiveSkillTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
