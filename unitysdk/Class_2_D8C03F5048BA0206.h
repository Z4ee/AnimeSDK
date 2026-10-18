#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/Class_2_D8C03F5048BA0206_WorldThreeSpeState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_D8C03F5048BA0206_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0xBB0B990)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xBB0B280)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0xBB0B540)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xBB0B0A0)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xBB0B7A0)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBB0AF90)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xBB0B340)
#define CLASS_2_D8C03F5048BA0206__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0AF80)
#define CLASS_2_D8C03F5048BA0206___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xBB0BA80)

inline static constexpr unsigned int Class_2_D8C03F5048BA0206_TypeDefinitionIndex = 75804;

class Class_2_D8C03F5048BA0206 : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* LINFKKKAADL; // 0x0
	// static const ::System::String* LDEABAFJJLD; // 0x0
	// static const ::System::String* DJKPLBFDOCD; // 0x0
	// static const ::System::String* GHFCJGHAFIM; // 0x0
	// static const ::System::String* JPCINMNJDJK; // 0x0
	::RPG::MVector3 PDJBFBPEHFE; // 0x28
	::System::Single LLNIGIGFCEA; // 0x34
	::Class_2_D8C03F5048BA0206_WorldThreeSpeState NJJCEADBFOH; // 0x38
	::RPG::MVector3 NAMGGEJCDMP; // 0x3C
	::System::Single PGGLECDKOLM; // 0x48

	::System::Void _ctor(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_586171A6FE1495FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_586171A6FE1495FB_OFFSET))(this, a1);
	}

	::System::Void __AddEndCellEffect_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206___ADDENDCELLEFFECT_B__5_0_OFFSET))(this);
	}
};
