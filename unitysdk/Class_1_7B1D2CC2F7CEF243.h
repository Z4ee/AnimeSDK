#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_7B1D2CC2F7CEF243_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x171B1370)
#define CLASS_1_7B1D2CC2F7CEF243_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x171B1380)
#define CLASS_1_7B1D2CC2F7CEF243__CTOR_OFFSET UNITYSDK_OFFSET(0x171B1360)

inline static constexpr unsigned int Class_1_7B1D2CC2F7CEF243_TypeDefinitionIndex = 78478;

class Class_1_7B1D2CC2F7CEF243 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B1D2CC2F7CEF243__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B1D2CC2F7CEF243_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B1D2CC2F7CEF243_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
