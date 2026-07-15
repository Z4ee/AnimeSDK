#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_2_3092D1F427FB5418_Class_1_151035310015E0C3;
namespace RPG::Client { class Effect_GPUCrowdAnimationBatcher; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_3092D1F427FB5418_METHOD_2_1810B83EFFA4D405_OFFSET UNITYSDK_OFFSET(0x18F12F20)
#define CLASS_2_3092D1F427FB5418_METHOD_2_6566B7983E8F4E48_OFFSET UNITYSDK_OFFSET(0x18F115C0)
#define CLASS_2_3092D1F427FB5418_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x18F11430)
#define CLASS_2_3092D1F427FB5418_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x18F113C0)
#define CLASS_2_3092D1F427FB5418_METHOD_2_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x18F11630)
#define CLASS_2_3092D1F427FB5418__CTOR_OFFSET UNITYSDK_OFFSET(0x18F13460)

inline static constexpr unsigned int Class_2_3092D1F427FB5418_TypeDefinitionIndex = 67207;

class Class_2_3092D1F427FB5418 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Class_2_3092D1F427FB5418_Class_1_151035310015E0C3*>* Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_METHOD_2_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Void Method_2_1810B83EFFA4D405()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_METHOD_2_1810B83EFFA4D405_OFFSET))(this);
	}

	::RPG::Client::Effect_GPUCrowdAnimationBatcher* Method_2_6566B7983E8F4E48()
	{
		return ((::RPG::Client::Effect_GPUCrowdAnimationBatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_METHOD_2_6566B7983E8F4E48_OFFSET))(this);
	}
};
