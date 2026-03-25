#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }

#define CLASS_1_0574DA6BF5DF5E24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167A9820)
#define CLASS_1_0574DA6BF5DF5E24__CTOR_2_OFFSET UNITYSDK_OFFSET(0x167A9940)
#define CLASS_1_0574DA6BF5DF5E24__CTOR_3_OFFSET UNITYSDK_OFFSET(0x167A9B00)
#define CLASS_1_0574DA6BF5DF5E24__CTOR_OFFSET UNITYSDK_OFFSET(0x167A97B0)

inline static constexpr unsigned int Class_1_0574DA6BF5DF5E24_TypeDefinitionIndex = 32253;

class Class_1_0574DA6BF5DF5E24 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0574DA6BF5DF5E24_TypeDefinitionIndex)->GetStaticField(0x4CA0);
	}
	::System::Int32 Field_1_3; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Nullable_1<::System::Int32> Field_1_5; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_2; // 0x28
	::System::Nullable_1<::System::Int32> Field_1_6; // 0x2C
	::System::Int32 Field_1_0; // 0x34
	::RPG::GameCore::ChimeraDuelTeamType Field_1_7; // 0x38

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_0574DA6BF5DF5E24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_2_49CAB3DE74280C58* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::ChimeraDuelTeamType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_0574DA6BF5DF5E24__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_0574DA6BF5DF5E24__CTOR_2_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::ChimeraDuelTeamType a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0574DA6BF5DF5E24__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
