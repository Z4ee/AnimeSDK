#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarServantSkillExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186D35D0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186D3380)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x186D2F00)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186D30D0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186D3310)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186D3980)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186D3150)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x186D3BC0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x186D3060)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x186D3680)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186D39C0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186D5980)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186D59D0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D5EB0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186D5920)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186D3B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillExcelTable_TypeDefinitionIndex = 12105;

	class AvatarServantSkillExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DC0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DD8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x28DE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD70);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarServantSkillRow* GetData(::System::UInt32 SkillID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::AvatarServantSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETDATA_OFFSET))(SkillID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::AvatarServantSkillRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey key, ::RPG::GameCore::AvatarServantSkillRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarServantSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
