#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9C5B81B43032C8B_PSODownloadResponse_Result.h"
#include "unitysdk/Class_1_A9C5B81B43032C8B_PSODownloadResponse_Status.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A9C5B81B43032C8B_PSODOWNLOADRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x9040330)

inline static constexpr unsigned int Class_1_A9C5B81B43032C8B_PSODownloadResponse_TypeDefinitionIndex = 44156;

class Class_1_A9C5B81B43032C8B_PSODownloadResponse : public ::System::Object
{
public:
	::Class_1_A9C5B81B43032C8B_PSODownloadResponse_Status status; // 0x10
	::Class_1_A9C5B81B43032C8B_PSODownloadResponse_Result result; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9C5B81B43032C8B_PSODOWNLOADRESPONSE__CTOR_OFFSET))(this);
	}
};
