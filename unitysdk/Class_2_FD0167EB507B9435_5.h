#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_E591DF54310AABF5_1;

#define CLASS_2_FD0167EB507B9435_5_METHOD_2_042897DD9B0C1E7E_1_OFFSET UNITYSDK_OFFSET(0xB822600)
#define CLASS_2_FD0167EB507B9435_5_METHOD_2_042897DD9B0C1E7E_OFFSET UNITYSDK_OFFSET(0xB822560)
#define CLASS_2_FD0167EB507B9435_5_METHOD_2_DE75578C192B7F1F_OFFSET UNITYSDK_OFFSET(0xB8226A0)
#define CLASS_2_FD0167EB507B9435_5__CTOR_OFFSET UNITYSDK_OFFSET(0xB822550)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_5_TypeDefinitionIndex = 65013;

class Class_2_FD0167EB507B9435_5 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_5__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightNodeType Method_2_042897DD9B0C1E7E()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_5_METHOD_2_042897DD9B0C1E7E_OFFSET))(this);
	}

	::RPG::GameCore::GridFightNodeType Method_2_042897DD9B0C1E7E_1()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_5_METHOD_2_042897DD9B0C1E7E_1_OFFSET))(this);
	}

	::System::Boolean Method_2_DE75578C192B7F1F(::RPG::GameCore::GridFightNodeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_5_METHOD_2_DE75578C192B7F1F_OFFSET))(this, a1);
	}
};
