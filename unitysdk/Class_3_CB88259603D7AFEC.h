#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_SetPos; }

#define CLASS_3_CB88259603D7AFEC_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8932B70)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8932BF0)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8932C50)
#define CLASS_3_CB88259603D7AFEC_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x89329F0)
#define CLASS_3_CB88259603D7AFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x8932BD0)

inline static constexpr unsigned int Class_3_CB88259603D7AFEC_TypeDefinitionIndex = 56090;

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

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CB88259603D7AFEC_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
