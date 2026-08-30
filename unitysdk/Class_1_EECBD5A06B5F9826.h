#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EECBD5A06B5F9826_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x15843730)
#define CLASS_1_EECBD5A06B5F9826_METHOD_1_E5DC893BC476FF1B_OFFSET UNITYSDK_OFFSET(0x15843740)
#define CLASS_1_EECBD5A06B5F9826_METHOD_1_E8FC0507C3ED6DFC_OFFSET UNITYSDK_OFFSET(0x15843720)
#define CLASS_1_EECBD5A06B5F9826__CTOR_OFFSET UNITYSDK_OFFSET(0x15843810)

inline static constexpr unsigned int Class_1_EECBD5A06B5F9826_TypeDefinitionIndex = 53909;

class Class_1_EECBD5A06B5F9826 : public ::System::Object
{
public:
	::RPG::GameCore::FixVec2 DAMDFJMHDCM; // 0x10
	::RPG::GameCore::FixPoint IDKONBFPBLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EECBD5A06B5F9826__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::Collision2DShapeType Method_1_E8FC0507C3ED6DFC()
	{
		return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EECBD5A06B5F9826_METHOD_1_E8FC0507C3ED6DFC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EECBD5A06B5F9826_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::Class_1_EECBD5A06B5F9826* Method_1_E5DC893BC476FF1B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_1_EECBD5A06B5F9826*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EECBD5A06B5F9826_METHOD_1_E5DC893BC476FF1B_OFFSET))(this, a1, a2);
	}
};
