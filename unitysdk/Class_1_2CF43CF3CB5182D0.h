#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AF02CFE638CE6933;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2CF43CF3CB5182D0_METHOD_1_182007691F3936A9_OFFSET UNITYSDK_OFFSET(0xAD1D4C0)
#define CLASS_1_2CF43CF3CB5182D0_METHOD_1_A739E440492E430B_OFFSET UNITYSDK_OFFSET(0xAD1D980)
#define CLASS_1_2CF43CF3CB5182D0_METHOD_1_E41D021D53ED5903_OFFSET UNITYSDK_OFFSET(0xAD1D610)
#define CLASS_1_2CF43CF3CB5182D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAD1D7B0)
#define CLASS_1_2CF43CF3CB5182D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAD1D340)
#define CLASS_1_2CF43CF3CB5182D0__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1D2F0)
#define CLASS_1_2CF43CF3CB5182D0___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAD1E100)

inline static constexpr unsigned int Class_1_2CF43CF3CB5182D0_TypeDefinitionIndex = 48010;

class Class_1_2CF43CF3CB5182D0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_AF02CFE638CE6933*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2CF43CF3CB5182D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_182007691F3936A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0_METHOD_1_182007691F3936A9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_E41D021D53ED5903()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0_METHOD_1_E41D021D53ED5903_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_A739E440492E430B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0_METHOD_1_A739E440492E430B_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CF43CF3CB5182D0___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
