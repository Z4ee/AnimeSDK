#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_A51894D6FE3337D9_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x872C6E0)
#define CLASS_1_A51894D6FE3337D9_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x872CE60)
#define CLASS_1_A51894D6FE3337D9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x872CE10)
#define CLASS_1_A51894D6FE3337D9_METHOD_1_DDB365B3A09E223B_OFFSET UNITYSDK_OFFSET(0x872C7A0)
#define CLASS_1_A51894D6FE3337D9_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x872C6F0)
#define CLASS_1_A51894D6FE3337D9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x872D5B0)
#define CLASS_1_A51894D6FE3337D9__CTOR_OFFSET UNITYSDK_OFFSET(0x872C700)
#define CLASS_1_A51894D6FE3337D9___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x872D5F0)

inline static constexpr unsigned int Class_1_A51894D6FE3337D9_TypeDefinitionIndex = 64587;

class Class_1_A51894D6FE3337D9 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_FAF146B3D74C3C3F*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean _IsRunning_k__BackingField; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_SET_ISRUNNING_OFFSET))(this, value);
	}

	::System::Void Method_1_DDB365B3A09E223B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_METHOD_1_DDB365B3A09E223B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
