#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_813FDB0DF0F3263D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x163C2870)
#define CLASS_2_813FDB0DF0F3263D_METHOD_2_43841C47716286CE_OFFSET UNITYSDK_OFFSET(0x163C2910)
#define CLASS_2_813FDB0DF0F3263D__CTOR_OFFSET UNITYSDK_OFFSET(0x163C29B0)
#define CLASS_2_813FDB0DF0F3263D__ONBIND_OFFSET UNITYSDK_OFFSET(0x163C2770)

inline static constexpr unsigned int Class_2_813FDB0DF0F3263D_TypeDefinitionIndex = 71362;

class Class_2_813FDB0DF0F3263D : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FOJHBNDBANG; // 0x0
	// static const ::System::String* KGNMFJAMICO; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
	::UnityEngine::Transform* LKCFNPNEFHH; // 0x70
	::System::Boolean IAPJFCPEOBL; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_43841C47716286CE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_813FDB0DF0F3263D_METHOD_2_43841C47716286CE_OFFSET))(this, a1, a2);
	}
};
