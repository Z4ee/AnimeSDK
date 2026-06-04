#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1894CE70)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_CcException_TypeDefinitionIndex = 34067;

	class BGCc_CcException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
