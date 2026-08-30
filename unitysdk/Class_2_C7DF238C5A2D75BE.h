#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MaterialSwitchBehavior; }

#define CLASS_2_C7DF238C5A2D75BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6DF630)
#define CLASS_2_C7DF238C5A2D75BE_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xB6DF740)
#define CLASS_2_C7DF238C5A2D75BE_METHOD_2_B534C30D5C34ECA2_OFFSET UNITYSDK_OFFSET(0xB6DF680)
#define CLASS_2_C7DF238C5A2D75BE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DF620)

inline static constexpr unsigned int Class_2_C7DF238C5A2D75BE_TypeDefinitionIndex = 57518;

class Class_2_C7DF238C5A2D75BE : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::MaterialSwitchBehavior* EHKDPNGAHCG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7DF238C5A2D75BE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7DF238C5A2D75BE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B534C30D5C34ECA2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7DF238C5A2D75BE_METHOD_2_B534C30D5C34ECA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7DF238C5A2D75BE_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}
};
