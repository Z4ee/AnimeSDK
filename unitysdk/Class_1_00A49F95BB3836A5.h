#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace BansheeGz::BGSpline::Curve { class BGCc; }

#define CLASS_1_00A49F95BB3836A5_METHOD_1_C1B80A989D466505_OFFSET UNITYSDK_OFFSET(0x12ACFCC0)
#define CLASS_1_00A49F95BB3836A5__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACFE80)

inline static constexpr unsigned int Class_1_00A49F95BB3836A5_TypeDefinitionIndex = 57465;

class Class_1_00A49F95BB3836A5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00A49F95BB3836A5__CTOR_OFFSET))(this);
	}

	::BansheeGz::BGSpline::Components::BGCcTrs* Method_1_C1B80A989D466505(::BansheeGz::BGSpline::Components::BGCcMath* a1)
	{
		return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + CLASS_1_00A49F95BB3836A5_METHOD_1_C1B80A989D466505_OFFSET))(this, a1);
	}
};
