#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AntiCheatClientViolationType_TypeDefinitionIndex = 44190;

	enum class AntiCheatClientViolationType : ::System::Int32
	{
		Invalid = 0,
		IntegrityCatalogNotFound = 1,
		IntegrityCatalogError = 2,
		IntegrityCatalogCertificateRevoked = 3,
		IntegrityCatalogMissingMainExecutable = 4,
		GameFileMismatch = 5,
		RequiredGameFileNotFound = 6,
		UnknownGameFileForbidden = 7,
		SystemFileUntrusted = 8,
		ForbiddenModuleLoaded = 9,
		CorruptedMemory = 10,
		ForbiddenToolDetected = 11,
		InternalAntiCheatViolation = 12,
		CorruptedNetworkMessageFlow = 13,
		VirtualMachineNotAllowed = 14,
		ForbiddenSystemConfiguration = 15,
	};
}
