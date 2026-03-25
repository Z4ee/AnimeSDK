#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_83665B095F1535B5_17;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_E0065B933D71D9A9_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x10C62620)
#define CLASS_2_E0065B933D71D9A9_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10C62510)
#define CLASS_2_E0065B933D71D9A9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C62380)
#define CLASS_2_E0065B933D71D9A9_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x10C62290)
#define CLASS_2_E0065B933D71D9A9_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x10C62480)
#define CLASS_2_E0065B933D71D9A9_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10C623F0)
#define CLASS_2_E0065B933D71D9A9_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x10C625D0)
#define CLASS_2_E0065B933D71D9A9__CTOR_OFFSET UNITYSDK_OFFSET(0x10C62680)
#define CLASS_2_E0065B933D71D9A9__ONBIND_OFFSET UNITYSDK_OFFSET(0x10C62000)
#define CLASS_2_E0065B933D71D9A9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10C626B0)

inline static constexpr unsigned int Class_2_E0065B933D71D9A9_TypeDefinitionIndex = 58752;

class Class_2_E0065B933D71D9A9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::UnityEngine::Animator* Field_2_0; // 0x60
	::RPG::Client::RPGAnimationEvent* Field_2_1; // 0x68
	::Class_1_83665B095F1535B5_17* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_83665B095F1535B5_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_17*))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0065B933D71D9A9___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
