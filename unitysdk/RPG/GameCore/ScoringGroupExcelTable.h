#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ScoringGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1769C2A0)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1769C0F0)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1769BDC0)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1769C090)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1769C420)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1769BE40)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1769C460)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1769C640)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1769C8A0)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1769CBB0)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1769C5A0)
#define RPG_GAMECORE_SCORINGGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1769C500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScoringGroupExcelTable_TypeDefinitionIndex = 11768;

	class ScoringGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScoringGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScoringGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(ScoringGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8080);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ScoringGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8088);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ScoringGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8090);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScoringGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x4290);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ScoringGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x4291);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScoringGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScoringGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScoringGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScoringGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ScoringGroupRow* GetData(::System::UInt32 ScoringGroupID)
		{
			return ((::RPG::GameCore::ScoringGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_GETDATA_OFFSET))(ScoringGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ScoringGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ScoringGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
