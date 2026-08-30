#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/Class_2_CC52B2B72720B38A_WorldThreeSpeState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_CC52B2B72720B38A_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xBC41990)
#define CLASS_2_CC52B2B72720B38A_METHOD_2_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0xBC41C50)
#define CLASS_2_CC52B2B72720B38A_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xBC41EB0)
#define CLASS_2_CC52B2B72720B38A_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xBC417B0)
#define CLASS_2_CC52B2B72720B38A_METHOD_2_8CA56FF24F45C9F3_OFFSET UNITYSDK_OFFSET(0xBC42120)
#define CLASS_2_CC52B2B72720B38A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBC416A0)
#define CLASS_2_CC52B2B72720B38A_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xBC41A50)
#define CLASS_2_CC52B2B72720B38A__CTOR_OFFSET UNITYSDK_OFFSET(0xBC41690)
#define CLASS_2_CC52B2B72720B38A___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xBC42270)

inline static constexpr unsigned int Class_2_CC52B2B72720B38A_TypeDefinitionIndex = 75389;

class Class_2_CC52B2B72720B38A : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* LINFKKKAADL; // 0x0
	// static const ::System::String* LDEABAFJJLD; // 0x0
	// static const ::System::String* DJKPLBFDOCD; // 0x0
	// static const ::System::String* GHFCJGHAFIM; // 0x0
	// static const ::System::String* JPCINMNJDJK; // 0x0
	::RPG::MVector3 PDJBFBPEHFE; // 0x28
	::System::Single LLNIGIGFCEA; // 0x34
	::Class_2_CC52B2B72720B38A_WorldThreeSpeState NJJCEADBFOH; // 0x38
	::System::Single PGGLECDKOLM; // 0x3C
	::RPG::MVector3 NAMGGEJCDMP; // 0x40

	::System::Void _ctor(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_8CA56FF24F45C9F3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_8CA56FF24F45C9F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_586171A6FE1495FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A_METHOD_2_586171A6FE1495FB_OFFSET))(this, a1);
	}

	::System::Void __AddEndCellEffect_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC52B2B72720B38A___ADDENDCELLEFFECT_B__5_0_OFFSET))(this);
	}
};
