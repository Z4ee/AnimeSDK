#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameplayGuideConstValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x197CA740)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197CA5D0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x197CA2C0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x197CA570)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x197CA8F0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x197CA340)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x197CA930)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x197CAB00)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x197CAC80)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197CAFF0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x197CAA60)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x197CA9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideConstValueExcelTable_TypeDefinitionIndex = 12747;

	class GameplayGuideConstValueExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A710);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A718);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A720);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x8820);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x8821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GameplayGuideConstValueRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::GameplayGuideConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideConstValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
