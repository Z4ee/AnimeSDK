#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A89F7B4DA276C0D3;
class Class_2_6F065FAFB40880E5;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_A15760DB9A6EBE43_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0x922D310)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0x922CEA0)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x922E5B0)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_80EBA5B20C4C4A1C_OFFSET UNITYSDK_OFFSET(0x922D130)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x922E600)
#define CLASS_2_A15760DB9A6EBE43_METHOD_2_F110FD39A15F5D43_OFFSET UNITYSDK_OFFSET(0x922D210)
#define CLASS_2_A15760DB9A6EBE43_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0x922D320)
#define CLASS_2_A15760DB9A6EBE43__CTOR_OFFSET UNITYSDK_OFFSET(0x922E5C0)
#define CLASS_2_A15760DB9A6EBE43__ONBIND_OFFSET UNITYSDK_OFFSET(0x922CFB0)
#define CLASS_2_A15760DB9A6EBE43__SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0x922E5F0)
#define CLASS_2_A15760DB9A6EBE43___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x922E670)

inline static constexpr unsigned int Class_2_A15760DB9A6EBE43_TypeDefinitionIndex = 66506;

class Class_2_A15760DB9A6EBE43 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_A89F7B4DA276C0D3* Field_2_2; // 0x60
	::Class_2_6F065FAFB40880E5* Field_2_3; // 0x68
	::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1EDDF6D2F22116E8(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_1EDDF6D2F22116E8_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_80EBA5B20C4C4A1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_80EBA5B20C4C4A1C_OFFSET))(this);
	}

	::System::Void Method_2_F110FD39A15F5D43(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_F110FD39A15F5D43_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElationTimeAtmosphereType get_AtmosphereType()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_GET_ATMOSPHERETYPE_OFFSET))(this);
	}

	::System::Void set_AtmosphereType(::RPG::GameCore::ElationTimeAtmosphereType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_SET_ATMOSPHERETYPE_OFFSET))(this, value);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void _SetupView_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43__SETUPVIEW_B__3_0_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A15760DB9A6EBE43___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
