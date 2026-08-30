#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarPromotionExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C5923D0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C592180)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1C591DC0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C591EE0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C592110)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C592770)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C591F60)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1C5929A0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1C591E70)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1C592480)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C5927B0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C594660)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C5946B0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C594BA0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C594600)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C592940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionExcelTable_TypeDefinitionIndex = 12644;

	class AvatarPromotionExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6000);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6008);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6010);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6018);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6020);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6028);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6030);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPromotionRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarPromotionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::AvatarPromotionRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarPromotionExcelTable_IndexKey a1, ::RPG::GameCore::AvatarPromotionRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPromotionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
