#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_C1714D5E615D4B4B_15;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define CLASS_2_0E25B4D32AABF9BB_CLASS_1_24242F9CE06FB4CC_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x101C11E0)
#define CLASS_2_0E25B4D32AABF9BB_CLASS_1_24242F9CE06FB4CC_METHOD_1_763D1EB848A9B89F_OFFSET UNITYSDK_OFFSET(0x101C1130)
#define CLASS_2_0E25B4D32AABF9BB_CLASS_1_24242F9CE06FB4CC__CTOR_OFFSET UNITYSDK_OFFSET(0x101C1120)

inline static constexpr unsigned int Class_2_0E25B4D32AABF9BB_Class_1_24242F9CE06FB4CC_TypeDefinitionIndex = 52638;

class Class_2_0E25B4D32AABF9BB_Class_1_24242F9CE06FB4CC : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_0; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Class_3_C1714D5E615D4B4B_15*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_CLASS_1_24242F9CE06FB4CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_763D1EB848A9B89F(::Class_3_C1714D5E615D4B4B_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C1714D5E615D4B4B_15*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_CLASS_1_24242F9CE06FB4CC_METHOD_1_763D1EB848A9B89F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_CLASS_1_24242F9CE06FB4CC_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
