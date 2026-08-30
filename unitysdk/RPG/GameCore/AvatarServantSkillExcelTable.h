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

#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B2D3C40)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2D39F0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1B2D3630)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B2D3750)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B2D3980)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B2D3FE0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2D37D0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1B2D4210)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1B2D36E0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1B2D3CF0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2D4020)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2D5F70)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B2D5FC0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2D64B0)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B2D5F10)
#define RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2D41B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillExcelTable_TypeDefinitionIndex = 12718;

	class AvatarServantSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E20);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E28);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E30);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E38);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E40);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7E50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2190);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x2191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
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

		static ::RPG::GameCore::AvatarServantSkillRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarServantSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_GETDATA_OFFSET))(a1, a2);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey a1, ::RPG::GameCore::AvatarServantSkillRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey, ::RPG::GameCore::AvatarServantSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
