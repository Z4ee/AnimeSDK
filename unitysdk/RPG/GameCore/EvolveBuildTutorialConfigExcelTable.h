#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildTutorialConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x196FE410)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196FE2A0)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196FDF90)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196FE240)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x196FE5E0)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x196FE010)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x196FE620)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x196FE7F0)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196FEA30)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FEDE0)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x196FE750)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x196FE6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTutorialConfigExcelTable_TypeDefinitionIndex = 10994;

	class EvolveBuildTutorialConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTutorialConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTutorialConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTutorialConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x16160);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTutorialConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x16168);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTutorialConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x16170);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTutorialConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTutorialConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTutorialConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTutorialConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTutorialConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTutorialConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildTutorialConfigRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EvolveBuildTutorialConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildTutorialConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildTutorialConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
