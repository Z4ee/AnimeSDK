#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }

#define CLASS_2_50A9761E9CD95464_METHOD_2_CA1F6A8D4711F0E8_OFFSET UNITYSDK_OFFSET(0x123CBD10)
#define CLASS_2_50A9761E9CD95464__CTOR_OFFSET UNITYSDK_OFFSET(0x123CBD00)

inline static constexpr unsigned int Class_2_50A9761E9CD95464_TypeDefinitionIndex = 57605;

class Class_2_50A9761E9CD95464 : public ::Class_1_3002EE73D986F5EA
{
public:
	::MoleMole::UIBubbleTips* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::UIBubbleTips* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + CLASS_2_50A9761E9CD95464__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA1F6A8D4711F0E8(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_50A9761E9CD95464_METHOD_2_CA1F6A8D4711F0E8_OFFSET))(this, a1);
	}
};
