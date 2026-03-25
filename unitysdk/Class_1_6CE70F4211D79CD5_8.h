#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CE70F4211D79CD5_8_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x104C6900)
#define CLASS_1_6CE70F4211D79CD5_8_METHOD_1_E8FC0507C3ED6DFC_OFFSET UNITYSDK_OFFSET(0x104C68F0)
#define CLASS_1_6CE70F4211D79CD5_8__CTOR_OFFSET UNITYSDK_OFFSET(0x104C6910)

inline static constexpr unsigned int Class_1_6CE70F4211D79CD5_8_TypeDefinitionIndex = 45279;

class Class_1_6CE70F4211D79CD5_8 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_8__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::Collision2DShapeType Method_1_E8FC0507C3ED6DFC()
	{
		return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_8_METHOD_1_E8FC0507C3ED6DFC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CE70F4211D79CD5_8_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}
};
