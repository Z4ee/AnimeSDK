#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectPluginRandomPosInRing; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_42D78ECFC042780F_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x1674CBB0)
#define CLASS_2_42D78ECFC042780F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1674CDB0)
#define CLASS_2_42D78ECFC042780F_METHOD_2_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x1674CE60)
#define CLASS_2_42D78ECFC042780F_METHOD_2_66D2DEE2A47E171E_OFFSET UNITYSDK_OFFSET(0x1674CB40)
#define CLASS_2_42D78ECFC042780F_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x1674D1D0)
#define CLASS_2_42D78ECFC042780F_METHOD_2_98D035AFC83A740C_OFFSET UNITYSDK_OFFSET(0x1674C940)
#define CLASS_2_42D78ECFC042780F_METHOD_2_A14686B49BC5A8FE_OFFSET UNITYSDK_OFFSET(0x1674D5E0)
#define CLASS_2_42D78ECFC042780F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1674CAF0)
#define CLASS_2_42D78ECFC042780F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1674CE10)
#define CLASS_2_42D78ECFC042780F_METHOD_2_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x1674D080)
#define CLASS_2_42D78ECFC042780F__CTOR_OFFSET UNITYSDK_OFFSET(0x1674D780)

inline static constexpr unsigned int Class_2_42D78ECFC042780F_TypeDefinitionIndex = 66758;

class Class_2_42D78ECFC042780F : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::GameCore::EntityPosAdaptionConfig* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24
	::UnityEngine::Vector3 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98D035AFC83A740C(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_98D035AFC83A740C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_515AB539783606E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_A14686B49BC5A8FE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_A14686B49BC5A8FE_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginRandomPosInRing* Method_2_66D2DEE2A47E171E()
	{
		return ((::RPG::Client::MonoEffectPluginRandomPosInRing*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42D78ECFC042780F_METHOD_2_66D2DEE2A47E171E_OFFSET))(this);
	}
};
