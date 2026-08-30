#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropTagComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE95502501E061E0_METHOD_1_81ED7EAB1ECEAE5B_OFFSET UNITYSDK_OFFSET(0x18768BA0)
#define CLASS_1_FE95502501E061E0__CTOR_OFFSET UNITYSDK_OFFSET(0x18768EC0)

inline static constexpr unsigned int Class_1_FE95502501E061E0_TypeDefinitionIndex = 57960;

class Class_1_FE95502501E061E0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::RPG::GameCore::PropTagComponent*>* CBAABNLMKLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE95502501E061E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81ED7EAB1ECEAE5B(::RPG::GameCore::PropConfig* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_FE95502501E061E0_METHOD_1_81ED7EAB1ECEAE5B_OFFSET))(this, a1, a2);
	}
};
