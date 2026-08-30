#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F6FF156602524F1C_METHOD_1_AB9C85555C34FC0B_OFFSET UNITYSDK_OFFSET(0x159DD2C0)
#define CLASS_1_F6FF156602524F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x159A6D20)

inline static constexpr unsigned int Class_1_F6FF156602524F1C_TypeDefinitionIndex = 62616;

class Class_1_F6FF156602524F1C : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6FF156602524F1C__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_AB9C85555C34FC0B(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6FF156602524F1C_METHOD_1_AB9C85555C34FC0B_OFFSET))(this, a1);
	}
};
