#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_96760AAAA04943EC_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x12DBCA80)
#define CLASS_2_96760AAAA04943EC_METHOD_2_5A3943A9FA8BC985_OFFSET UNITYSDK_OFFSET(0x12DBC650)
#define CLASS_2_96760AAAA04943EC_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x12DBC070)
#define CLASS_2_96760AAAA04943EC_METHOD_2_BD14406E6DD81325_OFFSET UNITYSDK_OFFSET(0x12DBC180)
#define CLASS_2_96760AAAA04943EC__CTOR_OFFSET UNITYSDK_OFFSET(0x12DBC110)

inline static constexpr unsigned int Class_2_96760AAAA04943EC_TypeDefinitionIndex = 71510;

class Class_2_96760AAAA04943EC : public ::Class_1_677CEA8C88AC78AB
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x80
	::MoleMole::Battle::Entity* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_0; // 0x90
	::UnityEngine::Transform* Field_2_1; // 0x98
	::System::Int32 Field_2_7; // 0xA0
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis Field_2_3; // 0xA4
	::System::Boolean Field_2_5; // 0xA8
	::System::Single Field_2_4; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Boolean Method_2_BD14406E6DD81325(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_BD14406E6DD81325_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5A3943A9FA8BC985()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_5A3943A9FA8BC985_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96760AAAA04943EC_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
