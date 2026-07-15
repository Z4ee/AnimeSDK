#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_785640A227AAD72E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18BA09C0)
#define CLASS_2_785640A227AAD72E_METHOD_2_AE3C2D5F7D9D83D5_OFFSET UNITYSDK_OFFSET(0x18BA0720)
#define CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18BA06E0)
#define CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18BA0970)
#define CLASS_2_785640A227AAD72E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18BA06A0)
#define CLASS_2_785640A227AAD72E_METHOD_2_D416FACB8906C8FF_OFFSET UNITYSDK_OFFSET(0x18BA07B0)
#define CLASS_2_785640A227AAD72E__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA0A30)
#define CLASS_2_785640A227AAD72E__ONBIND_OFFSET UNITYSDK_OFFSET(0x18BA0610)
#define CLASS_2_785640A227AAD72E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18BA0770)

inline static constexpr unsigned int Class_2_785640A227AAD72E_TypeDefinitionIndex = 68584;

class Class_2_785640A227AAD72E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::System::String* Field_2_3; // 0x68
	::RPG::Client::LocalizedTextSDF* Field_2_4; // 0x70
	::RPG::Client::LocalizedTextSDF* Field_2_5; // 0x78
	::System::String* Field_2_6; // 0x80

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
