#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_4E4262D27B1F98DF;
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_96F6E9F120D7841D_METHOD_2_189C865264480324_OFFSET UNITYSDK_OFFSET(0xE2405B0)
#define CLASS_2_96F6E9F120D7841D_METHOD_2_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xE240710)
#define CLASS_2_96F6E9F120D7841D_METHOD_2_762C525A1C2AB78D_OFFSET UNITYSDK_OFFSET(0xE240560)
#define CLASS_2_96F6E9F120D7841D_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xE240430)
#define CLASS_2_96F6E9F120D7841D_METHOD_2_DD894227CDEE723C_OFFSET UNITYSDK_OFFSET(0xE2408E0)
#define CLASS_2_96F6E9F120D7841D_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xE2407F0)
#define CLASS_2_96F6E9F120D7841D_METHOD_2_FE10DA0E54555D36_OFFSET UNITYSDK_OFFSET(0xE240680)
#define CLASS_2_96F6E9F120D7841D__CTOR_OFFSET UNITYSDK_OFFSET(0xE240980)
#define CLASS_2_96F6E9F120D7841D__ONBIND_OFFSET UNITYSDK_OFFSET(0xE2404C0)

inline static constexpr unsigned int Class_2_96F6E9F120D7841D_TypeDefinitionIndex = 71454;

class Class_2_96F6E9F120D7841D : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* CJONLJJPLJM; // 0x0
	// static const ::System::String* JHNBEJJJLCO; // 0x0
	// static const ::System::String* PGMNJNHPMGG; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x60
	::RPG::Client::LocalizedText* JGJCHJKLHFG; // 0x68
	::Class_1_4E4262D27B1F98DF* FHKNGKLAMAF; // 0x70
	::System::Int32 HGLBNNPGKPH; // 0x78
	::System::Boolean FFIAGGGEAEG; // 0x7C
	::System::Boolean EMHAACACFOM; // 0x7D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_762C525A1C2AB78D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_762C525A1C2AB78D_OFFSET))(this);
	}

	::System::Void Method_2_FE10DA0E54555D36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_FE10DA0E54555D36_OFFSET))(this);
	}

	::System::Void Method_2_189C865264480324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_189C865264480324_OFFSET))(this);
	}

	::System::Void Method_2_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD894227CDEE723C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_96F6E9F120D7841D_METHOD_2_DD894227CDEE723C_OFFSET))(this, a1, a2);
	}
};
