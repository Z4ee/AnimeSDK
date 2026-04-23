#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }

#define CLASS_1_CE96309E1BBEC794_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9925B90)
#define CLASS_1_CE96309E1BBEC794_METHOD_1_A7C8903CDC2E83E5_OFFSET UNITYSDK_OFFSET(0x9925BA0)
#define CLASS_1_CE96309E1BBEC794__CTOR_OFFSET UNITYSDK_OFFSET(0x9925BE0)

inline static constexpr unsigned int Class_1_CE96309E1BBEC794_TypeDefinitionIndex = 58363;

class Class_1_CE96309E1BBEC794 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelChimeraPresetRow* __Row_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*))((::PBYTE)hIl2Cpp + CLASS_1_CE96309E1BBEC794__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelChimeraPresetRow* get__Row()
	{
		return ((::RPG::GameCore::ChimeraDuelChimeraPresetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE96309E1BBEC794_GET__ROW_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelChimeraPresetRow* Method_1_A7C8903CDC2E83E5()
	{
		return ((::RPG::GameCore::ChimeraDuelChimeraPresetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE96309E1BBEC794_METHOD_1_A7C8903CDC2E83E5_OFFSET))(this);
	}
};
