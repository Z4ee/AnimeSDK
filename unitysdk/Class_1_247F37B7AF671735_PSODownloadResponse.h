#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_247F37B7AF671735_PSODownloadResponse_Result.h"
#include "unitysdk/Class_1_247F37B7AF671735_PSODownloadResponse_Status.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_247F37B7AF671735_PSODOWNLOADRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x134C9C90)

inline static constexpr unsigned int Class_1_247F37B7AF671735_PSODownloadResponse_TypeDefinitionIndex = 44702;

class Class_1_247F37B7AF671735_PSODownloadResponse : public ::System::Object
{
public:
	::Class_1_247F37B7AF671735_PSODownloadResponse_Status status; // 0x10
	::Class_1_247F37B7AF671735_PSODownloadResponse_Result result; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_PSODOWNLOADRESPONSE__CTOR_OFFSET))(this);
	}
};
