#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }

#define CLASS_1_D2412BD47CB5EDB5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18E60830)
#define CLASS_1_D2412BD47CB5EDB5__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18E60920)
#define CLASS_1_D2412BD47CB5EDB5__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18E60AC0)
#define CLASS_1_D2412BD47CB5EDB5__CTOR_OFFSET UNITYSDK_OFFSET(0x18E607E0)

inline static constexpr unsigned int Class_1_D2412BD47CB5EDB5_TypeDefinitionIndex = 38710;

class Class_1_D2412BD47CB5EDB5 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2412BD47CB5EDB5_TypeDefinitionIndex)->GetStaticField(0xBFB0);
	}
	::System::UInt32 Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Nullable_1<::System::Int32> Field_1_3; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::RPG::GameCore::ChimeraDuelTeamType Field_1_7; // 0x2C
	::System::Nullable_1<::System::Int32> Field_1_8; // 0x30
	::System::Int32 Field_1_9; // 0x38

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_2_B66C1067C0468FBB* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::ChimeraDuelTeamType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_2_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::ChimeraDuelTeamType a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2412BD47CB5EDB5__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
