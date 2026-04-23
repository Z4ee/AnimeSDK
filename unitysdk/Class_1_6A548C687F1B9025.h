#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }

#define CLASS_1_6A548C687F1B9025_METHOD_1_32F40F133BCC1AF9_OFFSET UNITYSDK_OFFSET(0x1916AC10)
#define CLASS_1_6A548C687F1B9025_METHOD_1_D984628C15531E79_OFFSET UNITYSDK_OFFSET(0x1917AA80)

inline static constexpr unsigned int Class_1_6A548C687F1B9025_TypeDefinitionIndex = 23555;

class Class_1_6A548C687F1B9025 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_D984628C15531E79(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_6A548C687F1B9025_METHOD_1_D984628C15531E79_OFFSET))(a1);
	}

	static ::System::Void Method_1_32F40F133BCC1AF9(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyAdsorptionConfig* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6A548C687F1B9025_METHOD_1_32F40F133BCC1AF9_OFFSET))(a1, a2);
	}
};
