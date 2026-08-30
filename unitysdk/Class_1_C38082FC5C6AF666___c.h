#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C38082FC5C6AF666;

#define CLASS_1_C38082FC5C6AF666___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E113EE0)
#define CLASS_1_C38082FC5C6AF666___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E113F20)
#define CLASS_1_C38082FC5C6AF666___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E113F30)

inline static constexpr unsigned int Class_1_C38082FC5C6AF666___c_TypeDefinitionIndex = 32930;

class Class_1_C38082FC5C6AF666___c : public ::System::Object
{
public:
	static ::Class_1_C38082FC5C6AF666___c** StaticGet___9()
	{
		return (::Class_1_C38082FC5C6AF666___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C38082FC5C6AF666___c_TypeDefinitionIndex)->GetStaticField(0x1A490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C38082FC5C6AF666___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C38082FC5C6AF666___C__CTOR_OFFSET))(this);
	}

	::Class_1_C38082FC5C6AF666* __cctor_b__28_0()
	{
		return ((::Class_1_C38082FC5C6AF666*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C38082FC5C6AF666___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
