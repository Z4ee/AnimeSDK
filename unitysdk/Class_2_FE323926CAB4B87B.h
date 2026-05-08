#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_FE323926CAB4B87B_Enum_3_D5A47A9198A9EE8B.h"

namespace System { class Action; }

#define CLASS_2_FE323926CAB4B87B_METHOD_2_44A2CEF2271A5F01_OFFSET UNITYSDK_OFFSET(0xDB1CAB0)
#define CLASS_2_FE323926CAB4B87B_METHOD_2_C7F84614C46F5039_OFFSET UNITYSDK_OFFSET(0xDB1CC10)
#define CLASS_2_FE323926CAB4B87B__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB1CAA0)
#define CLASS_2_FE323926CAB4B87B__CTOR_OFFSET UNITYSDK_OFFSET(0xDB1CA90)

inline static constexpr unsigned int Class_2_FE323926CAB4B87B_TypeDefinitionIndex = 69609;

class Class_2_FE323926CAB4B87B : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FE323926CAB4B87B_TypeDefinitionIndex)->GetStaticField(0xAA50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE323926CAB4B87B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FE323926CAB4B87B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_44A2CEF2271A5F01(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FE323926CAB4B87B_METHOD_2_44A2CEF2271A5F01_OFFSET))(this, a1);
	}

	::Class_2_FE323926CAB4B87B_Enum_3_D5A47A9198A9EE8B Method_2_C7F84614C46F5039(::System::Int32 a1)
	{
		return ((::Class_2_FE323926CAB4B87B_Enum_3_D5A47A9198A9EE8B(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE323926CAB4B87B_METHOD_2_C7F84614C46F5039_OFFSET))(this, a1);
	}
};
