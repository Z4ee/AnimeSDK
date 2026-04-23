#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8E307E51EDDD52B9_METHOD_1_3C240BE83D072482_OFFSET UNITYSDK_OFFSET(0x9767F40)
#define CLASS_1_8E307E51EDDD52B9_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x9767F30)
#define CLASS_1_8E307E51EDDD52B9_METHOD_1_E8FC0507C3ED6DFC_OFFSET UNITYSDK_OFFSET(0x9767F20)
#define CLASS_1_8E307E51EDDD52B9__CTOR_OFFSET UNITYSDK_OFFSET(0x9767FB0)

inline static constexpr unsigned int Class_1_8E307E51EDDD52B9_TypeDefinitionIndex = 49477;

class Class_1_8E307E51EDDD52B9 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_2; // 0x10
	::RPG::GameCore::FixPoint Field_1_0; // 0x18
	::RPG::GameCore::FixPoint Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E307E51EDDD52B9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::Collision2DShapeType Method_1_E8FC0507C3ED6DFC()
	{
		return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E307E51EDDD52B9_METHOD_1_E8FC0507C3ED6DFC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E307E51EDDD52B9_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::Class_1_8E307E51EDDD52B9* Method_1_3C240BE83D072482(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::Class_1_8E307E51EDDD52B9*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8E307E51EDDD52B9_METHOD_1_3C240BE83D072482_OFFSET))(this, a1, a2, a3);
	}
};
