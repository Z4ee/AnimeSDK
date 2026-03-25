#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFrameCapture; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_B01FF8AE6A10328A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x89ECD90)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x89ECAA0)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_8C64C169CD8A5F0C_OFFSET UNITYSDK_OFFSET(0x89ECDF0)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x89ECEE0)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_9ACE1501A9199453_OFFSET UNITYSDK_OFFSET(0x89ECE60)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x89ECAF0)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x89EC3E0)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_C3C4CBAFC3F6FEC0_OFFSET UNITYSDK_OFFSET(0x89EC4A0)
#define CLASS_2_B01FF8AE6A10328A_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x89EC450)
#define CLASS_2_B01FF8AE6A10328A__CTOR_OFFSET UNITYSDK_OFFSET(0x89ECED0)

inline static constexpr unsigned int Class_2_B01FF8AE6A10328A_TypeDefinitionIndex = 57340;

class Class_2_B01FF8AE6A10328A : public ::RPG::Client::BehaviorBase
{
public:
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_2_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3C4CBAFC3F6FEC0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_C3C4CBAFC3F6FEC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_A2458167D7752575_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginFrameCapture* Method_2_8C64C169CD8A5F0C()
	{
		return ((::RPG::Client::MonoEffectPluginFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_8C64C169CD8A5F0C_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_9ACE1501A9199453()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_9ACE1501A9199453_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B01FF8AE6A10328A_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
