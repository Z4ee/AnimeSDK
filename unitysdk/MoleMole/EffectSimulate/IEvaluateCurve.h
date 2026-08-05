#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x192354A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int IEvaluateCurve_TypeDefinitionIndex = 60074;

	class IEvaluateCurve : public ::System::Object
	{
	public:
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* DEBUG_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* TITLE_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* CONTENT_HOR_GROUP_NAME; // 0x0
		// static const ::System::String* FADEOUT_LOGIC_GROUP_NAME; // 0x0
		::System::Single INVALID_FLOAT_VAL; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_IEVALUATECURVE__CTOR_OFFSET))(this);
		}
	};
}
