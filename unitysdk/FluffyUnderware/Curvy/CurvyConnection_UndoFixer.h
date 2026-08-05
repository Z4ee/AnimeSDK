#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvyConnection; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UNDOFIXER_FIXISSUESINTRODUCEDBYUNDOING_OFFSET UNITYSDK_OFFSET(0x1F7A6FB0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UNDOFIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A3350)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection_UndoFixer_TypeDefinitionIndex = 39489;

	class CurvyConnection_UndoFixer : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvyConnection* curvyConnection; // 0x10

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvyConnection* curvyConnection)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyConnection*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UNDOFIXER__CTOR_OFFSET))(this, curvyConnection);
		}

		::System::Void FixIssuesIntroducedByUndoing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UNDOFIXER_FIXISSUESINTRODUCEDBYUNDOING_OFFSET))(this);
		}
	};
}
