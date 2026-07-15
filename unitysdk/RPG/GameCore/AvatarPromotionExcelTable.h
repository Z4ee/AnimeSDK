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

#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A07CF40)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A07CCF0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1A07C930)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1A07CA50)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1A07CC80)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1A07D2E0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1A07CAD0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1A07D510)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1A07C9E0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1A07CFF0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1A07D320)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A07F1C0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1A07F210)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A07F6F0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1A07F160)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1A07D4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionExcelTable_TypeDefinitionIndex = 12255;

	class AvatarPromotionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223A0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223B8);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223C8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x223D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6C30);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6C31);
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
