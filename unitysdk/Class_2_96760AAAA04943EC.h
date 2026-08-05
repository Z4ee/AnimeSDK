#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_96760AAAA04943EC_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x18B23FB0)
#define CLASS_2_96760AAAA04943EC_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x18B249D0)
#define CLASS_2_96760AAAA04943EC_METHOD_2_5A3943A9FA8BC985_OFFSET UNITYSDK_OFFSET(0x18B24590)
#define CLASS_2_96760AAAA04943EC_METHOD_2_BD14406E6DD81325_OFFSET UNITYSDK_OFFSET(0x18B240C0)
#define CLASS_2_96760AAAA04943EC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B24050)

inline static constexpr unsigned int Class_2_96760AAAA04943EC_TypeDefinitionIndex = 63734;

class Class_2_96760AAAA04943EC : public ::Class_1_8377BAB19A574A40
{
public:
	::UnityEngine::Transform* Field_2_7; // 0x80
	::MoleMole::Battle::Entity* Field_2_10; // 0x88
	::UnityEngine::Transform* Field_2_0; // 0x90
	::UnityEngine::Transform* Field_2_6; // 0x98
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis Field_2_5; // 0xA0
	::System::Int32 Field_2_9; // 0xA4
	::System::Single Field_2_4; // 0xA8
	::System::Boolean Field_2_11; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Boolean Method_2_BD14406E6DD81325(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_BD14406E6DD81325_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}

	::System::Boolean Method_2_5A3943A9FA8BC985()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_5A3943A9FA8BC985_OFFSET))(this);
	}
};
