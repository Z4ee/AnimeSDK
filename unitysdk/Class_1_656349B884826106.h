#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_1_656349B884826106_METHOD_1_40BF9F8FC04D0A26_1_OFFSET UNITYSDK_OFFSET(0x9B9B980)
#define CLASS_1_656349B884826106_METHOD_1_40BF9F8FC04D0A26_OFFSET UNITYSDK_OFFSET(0x9B9B930)
#define CLASS_1_656349B884826106__CTOR_OFFSET UNITYSDK_OFFSET(0x9B9B8D0)

inline static constexpr unsigned int Class_1_656349B884826106_TypeDefinitionIndex = 69088;

class Class_1_656349B884826106 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14

	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_656349B884826106__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_40BF9F8FC04D0A26(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_656349B884826106_METHOD_1_40BF9F8FC04D0A26_OFFSET))(this, a1);
	}

	::System::Void Method_1_40BF9F8FC04D0A26_1(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_656349B884826106_METHOD_1_40BF9F8FC04D0A26_1_OFFSET))(this, a1);
	}
};
