#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarIndex.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/ZLinq/FromAdapterEnumerator_2.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x16FB8880)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_BUILDOVERRIDESKILLLISTV2_OFFSET UNITYSDK_OFFSET(0x16FBAA60)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_BUILDOVERRIDESKILLLIST_OFFSET UNITYSDK_OFFSET(0x16FAEFD0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETAVATARSKILLTREEIDLIST_OFFSET UNITYSDK_OFFSET(0x16FBA5F0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FB8950)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FB8660)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x16FB81E0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETPOINTTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x16FBA590)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FB83B0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FB85F0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FB8D00)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FB8430)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x16FB8F40)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x16FB8340)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x16FB8A00)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x16FBAC50)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FB8D40)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBA060)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FBA0B0)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__ADDROWTOAVATARSKILLTREEIDMAP_OFFSET UNITYSDK_OFFSET(0x16FBA890)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FBAC90)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FBA000)
#define RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FB8EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillTreeExcelTable_TypeDefinitionIndex = 11613;

	class AvatarSkillTreeExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F10);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>** StaticGet_avatarSkillTreeIdMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarIndex, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F18);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F20);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F28);
		}
		static ::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>** StaticGet_MemoryTriggerKeyList()
		{
			return (::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F30);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F38);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x20F50);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8BB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8BB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromAdapterEnumerator_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>, ::RPG::GameCore::AvatarSkillTreeRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromAdapterEnumerator_2<::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*>, ::RPG::GameCore::AvatarSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkillTreeRow* GetData(::System::UInt32 PointID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETDATA_OFFSET))(PointID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::AvatarSkillTreeRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey key, ::RPG::GameCore::AvatarSkillTreeRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey, ::RPG::GameCore::AvatarSkillTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSkillTreeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::RPG::GameCore::AvatarSkillTreePointTriggerKey GetPointTriggerKey(::System::String* str)
		{
			return ((::RPG::GameCore::AvatarSkillTreePointTriggerKey(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETPOINTTRIGGERKEY_OFFSET))(str);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAvatarSkillTreeIdList(::System::UInt32 avatarId, ::System::UInt32 enhancedID)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_GETAVATARSKILLTREEIDLIST_OFFSET))(avatarId, enhancedID);
		}

		static ::Il2CppArray<::System::UInt32>* BuildOverrideSkillListV2(::Il2CppArray<::System::UInt32>* baseSkillList, ::Il2CppArray<::System::UInt32>* deleteSkill, ::Il2CppArray<::System::UInt32>* addSkill)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_BUILDOVERRIDESKILLLISTV2_OFFSET))(baseSkillList, deleteSkill, addSkill);
		}

		static ::Il2CppArray<::System::UInt32>* BuildOverrideSkillList(::Il2CppArray<::System::UInt32>* baseSkillList, ::Il2CppArray<::System::UInt32>* srcSkills, ::Il2CppArray<::System::UInt32>* dstSkills, ::System::UInt32 sourceRoleID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_BUILDOVERRIDESKILLLIST_OFFSET))(baseSkillList, srcSkills, dstSkills, sourceRoleID);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _AddRowToAvatarSkillTreeIdMap(::RPG::GameCore::AvatarSkillTreeRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEEXCELTABLE__ADDROWTOAVATARSKILLTREEIDMAP_OFFSET))(row);
		}
	};
}
