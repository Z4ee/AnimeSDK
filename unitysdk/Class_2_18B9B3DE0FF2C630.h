#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_291F7DA21A504FC4;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x163C31E0)
#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_563FF81B10335834_OFFSET UNITYSDK_OFFSET(0x163C2EF0)
#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x163C2E90)
#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x163C3280)
#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x163C3170)
#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_E41B6A823556FEEA_1_OFFSET UNITYSDK_OFFSET(0x163C3720)
#define CLASS_2_18B9B3DE0FF2C630_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x163C3120)
#define CLASS_2_18B9B3DE0FF2C630__CTOR_OFFSET UNITYSDK_OFFSET(0x163C3860)
#define CLASS_2_18B9B3DE0FF2C630__ONBIND_OFFSET UNITYSDK_OFFSET(0x163C3770)
#define CLASS_2_18B9B3DE0FF2C630__ONTICK_OFFSET UNITYSDK_OFFSET(0x163C33F0)

inline static constexpr unsigned int Class_2_18B9B3DE0FF2C630_TypeDefinitionIndex = 71692;

class Class_2_18B9B3DE0FF2C630 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* OFJONCKDGPG; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x60
	::RPG::GameCore::GameEntity* IFFIKGMJFIJ; // 0x68
	::RPG::Client::UIStateCtrl* LOPDDKFEJEH; // 0x70
	::UnityEngine::UI::Text* CNICLEDFLFF; // 0x78
	::System::Int32 GIDLIKPCPPB; // 0x80
	::System::Boolean DLGFMPNEHGO; // 0x84
	::System::Boolean GHHFHLIBPGA; // 0x85
	::System::Boolean AHILIHNBCPB; // 0x86
	::RPG::GameCore::FixPoint MMOCIIJHFHL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_563FF81B10335834(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_563FF81B10335834_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630_METHOD_2_E41B6A823556FEEA_1_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18B9B3DE0FF2C630__ONBIND_OFFSET))(this);
	}
};
