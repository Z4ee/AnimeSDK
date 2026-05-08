#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MB2_TEXTUREBAKERESULTS_COROUTINERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB02AB0)

inline static constexpr unsigned int MB2_TextureBakeResults_CoroutineResult_TypeDefinitionIndex = 84956;

class MB2_TextureBakeResults_CoroutineResult : public ::System::Object
{
public:
	::System::Boolean isComplete; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_COROUTINERESULT__CTOR_OFFSET))(this);
	}
};
