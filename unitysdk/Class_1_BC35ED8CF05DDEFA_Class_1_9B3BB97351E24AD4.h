#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectProxy_1; }

#define CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x16EA5F00)
#define CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16EA5FA0)
#define CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4_RELEASE_OFFSET UNITYSDK_OFFSET(0x16EA5E70)
#define CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA5F90)

inline static constexpr unsigned int Class_1_BC35ED8CF05DDEFA_Class_1_9B3BB97351E24AD4_TypeDefinitionIndex = 59585;

class Class_1_BC35ED8CF05DDEFA_Class_1_9B3BB97351E24AD4 : public ::System::Object
{
public:
	::Foundation::ObjectProxy_1<::Class_1_BC35ED8CF05DDEFA_Class_1_9B3BB97351E24AD4*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4__CTOR_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4_RELEASE_OFFSET))(this);
	}

	::Foundation::ObjectHandle get_Handle()
	{
		return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4_GET_HANDLE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC35ED8CF05DDEFA_CLASS_1_9B3BB97351E24AD4_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
