#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelCommandGuideMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelGameInstance; }

#define CLASS_1_8606E935D530592B_METHOD_1_25BB406C7EBB7571_OFFSET UNITYSDK_OFFSET(0x16877410)
#define CLASS_1_8606E935D530592B_METHOD_1_503C96A27939C320_OFFSET UNITYSDK_OFFSET(0x16877450)
#define CLASS_1_8606E935D530592B_METHOD_1_CBAB79CDC5908348_OFFSET UNITYSDK_OFFSET(0x16877350)
#define CLASS_1_8606E935D530592B__CTOR_OFFSET UNITYSDK_OFFSET(0x168774B0)

inline static constexpr unsigned int Class_1_8606E935D530592B_TypeDefinitionIndex = 76936;

class Class_1_8606E935D530592B : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode BHJDJDPLCLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8606E935D530592B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBAB79CDC5908348(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode))((::PBYTE)hIl2Cpp + CLASS_1_8606E935D530592B_METHOD_1_CBAB79CDC5908348_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode Method_1_25BB406C7EBB7571()
	{
		return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelCommandGuideMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8606E935D530592B_METHOD_1_25BB406C7EBB7571_OFFSET))(this);
	}

	::System::Boolean Method_1_503C96A27939C320(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelGameInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8606E935D530592B_METHOD_1_503C96A27939C320_OFFSET))(this, a1);
	}
};
