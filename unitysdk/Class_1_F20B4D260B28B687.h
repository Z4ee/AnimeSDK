#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_597;
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define CLASS_1_F20B4D260B28B687_METHOD_1_83CBD469E7FA0A2C_OFFSET UNITYSDK_OFFSET(0x1BB180C0)
#define CLASS_1_F20B4D260B28B687_METHOD_1_B87196554F6363C7_OFFSET UNITYSDK_OFFSET(0x1BB183C0)
#define CLASS_1_F20B4D260B28B687__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB180B0)

inline static constexpr unsigned int Class_1_F20B4D260B28B687_TypeDefinitionIndex = 73509;

class Class_1_F20B4D260B28B687 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20B4D260B28B687__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_83CBD469E7FA0A2C(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F20B4D260B28B687_METHOD_1_83CBD469E7FA0A2C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B87196554F6363C7(::MiHoYo::SDK::JSONObject*& a1, ::Class_2_208CC9941471731A_597* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*&, ::Class_2_208CC9941471731A_597*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F20B4D260B28B687_METHOD_1_B87196554F6363C7_OFFSET))(a1, a2, a3, a4);
	}
};
