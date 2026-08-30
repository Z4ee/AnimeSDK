#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_16E338961C76E577_METHOD_1_3AFB4EBA122A4388_OFFSET UNITYSDK_OFFSET(0xBB0A960)
#define CLASS_1_16E338961C76E577_METHOD_1_54A434EE00ACE7E9_OFFSET UNITYSDK_OFFSET(0xBB0AC80)
#define CLASS_1_16E338961C76E577__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBB0A950)
#define CLASS_1_16E338961C76E577__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0A940)

inline static constexpr unsigned int Class_1_16E338961C76E577_TypeDefinitionIndex = 73023;

class Class_1_16E338961C76E577 : public ::System::Object
{
public:
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x10
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_3AFB4EBA122A4388()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577_METHOD_1_3AFB4EBA122A4388_OFFSET))(this);
	}

	::System::String* Method_1_54A434EE00ACE7E9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577_METHOD_1_54A434EE00ACE7E9_OFFSET))(this);
	}
};
