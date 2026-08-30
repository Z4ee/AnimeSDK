#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesLandTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D342280)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D342110)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D341E00)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3420B0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D342410)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D341E80)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D342450)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D342620)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3428D0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D342C40)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D342580)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3424E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandTypeExcelTable_TypeDefinitionIndex = 12105;

	class PlanetFesLandTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLandTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLandTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF88);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLandTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLandTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLandTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesLandTypeRow* GetData(::RPG::GameCore::PlanetFesLandType a1)
		{
			return ((::RPG::GameCore::PlanetFesLandTypeRow*(*)(::RPG::GameCore::PlanetFesLandType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesLandTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesLandTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
