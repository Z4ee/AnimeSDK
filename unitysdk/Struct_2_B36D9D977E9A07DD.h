#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_B36D9D977E9A07DD_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x94F0)
#define STRUCT_2_B36D9D977E9A07DD_GET_MATERIALPATHS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define STRUCT_2_B36D9D977E9A07DD_GET_MESHCONFIG_OFFSET UNITYSDK_OFFSET(0x1D40)
#define STRUCT_2_B36D9D977E9A07DD_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xE620)
#define STRUCT_2_B36D9D977E9A07DD_SET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9500)
#define STRUCT_2_B36D9D977E9A07DD_SET_MATERIALPATHS_OFFSET UNITYSDK_OFFSET(0x94E0)
#define STRUCT_2_B36D9D977E9A07DD_SET_MESHCONFIG_OFFSET UNITYSDK_OFFSET(0x94C0)
#define STRUCT_2_B36D9D977E9A07DD_SET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xAF40)

inline static constexpr unsigned int Struct_2_B36D9D977E9A07DD_TypeDefinitionIndex = 79753;

struct alignas(8) Struct_2_B36D9D977E9A07DD
{
	::RPG::Client::MechCraft::MechCraftPartType _PartType_k__BackingField; // 0x10
	::RPG::GameCore::CharacterOutfitPartConfig* _MeshConfig_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* _MaterialPaths_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* _EffectParams_k__BackingField; // 0x28

	::RPG::Client::MechCraft::MechCraftPartType get_PartType()
	{
		return ((::RPG::Client::MechCraft::MechCraftPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_GET_PARTTYPE_OFFSET))(this);
	}

	::System::Void set_PartType(::RPG::Client::MechCraft::MechCraftPartType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_SET_PARTTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterOutfitPartConfig* get_MeshConfig()
	{
		return ((::RPG::GameCore::CharacterOutfitPartConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_GET_MESHCONFIG_OFFSET))(this);
	}

	::System::Void set_MeshConfig(::RPG::GameCore::CharacterOutfitPartConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPartConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_SET_MESHCONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_MaterialPaths()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_GET_MATERIALPATHS_OFFSET))(this);
	}

	::System::Void set_MaterialPaths(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_SET_MATERIALPATHS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* get_EffectParams()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_GET_EFFECTPARAMS_OFFSET))(this);
	}

	::System::Void set_EffectParams(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*))((::PBYTE)hIl2Cpp + STRUCT_2_B36D9D977E9A07DD_SET_EFFECTPARAMS_OFFSET))(this, a1);
	}
};
