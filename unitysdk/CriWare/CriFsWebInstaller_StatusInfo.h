#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsWebInstaller_Error.h"
#include "unitysdk/CriWare/CriFsWebInstaller_Status.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_StatusInfo_TypeDefinitionIndex = 37966;

	struct alignas(8) CriFsWebInstaller_StatusInfo
	{
		::CriWare::CriFsWebInstaller_Status status; // 0x10
		::CriWare::CriFsWebInstaller_Error error; // 0x14
		::System::Int32 httpStatusCode; // 0x18
		::System::Int64 contentsSize; // 0x20
		::System::Int64 receivedSize; // 0x28
	};
}
