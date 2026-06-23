#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define CLASS_2_E19400CC4DEDD36A_METHOD_2_39FFE99F2DCEB398_OFFSET UNITYSDK_OFFSET(0xD59ABA0)
#define CLASS_2_E19400CC4DEDD36A_METHOD_2_70BBBEA481107523_OFFSET UNITYSDK_OFFSET(0xD59ABB0)
#define CLASS_2_E19400CC4DEDD36A__CTOR_OFFSET UNITYSDK_OFFSET(0xD59AB40)

inline static constexpr unsigned int Class_2_E19400CC4DEDD36A_TypeDefinitionIndex = 82839;

class Class_2_E19400CC4DEDD36A : public ::System::EventArgs
{
public:
	::System::Exception* Field_2_0; // 0x10

	::System::Void _ctor(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_E19400CC4DEDD36A__CTOR_OFFSET))(this, a1);
	}

	::System::Exception* Method_2_39FFE99F2DCEB398()
	{
		return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E19400CC4DEDD36A_METHOD_2_39FFE99F2DCEB398_OFFSET))(this);
	}

	::System::Void Method_2_70BBBEA481107523(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_E19400CC4DEDD36A_METHOD_2_70BBBEA481107523_OFFSET))(this, a1);
	}
};
