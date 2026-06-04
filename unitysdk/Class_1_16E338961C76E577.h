#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_16E338961C76E577_METHOD_1_305E406F6CC68D46_OFFSET UNITYSDK_OFFSET(0xA7B97E0)
#define CLASS_1_16E338961C76E577_METHOD_1_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0xA7B9AB0)
#define CLASS_1_16E338961C76E577__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA7B97D0)
#define CLASS_1_16E338961C76E577__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B97C0)

inline static constexpr unsigned int Class_1_16E338961C76E577_TypeDefinitionIndex = 68275;

class Class_1_16E338961C76E577 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_305E406F6CC68D46()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577_METHOD_1_305E406F6CC68D46_OFFSET))(this);
	}

	::System::String* Method_1_49091FA7D0FEFC35()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16E338961C76E577_METHOD_1_49091FA7D0FEFC35_OFFSET))(this);
	}
};
