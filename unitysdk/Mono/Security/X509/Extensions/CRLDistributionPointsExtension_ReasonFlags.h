#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int CRLDistributionPointsExtension_ReasonFlags_TypeDefinitionIndex = 2331;

	enum class CRLDistributionPointsExtension_ReasonFlags : ::System::Int32
	{
		Unused = 0,
		KeyCompromise = 1,
		CACompromise = 2,
		AffiliationChanged = 3,
		Superseded = 4,
		CessationOfOperation = 5,
		CertificateHold = 6,
		PrivilegeWithdrawn = 7,
		AACompromise = 8,
	};
}
