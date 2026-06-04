#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarSkillExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194AAF40)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194AACF0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x194AA930)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194AAA50)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194AAC80)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194AB2E0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194AAAD0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x194AB510)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x194AA9E0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x194AAFF0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194AB320)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194AD740)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194AD790)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194ADC80)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194AD6E0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194AB4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillExcelTable_TypeDefinitionIndex = 12129;

	class AvatarSkillExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4A80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4A88);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4A90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4A98);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4AA0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4AA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4AB0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkillRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::AvatarSkillRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarSkillExcelTable_IndexKey a1, ::RPG::GameCore::AvatarSkillRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
