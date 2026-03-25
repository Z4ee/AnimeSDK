#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB33C80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterAddLookAtCurveData_TypeDefinitionIndex = 38823;

	class CharacterAddLookAtCurveData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* CurveName; // 0x18
		::RPG::Client::LookAtAdditiveCurveConstraint* Constraint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVEDATA__CTOR_OFFSET))(this);
		}
	};
}
