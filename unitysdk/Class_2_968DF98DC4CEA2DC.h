#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"

class Class_3_06419CA21ECB69E6;
class Class_3_3B42BC0680587011;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace System { class String; }

#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_0E4566438CAEFDDE_OFFSET UNITYSDK_OFFSET(0x15C0DC90)
#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15C0D5E0)
#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15C0DF00)
#define CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15C0D590)
#define CLASS_2_968DF98DC4CEA2DC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0DC70)

inline static constexpr unsigned int Class_2_968DF98DC4CEA2DC_TypeDefinitionIndex = 57964;

class Class_2_968DF98DC4CEA2DC : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_C93CC3D2C2AC4067* Field_2_10; // 0x28
	::Class_3_3B42BC0680587011* Field_2_5; // 0x30
	::Class_3_06419CA21ECB69E6* Field_2_4; // 0x38
	::Class_3_F33F9DC5F4112336* Field_2_11; // 0x40
	::System::String* Field_2_1; // 0x48
	::MoleMole::AIMoveTargetType Field_2_2; // 0x50
	::System::Single Field_2_9; // 0x54
	::System::Single Field_2_15; // 0x58
	::System::Single Field_2_6; // 0x5C
	::System::Single Field_2_7; // 0x60
	::MoleMole::BaseMove_AIMoveTargetState Field_2_8; // 0x64
	::System::Single Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_0E4566438CAEFDDE(::Class_3_3B42BC0680587011* a1, ::Class_3_06419CA21ECB69E6* a2, ::Class_3_F33F9DC5F4112336* a3, ::Class_3_C93CC3D2C2AC4067* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3B42BC0680587011*, ::Class_3_06419CA21ECB69E6*, ::Class_3_F33F9DC5F4112336*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_0E4566438CAEFDDE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_968DF98DC4CEA2DC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
