#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_785640A227AAD72E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC151E20)
#define CLASS_2_785640A227AAD72E_METHOD_2_AE3C2D5F7D9D83D5_OFFSET UNITYSDK_OFFSET(0xC151B70)
#define CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC151B30)
#define CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xC151DD0)
#define CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC151AF0)
#define CLASS_2_785640A227AAD72E_METHOD_2_D416FACB8906C8FF_OFFSET UNITYSDK_OFFSET(0xC151C10)
#define CLASS_2_785640A227AAD72E__CTOR_OFFSET UNITYSDK_OFFSET(0xC151E90)
#define CLASS_2_785640A227AAD72E__ONBIND_OFFSET UNITYSDK_OFFSET(0xC151A60)
#define CLASS_2_785640A227AAD72E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC151BD0)

inline static constexpr unsigned int Class_2_785640A227AAD72E_TypeDefinitionIndex = 71782;

class Class_2_785640A227AAD72E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* NMMPNAINPHM; // 0x0
	// static const ::System::String* HMCCMOHDPHI; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::RPG::Client::LocalizedTextSDF* AADENDDMEBP; // 0x68
	::System::String* JJDGIADDPHM; // 0x70
	::RPG::Client::LocalizedTextSDF* CAJFGLLLNLA; // 0x78
	::System::String* KCOAILOHDND; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AE3C2D5F7D9D83D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E_METHOD_2_AE3C2D5F7D9D83D5_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D416FACB8906C8FF(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E_METHOD_2_D416FACB8906C8FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785640A227AAD72E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
