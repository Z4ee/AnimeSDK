#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ItemDropEffectScriptConfig; }
namespace System { class Action; }

#define CLASS_1_28851412A7E17093_CLASS_1_6C684ED4F9F806A6_METHOD_1_A800979D915B835F_OFFSET UNITYSDK_OFFSET(0xB7EAFA0)
#define CLASS_1_28851412A7E17093_CLASS_1_6C684ED4F9F806A6__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EAF90)

inline static constexpr unsigned int Class_1_28851412A7E17093_Class_1_6C684ED4F9F806A6_TypeDefinitionIndex = 68322;

class Class_1_28851412A7E17093_Class_1_6C684ED4F9F806A6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_CLASS_1_6C684ED4F9F806A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A800979D915B835F(::MoleMole::Config::ItemDropEffectScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ItemDropEffectScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_28851412A7E17093_CLASS_1_6C684ED4F9F806A6_METHOD_1_A800979D915B835F_OFFSET))(this, a1);
	}
};
