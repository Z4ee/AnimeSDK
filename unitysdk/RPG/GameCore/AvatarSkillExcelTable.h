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

#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186D6660)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186D7000)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x186D6C00)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186D6B80)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186D6F90)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186D7560)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186D6DD0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x186D77A0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x186D6D60)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x186D7260)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186D75A0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186D9A50)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186D9AA0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D9F80)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186D99F0)
#define RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186D7740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillExcelTable_TypeDefinitionIndex = 12037;

	class AvatarSkillExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28FE0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28FE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28FF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28FF8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x29000);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x29008);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x29010);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE40);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xAE41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
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

		static ::RPG::GameCore::AvatarSkillRow* GetData(::System::UInt32 SkillID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_GETDATA_OFFSET))(SkillID, Level);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::AvatarSkillRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarSkillExcelTable_IndexKey key, ::RPG::GameCore::AvatarSkillRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
