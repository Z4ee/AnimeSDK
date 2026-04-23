#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_41BD4C7DF157B06A_1_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x953B1E0)
#define CLASS_1_41BD4C7DF157B06A_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x953B280)
#define CLASS_1_41BD4C7DF157B06A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x953B270)

inline static constexpr unsigned int Class_1_41BD4C7DF157B06A_1_TypeDefinitionIndex = 44459;

class Class_1_41BD4C7DF157B06A_1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7B4E9156998275BE*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7B4E9156998275BE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41BD4C7DF157B06A_1_TypeDefinitionIndex)->GetStaticField(0x56CD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A_1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A_1_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}
};
