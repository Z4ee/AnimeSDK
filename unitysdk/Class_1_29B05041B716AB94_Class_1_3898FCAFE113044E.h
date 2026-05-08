#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_555FB7E561FBF1C2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_3898FCAFE113044E_METHOD_1_599E24DED186AEDD_OFFSET UNITYSDK_OFFSET(0xF1F0DD0)
#define CLASS_1_29B05041B716AB94_CLASS_1_3898FCAFE113044E_METHOD_1_842F6F8D139C672A_OFFSET UNITYSDK_OFFSET(0xF1F0EE0)
#define CLASS_1_29B05041B716AB94_CLASS_1_3898FCAFE113044E__CTOR_OFFSET UNITYSDK_OFFSET(0xF1F0DC0)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_3898FCAFE113044E_TypeDefinitionIndex = 77602;

class Class_1_29B05041B716AB94_Class_1_3898FCAFE113044E : public ::System::Object
{
public:
	::Class_1_555FB7E561FBF1C2* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Action_1<::System::Int32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_3898FCAFE113044E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_599E24DED186AEDD(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_3898FCAFE113044E_METHOD_1_599E24DED186AEDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_842F6F8D139C672A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_3898FCAFE113044E_METHOD_1_842F6F8D139C672A_OFFSET))(this, a1);
	}
};
