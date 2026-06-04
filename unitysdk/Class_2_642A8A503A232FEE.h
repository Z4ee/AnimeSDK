#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoLoopedRotaion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_642A8A503A232FEE_METHOD_2_3A014BFC3AEB35CA_OFFSET UNITYSDK_OFFSET(0x13C2D130)
#define CLASS_2_642A8A503A232FEE_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x13C2D1D0)
#define CLASS_2_642A8A503A232FEE_METHOD_2_849649A14B6879D1_OFFSET UNITYSDK_OFFSET(0x13C2CDF0)
#define CLASS_2_642A8A503A232FEE_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x13C2D180)
#define CLASS_2_642A8A503A232FEE_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13C2DE50)
#define CLASS_2_642A8A503A232FEE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2DE40)

inline static constexpr unsigned int Class_2_642A8A503A232FEE_TypeDefinitionIndex = 65802;

class Class_2_642A8A503A232FEE : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::RPG::Client::MonoLoopedRotaion* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_849649A14B6879D1(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_849649A14B6879D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::RPG::Client::MonoLoopedRotaion* Method_2_3A014BFC3AEB35CA()
	{
		return ((::RPG::Client::MonoLoopedRotaion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_3A014BFC3AEB35CA_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
