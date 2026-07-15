#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;

#define CLASS_1_A8214137EF691B7A_METHOD_1_F005C1349A09D61B_1_OFFSET UNITYSDK_OFFSET(0x157B8C80)
#define CLASS_1_A8214137EF691B7A_METHOD_1_F005C1349A09D61B_OFFSET UNITYSDK_OFFSET(0x157B8B00)
#define CLASS_1_A8214137EF691B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x157B8AF0)

inline static constexpr unsigned int Class_1_A8214137EF691B7A_TypeDefinitionIndex = 59754;

class Class_1_A8214137EF691B7A : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A8214137EF691B7A__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F005C1349A09D61B(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_A8214137EF691B7A_METHOD_1_F005C1349A09D61B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_F005C1349A09D61B_1(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_A8214137EF691B7A_METHOD_1_F005C1349A09D61B_1_OFFSET))(this, a1, a2);
	}
};
