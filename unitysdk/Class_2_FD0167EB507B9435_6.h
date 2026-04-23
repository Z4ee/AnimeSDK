#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_FD0167EB507B9435_6_METHOD_2_042897DD9B0C1E7E_1_OFFSET UNITYSDK_OFFSET(0x9679A50)
#define CLASS_2_FD0167EB507B9435_6_METHOD_2_042897DD9B0C1E7E_OFFSET UNITYSDK_OFFSET(0x96799B0)
#define CLASS_2_FD0167EB507B9435_6_METHOD_2_DE75578C192B7F1F_OFFSET UNITYSDK_OFFSET(0x9679AF0)
#define CLASS_2_FD0167EB507B9435_6__CTOR_OFFSET UNITYSDK_OFFSET(0x96799A0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_6_TypeDefinitionIndex = 59860;

class Class_2_FD0167EB507B9435_6 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightNodeType Method_2_042897DD9B0C1E7E()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6_METHOD_2_042897DD9B0C1E7E_OFFSET))(this);
	}

	::RPG::GameCore::GridFightNodeType Method_2_042897DD9B0C1E7E_1()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6_METHOD_2_042897DD9B0C1E7E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_DE75578C192B7F1F(::RPG::GameCore::GridFightNodeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_6_METHOD_2_DE75578C192B7F1F_OFFSET))(this, a1);
	}
};
