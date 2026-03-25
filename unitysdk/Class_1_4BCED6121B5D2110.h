#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraBattleShowNPCTalkBubble; }

#define CLASS_1_4BCED6121B5D2110_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xB8CDF70)
#define CLASS_1_4BCED6121B5D2110_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xB8CDE20)
#define CLASS_1_4BCED6121B5D2110__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CDDE0)

inline static constexpr unsigned int Class_1_4BCED6121B5D2110_TypeDefinitionIndex = 63858;

class Class_1_4BCED6121B5D2110 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*))((::PBYTE)hIl2Cpp + CLASS_1_4BCED6121B5D2110__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BCED6121B5D2110_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BCED6121B5D2110_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
