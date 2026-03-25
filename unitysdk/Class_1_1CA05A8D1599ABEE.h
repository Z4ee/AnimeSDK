#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_1CA05A8D1599ABEE_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x88674B0)
#define CLASS_1_1CA05A8D1599ABEE_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x88675F0)
#define CLASS_1_1CA05A8D1599ABEE_METHOD_1_997EBC8B2A2EC9F8_OFFSET UNITYSDK_OFFSET(0x88674D0)
#define CLASS_1_1CA05A8D1599ABEE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88675A0)
#define CLASS_1_1CA05A8D1599ABEE_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x88674C0)
#define CLASS_1_1CA05A8D1599ABEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8867D40)
#define CLASS_1_1CA05A8D1599ABEE__CTOR_OFFSET UNITYSDK_OFFSET(0x8867DB0)
#define CLASS_1_1CA05A8D1599ABEE___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8867E40)

inline static constexpr unsigned int Class_1_1CA05A8D1599ABEE_TypeDefinitionIndex = 64586;

class Class_1_1CA05A8D1599ABEE : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_FAF146B3D74C3C3F*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean _IsRunning_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE_SET_ISRUNNING_OFFSET))(this, value);
	}

	::System::Void Method_1_997EBC8B2A2EC9F8(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE_METHOD_1_997EBC8B2A2EC9F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA05A8D1599ABEE___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
