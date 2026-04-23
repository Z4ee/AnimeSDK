#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace System { class Object; }

#define CLASS_2_E943A537195DB54D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119E4F10)
#define CLASS_2_E943A537195DB54D_METHOD_2_51C705BBAF9B6304_OFFSET UNITYSDK_OFFSET(0x119E5040)
#define CLASS_2_E943A537195DB54D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x119E5960)
#define CLASS_2_E943A537195DB54D_METHOD_2_B454A31C7AC848CE_OFFSET UNITYSDK_OFFSET(0x119E5170)
#define CLASS_2_E943A537195DB54D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x119E58B0)
#define CLASS_2_E943A537195DB54D_METHOD_2_DEFA2D2CA8FF3213_OFFSET UNITYSDK_OFFSET(0x119E54A0)
#define CLASS_2_E943A537195DB54D__CTOR_OFFSET UNITYSDK_OFFSET(0x119E59E0)

inline static constexpr unsigned int Class_2_E943A537195DB54D_TypeDefinitionIndex = 52821;

class Class_2_E943A537195DB54D : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::ColliderTriggerComponent* Field_2_1; // 0x18
	::RPG::GameCore::MapRotationAirlockConfig* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_51C705BBAF9B6304(::RPG::GameCore::MapRotationAirlockConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationAirlockConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_51C705BBAF9B6304_OFFSET))(this, a1);
	}

	::System::Void Method_2_B454A31C7AC848CE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_B454A31C7AC848CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEFA2D2CA8FF3213(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::AirlockEvent a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::AirlockEvent))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_DEFA2D2CA8FF3213_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
