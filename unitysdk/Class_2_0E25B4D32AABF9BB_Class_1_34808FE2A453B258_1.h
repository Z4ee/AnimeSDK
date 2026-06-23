#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define CLASS_2_0E25B4D32AABF9BB_CLASS_1_34808FE2A453B258_1_METHOD_1_F311EA4FC7F38EA4_OFFSET UNITYSDK_OFFSET(0x19EDD710)
#define CLASS_2_0E25B4D32AABF9BB_CLASS_1_34808FE2A453B258_1_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x19EDD740)
#define CLASS_2_0E25B4D32AABF9BB_CLASS_1_34808FE2A453B258_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19EDD700)

inline static constexpr unsigned int Class_2_0E25B4D32AABF9BB_Class_1_34808FE2A453B258_1_TypeDefinitionIndex = 52973;

class Class_2_0E25B4D32AABF9BB_Class_1_34808FE2A453B258_1 : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_1; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_CLASS_1_34808FE2A453B258_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F311EA4FC7F38EA4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_CLASS_1_34808FE2A453B258_1_METHOD_1_F311EA4FC7F38EA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_CLASS_1_34808FE2A453B258_1_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
