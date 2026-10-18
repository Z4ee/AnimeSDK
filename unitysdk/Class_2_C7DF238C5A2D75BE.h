#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MaterialSwitchBehavior; }

#define CLASS_2_C7DF238C5A2D75BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB583A60)
#define CLASS_2_C7DF238C5A2D75BE_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xB583B50)
#define CLASS_2_C7DF238C5A2D75BE_METHOD_2_B534C30D5C34ECA2_OFFSET UNITYSDK_OFFSET(0xB583AB0)
#define CLASS_2_C7DF238C5A2D75BE__CTOR_OFFSET UNITYSDK_OFFSET(0xB583A50)

inline static constexpr unsigned int Class_2_C7DF238C5A2D75BE_TypeDefinitionIndex = 57362;

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

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7DF238C5A2D75BE_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}
};
