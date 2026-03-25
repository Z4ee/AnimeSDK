#pragma once
#include "unitysdk/unitysdk.h"

namespace Simplygon
{
	inline static constexpr unsigned int EErrorCodes_TypeDefinitionIndex = 29542;

	enum class EErrorCodes : ::System::Int32
	{
		NoError = 0,
		NoLicense = -1,
		NotInitialized = -2,
		AlreadyInitialized = -3,
		DLLOrDependenciesNotFound = -4,
		InvalidInputParam = -5,
		FailedTesting = -6,
		DLLAndHeaderFileIsNotMatching = -7,
		DLLFailedToLoad = -8,
		LicenseNotForThisApplication = -9,
		LicenseNotForThisPlatform = -10,
		LicenseNotForThisVersion = -11,
		FailedToCreatePipelineSerializer = -12,
		FailedToRunPipeline = -13,
		UnhandledException = -14,
		FileError = -15,
		InvalidPath = -16,
		DependencyMissing = -17,
		UnexpectedError = -18,
		FailedToUploadFreeLicenseAsset = -50,
		ExceptionalError = -1000,
		FailedToResolveLicenseServerHostName = -10001,
		FailedToConnectToLicenseServer = -10002,
		FailedToConnectToLicenseServerAndSendData = -10003,
		FailedToConnectToLicenseServerAndReceiveData = -10004,
		DataFromLicenseServerIsCorrupt = -10005,
		LicenseHasExpired = -10006,
		LicenseIsInvalid = -10007,
		LicenseNotForThisProduct = -10008,
		NoNetworkCardFound = -10009,
		LicenseDecodeFailed = -10010,
		LicenseLockNotMatchingMachine = -10011,
		ConnectionToLicenseServerLost = -10012,
		LicenseHashDataCorrupt = -10013,
		LicenseExpired = -10014,
		LicenseNotLockedForThisMachine = -10020,
		YourLicenseRequiresLatestWindows10 = -10024,
		LicenseServerReturnedBadRequest = -10400,
		ProcessingCap = -10403,
		UnknownLicenseKey = -10404,
		LicenseIsNotActive = -10410,
		MaxNodesReachForThisLicense = -10409,
		YourLicenseRequiresLatestSimplygon = -10426,
		LicenseServerReturnServerError = -10501,
		ProcessingValidationError = -20001,
	};
}
