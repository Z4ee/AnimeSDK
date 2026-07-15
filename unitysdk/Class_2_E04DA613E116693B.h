#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_23EE85915AA1F6C8;
class Class_2_C6F37FCBCDAC37E4;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_E04DA613E116693B_METHOD_2_276FB1396B615B6A_OFFSET UNITYSDK_OFFSET(0x181C6310)
#define CLASS_2_E04DA613E116693B_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x181C5F20)
#define CLASS_2_E04DA613E116693B_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x181C6240)
#define CLASS_2_E04DA613E116693B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x181C5DA0)
#define CLASS_2_E04DA613E116693B_METHOD_2_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0x181C6180)
#define CLASS_2_E04DA613E116693B_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x181C62C0)
#define CLASS_2_E04DA613E116693B_METHOD_2_F4835D1CBEED047B_OFFSET UNITYSDK_OFFSET(0x181C6020)
#define CLASS_2_E04DA613E116693B__CTOR_OFFSET UNITYSDK_OFFSET(0x181C6370)
#define CLASS_2_E04DA613E116693B__ONBIND_OFFSET UNITYSDK_OFFSET(0x181C5DF0)

inline static constexpr unsigned int Class_2_E04DA613E116693B_TypeDefinitionIndex = 68059;

class Class_2_E04DA613E116693B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::RPGAnimationEvent* Field_2_1; // 0x60
	::RPG::Client::AnimatorButton* Field_2_2; // 0x68
	::UnityEngine::UI::Image* Field_2_3; // 0x70
	::Struct_2_96F8F0A04B900A9E Field_2_4; // 0x78
	::UnityEngine::Animation* Field_2_5; // 0x80
	::Class_1_23EE85915AA1F6C8* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::Class_2_C6F37FCBCDAC37E4* Field_2_8; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_F4835D1CBEED047B(::Class_1_23EE85915AA1F6C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23EE85915AA1F6C8*))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_F4835D1CBEED047B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_E092EFE670864887_OFFSET))(this);
	}

	::System::Void Method_2_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
	}

	::System::Void Method_2_276FB1396B615B6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04DA613E116693B_METHOD_2_276FB1396B615B6A_OFFSET))(this);
	}
};
