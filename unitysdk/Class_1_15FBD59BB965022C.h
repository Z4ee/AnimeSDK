#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_15FBD59BB965022C_METHOD_1_1FBD1ECB94F280F9_OFFSET UNITYSDK_OFFSET(0x117C74E0)
#define CLASS_1_15FBD59BB965022C_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x117C74D0)
#define CLASS_1_15FBD59BB965022C_METHOD_1_E8FC0507C3ED6DFC_OFFSET UNITYSDK_OFFSET(0x117C74C0)
#define CLASS_1_15FBD59BB965022C__CTOR_OFFSET UNITYSDK_OFFSET(0x117C7910)

inline static constexpr unsigned int Class_1_15FBD59BB965022C_TypeDefinitionIndex = 49476;

class Class_1_15FBD59BB965022C : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_1; // 0x10
	::RPG::GameCore::FixVec2 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15FBD59BB965022C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::Collision2DShapeType Method_1_E8FC0507C3ED6DFC()
	{
		return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15FBD59BB965022C_METHOD_1_E8FC0507C3ED6DFC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15FBD59BB965022C_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::Class_1_15FBD59BB965022C* Method_1_1FBD1ECB94F280F9(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::Class_1_15FBD59BB965022C*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_15FBD59BB965022C_METHOD_1_1FBD1ECB94F280F9_OFFSET))(this, a1, a2);
	}
};
