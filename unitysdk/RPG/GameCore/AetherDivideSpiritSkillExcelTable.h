#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideSpiritSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F697F0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F69640)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F69310)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F695E0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F699C0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F69390)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F69A00)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F69BE0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F6A660)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6A9C0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F69B40)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F69AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritSkillExcelTable_TypeDefinitionIndex = 10239;

	class AetherDivideSpiritSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EDC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EDC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EDD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideSpiritSkillRow* GetData(::System::UInt32 SkillID)
		{
			return ((::RPG::GameCore::AetherDivideSpiritSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_GETDATA_OFFSET))(SkillID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideSpiritSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideSpiritSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
