#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_026011E28EE1F06B_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x16002BD0)
#define CLASS_2_026011E28EE1F06B_METHOD_2_827845A152288033_OFFSET UNITYSDK_OFFSET(0x160029E0)
#define CLASS_2_026011E28EE1F06B_METHOD_2_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0x16002B20)
#define CLASS_2_026011E28EE1F06B_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x16002CD0)
#define CLASS_2_026011E28EE1F06B__CTOR_OFFSET UNITYSDK_OFFSET(0x16002DE0)
#define CLASS_2_026011E28EE1F06B__ONBIND_OFFSET UNITYSDK_OFFSET(0x16002C70)

inline static constexpr unsigned int Class_2_026011E28EE1F06B_TypeDefinitionIndex = 68618;

class Class_2_026011E28EE1F06B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::String* Field_2_1; // 0x60
	::UnityEngine::Animator* Field_2_2; // 0x68
	::System::Single Field_2_3; // 0x70
	::System::Boolean Field_2_4; // 0x74

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
