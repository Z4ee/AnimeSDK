#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_SetPos; }

#define CLASS_3_CB88259603D7AFEC_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x160A45B0)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x160A4400)
#define CLASS_3_CB88259603D7AFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x160A4610)

inline static constexpr unsigned int Class_3_CB88259603D7AFEC_TypeDefinitionIndex = 65621;

class Class_3_CB88259603D7AFEC : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_SetPos*>
{
public:
	::System::Nullable_1<::UnityEngine::Vector2> Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB88259603D7AFEC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB88259603D7AFEC_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CB88259603D7AFEC_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}
};
