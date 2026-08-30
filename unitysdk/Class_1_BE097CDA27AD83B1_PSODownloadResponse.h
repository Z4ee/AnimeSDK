#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE097CDA27AD83B1_PSODownloadResponse_Result.h"
#include "unitysdk/Class_1_BE097CDA27AD83B1_PSODownloadResponse_Status.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BE097CDA27AD83B1_PSODOWNLOADRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18238310)

inline static constexpr unsigned int Class_1_BE097CDA27AD83B1_PSODownloadResponse_TypeDefinitionIndex = 47868;

class Class_1_BE097CDA27AD83B1_PSODownloadResponse : public ::System::Object
{
public:
	::Class_1_BE097CDA27AD83B1_PSODownloadResponse_Status status; // 0x10
	::Class_1_BE097CDA27AD83B1_PSODownloadResponse_Result result; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_PSODOWNLOADRESPONSE__CTOR_OFFSET))(this);
	}
};
