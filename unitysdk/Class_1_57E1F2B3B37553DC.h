#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1492;
class Class_1_F9FBCC956DFCF137_31;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_57E1F2B3B37553DC_GET_DURATIONOFUNIT_OFFSET UNITYSDK_OFFSET(0x154ABEA0)
#define CLASS_1_57E1F2B3B37553DC_METHOD_1_4363DDF8FB7EA889_OFFSET UNITYSDK_OFFSET(0x154ABEC0)
#define CLASS_1_57E1F2B3B37553DC_METHOD_1_C7BFD80E65DE9B66_OFFSET UNITYSDK_OFFSET(0x154AC030)
#define CLASS_1_57E1F2B3B37553DC_SET_DURATIONOFUNIT_OFFSET UNITYSDK_OFFSET(0x154ABEB0)
#define CLASS_1_57E1F2B3B37553DC__CTOR_OFFSET UNITYSDK_OFFSET(0x154AC100)

inline static constexpr unsigned int Class_1_57E1F2B3B37553DC_TypeDefinitionIndex = 79791;

class Class_1_57E1F2B3B37553DC : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>* _DurationOfUnit_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57E1F2B3B37553DC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>* get_DurationOfUnit()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57E1F2B3B37553DC_GET_DURATIONOFUNIT_OFFSET))(this);
	}

	::System::Void set_DurationOfUnit(::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_57E1F2B3B37553DC_SET_DURATIONOFUNIT_OFFSET))(this, a1);
	}

	::System::Single Method_1_4363DDF8FB7EA889(::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType))((::PBYTE)hIl2Cpp + CLASS_1_57E1F2B3B37553DC_METHOD_1_4363DDF8FB7EA889_OFFSET))(this, a1);
	}

	::System::Action* Method_1_C7BFD80E65DE9B66(::Class_1_F9FBCC956DFCF137_31* a1, ::Class_0_16E4307DCC419505_1492* a2)
	{
		return ((::System::Action*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_31*, ::Class_0_16E4307DCC419505_1492*))((::PBYTE)hIl2Cpp + CLASS_1_57E1F2B3B37553DC_METHOD_1_C7BFD80E65DE9B66_OFFSET))(this, a1, a2);
	}
};
