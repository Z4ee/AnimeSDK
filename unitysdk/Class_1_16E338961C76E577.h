#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_16E338961C76E577_METHOD_1_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0x118339B0)
#define CLASS_1_16E338961C76E577_METHOD_1_B9097CF8E56C3EDB_OFFSET UNITYSDK_OFFSET(0x11833670)
#define CLASS_1_16E338961C76E577__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11833660)
#define CLASS_1_16E338961C76E577__CTOR_OFFSET UNITYSDK_OFFSET(0x11833650)

inline static constexpr unsigned int Class_1_16E338961C76E577_TypeDefinitionIndex = 59925;

class Class_1_16E338961C76E577 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::RPG::Client::UIController* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_B9097CF8E56C3EDB()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577_METHOD_1_B9097CF8E56C3EDB_OFFSET))(this);
	}

	::System::String* Method_1_49091FA7D0FEFC35()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577_METHOD_1_49091FA7D0FEFC35_OFFSET))(this);
	}
};
