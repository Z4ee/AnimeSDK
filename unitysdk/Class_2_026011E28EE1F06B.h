#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_026011E28EE1F06B_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x1559D890)
#define CLASS_2_026011E28EE1F06B_METHOD_2_827845A152288033_OFFSET UNITYSDK_OFFSET(0x1559D6A0)
#define CLASS_2_026011E28EE1F06B_METHOD_2_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0x1559D7E0)
#define CLASS_2_026011E28EE1F06B_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x1559D990)
#define CLASS_2_026011E28EE1F06B__CTOR_OFFSET UNITYSDK_OFFSET(0x1559DAA0)
#define CLASS_2_026011E28EE1F06B__ONBIND_OFFSET UNITYSDK_OFFSET(0x1559D930)

inline static constexpr unsigned int Class_2_026011E28EE1F06B_TypeDefinitionIndex = 71817;

class Class_2_026011E28EE1F06B : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* MKKFPJGMJOO; // 0x0
	::System::String* IGJJHEEENHC; // 0x60
	::UnityEngine::Animator* APPGGMLEPLN; // 0x68
	::System::Single ADPMMNEFDPA; // 0x70
	::System::Boolean IDBHEIBEGBA; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_827845A152288033(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_827845A152288033_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_2_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_026011E28EE1F06B_METHOD_2_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}
};
