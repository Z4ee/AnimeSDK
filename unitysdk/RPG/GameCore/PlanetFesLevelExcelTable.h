#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19A1F620)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A1F4F0)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19A1F1E0)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19A1F490)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19A1F770)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A1F260)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19A1F7B0)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A1F980)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19A1FD00)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A20020)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19A1F8E0)
#define RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A1F840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelExcelTable_TypeDefinitionIndex = 11634;

	class PlanetFesLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x36810);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x36818);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x36820);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xAEC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
