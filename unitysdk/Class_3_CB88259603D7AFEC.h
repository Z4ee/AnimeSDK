#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_SetPos; }

#define CLASS_3_CB88259603D7AFEC_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBF4A0A0)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xBF4A180)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBF4A120)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xBF49F20)
#define CLASS_3_CB88259603D7AFEC__CTOR_OFFSET UNITYSDK_OFFSET(0xBF4A100)

inline static constexpr unsigned int Class_3_CB88259603D7AFEC_TypeDefinitionIndex = 64250;

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

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB88259603D7AFEC_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CB88259603D7AFEC_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
