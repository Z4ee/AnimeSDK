#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x165724E0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_CcException_TypeDefinitionIndex = 28161;

	class BGCc_CcException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
