#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace System { class Object; }

#define CLASS_2_E943A537195DB54D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFB2C20)
#define CLASS_2_E943A537195DB54D_METHOD_2_75240BEAF4388752_OFFSET UNITYSDK_OFFSET(0xCFB2D60)
#define CLASS_2_E943A537195DB54D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCFB36D0)
#define CLASS_2_E943A537195DB54D_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xCFB3620)
#define CLASS_2_E943A537195DB54D_METHOD_2_DEFA2D2CA8FF3213_OFFSET UNITYSDK_OFFSET(0xCFB3210)
#define CLASS_2_E943A537195DB54D_METHOD_2_EC494F94772C40E8_OFFSET UNITYSDK_OFFSET(0xCFB2ED0)
#define CLASS_2_E943A537195DB54D__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB3750)

inline static constexpr unsigned int Class_2_E943A537195DB54D_TypeDefinitionIndex = 57464;

class Class_2_E943A537195DB54D : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::ColliderTriggerComponent* FKDFCAGAEBD; // 0x18
	::RPG::GameCore::MapRotationAirlockConfig* BIJGJPLJPGK; // 0x20
	::System::UInt32 PEEFHNHDBMF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_75240BEAF4388752(::RPG::GameCore::MapRotationAirlockConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationAirlockConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_75240BEAF4388752_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC494F94772C40E8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D_METHOD_2_EC494F94772C40E8_OFFSET))(this, a1);
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
