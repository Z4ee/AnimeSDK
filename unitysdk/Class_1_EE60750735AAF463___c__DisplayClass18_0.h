#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EE60750735AAF463;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_EE60750735AAF463___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E40580)
#define CLASS_1_EE60750735AAF463___C__DISPLAYCLASS18_0___LOADMEMBERS_B__0_OFFSET UNITYSDK_OFFSET(0x15E40B10)

inline static constexpr unsigned int Class_1_EE60750735AAF463___c__DisplayClass18_0_TypeDefinitionIndex = 82208;

class Class_1_EE60750735AAF463___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_EE60750735AAF463* __4__this; // 0x10
	::RPG::Client::BAPartVariantRes* handler; // 0x18
	::System::String* memberType; // 0x20
	::RPG::Client::AssemNPC* parts; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void __LoadMembers_b__0(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463___C__DISPLAYCLASS18_0___LOADMEMBERS_B__0_OFFSET))(this, a1);
	}
};
