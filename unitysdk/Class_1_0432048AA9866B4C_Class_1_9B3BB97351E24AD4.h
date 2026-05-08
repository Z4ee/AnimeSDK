#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectProxy_1; }

#define CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1293D1E0)
#define CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1293C700)
#define CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4_RELEASE_OFFSET UNITYSDK_OFFSET(0x1293D150)
#define CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1293C170)

inline static constexpr unsigned int Class_1_0432048AA9866B4C_Class_1_9B3BB97351E24AD4_TypeDefinitionIndex = 42202;

class Class_1_0432048AA9866B4C_Class_1_9B3BB97351E24AD4 : public ::System::Object
{
public:
	::Foundation::ObjectProxy_1<::Class_1_0432048AA9866B4C_Class_1_9B3BB97351E24AD4*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4__CTOR_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4_GET_HANDLE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0432048AA9866B4C_CLASS_1_9B3BB97351E24AD4_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
