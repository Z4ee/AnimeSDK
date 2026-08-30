#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationData; }

#define RPG_CLIENT_CHIMERAEVALUATIONDISPLAYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1B5F2AE0)
#define RPG_CLIENT_CHIMERAEVALUATIONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F2B50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationDisplayData_TypeDefinitionIndex = 63549;

	class ChimeraEvaluationDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraEvaluationData* EvaluationData; // 0x10
		::System::UInt32 ChimeraID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDISPLAYDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ChimeraEvaluationDisplayData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraEvaluationDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDISPLAYDATA_COMPARETO_OFFSET))(this, a1);
		}
	};
}
