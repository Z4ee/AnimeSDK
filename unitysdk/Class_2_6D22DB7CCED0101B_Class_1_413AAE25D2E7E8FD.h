#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D22DB7CCED0101B;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }

#define CLASS_2_6D22DB7CCED0101B_CLASS_1_413AAE25D2E7E8FD_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x11DD17B0)
#define CLASS_2_6D22DB7CCED0101B_CLASS_1_413AAE25D2E7E8FD_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11DD18E0)
#define CLASS_2_6D22DB7CCED0101B_CLASS_1_413AAE25D2E7E8FD__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD17A0)

inline static constexpr unsigned int Class_2_6D22DB7CCED0101B_Class_1_413AAE25D2E7E8FD_TypeDefinitionIndex = 63204;

class Class_2_6D22DB7CCED0101B_Class_1_413AAE25D2E7E8FD : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::MoleMole::TextureSheetAnimCurveParam* Field_1_0; // 0x18
	::Class_2_6D22DB7CCED0101B* Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D22DB7CCED0101B_CLASS_1_413AAE25D2E7E8FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D22DB7CCED0101B_CLASS_1_413AAE25D2E7E8FD_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D22DB7CCED0101B_CLASS_1_413AAE25D2E7E8FD_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
