#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1E40A2C9A8E3E7C3___C_METHOD_1_7934FFDF161D1969_OFFSET UNITYSDK_OFFSET(0x12BB07E0)
#define CLASS_1_1E40A2C9A8E3E7C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB0790)
#define CLASS_1_1E40A2C9A8E3E7C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB07D0)

inline static constexpr unsigned int Class_1_1E40A2C9A8E3E7C3___c_TypeDefinitionIndex = 42464;

class Class_1_1E40A2C9A8E3E7C3___c : public ::System::Object
{
public:
	static ::Class_1_1E40A2C9A8E3E7C3___c** StaticGet___9()
	{
		return (::Class_1_1E40A2C9A8E3E7C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E40A2C9A8E3E7C3___c_TypeDefinitionIndex)->GetStaticField(0x36080);
	}
	static ::System::Comparison_1<::System::DateTime>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E40A2C9A8E3E7C3___c_TypeDefinitionIndex)->GetStaticField(0x36088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7934FFDF161D1969(::System::DateTime a1, ::System::DateTime a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_1E40A2C9A8E3E7C3___C_METHOD_1_7934FFDF161D1969_OFFSET))(this, a1, a2);
	}
};
