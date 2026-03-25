#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/Class_2_D8C03F5048BA0206_WorldThreeSpeState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_D8C03F5048BA0206_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x11647540)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x11646DA0)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11647640)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0x11647080)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x116472E0)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x116476A0)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11646AC0)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x11646E60)
#define CLASS_2_D8C03F5048BA0206_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x11646BC0)
#define CLASS_2_D8C03F5048BA0206__CTOR_OFFSET UNITYSDK_OFFSET(0x11646AB0)
#define CLASS_2_D8C03F5048BA0206___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0x11647630)

inline static constexpr unsigned int Class_2_D8C03F5048BA0206_TypeDefinitionIndex = 61836;

class Class_2_D8C03F5048BA0206 : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::System::Single Field_2_6; // 0x28
	::RPG::MVector3 Field_2_7; // 0x2C
	::Class_2_D8C03F5048BA0206_WorldThreeSpeState Field_2_9; // 0x38
	::RPG::MVector3 Field_2_8; // 0x3C
	::System::Single Field_2_5; // 0x48

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

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_586171A6FE1495FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_586171A6FE1495FB_OFFSET))(this, a1);
	}

	::System::Void __AddEndCellEffect_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206___ADDENDCELLEFFECT_B__5_0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8C03F5048BA0206_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
