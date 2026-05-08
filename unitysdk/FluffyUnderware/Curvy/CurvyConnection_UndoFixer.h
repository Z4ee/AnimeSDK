#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvyConnection; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UNDOFIXER_FIXISSUESINTRODUCEDBYUNDOING_OFFSET UNITYSDK_OFFSET(0x1C0BADD0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UNDOFIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B71B0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection_UndoFixer_TypeDefinitionIndex = 37207;

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
