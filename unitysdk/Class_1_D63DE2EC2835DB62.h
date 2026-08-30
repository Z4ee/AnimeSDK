#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_B0E9C51B6798124B;
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D63DE2EC2835DB62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A36900)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_06150765F7C4861F_OFFSET UNITYSDK_OFFSET(0x17A379B0)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_141453960CF6404C_OFFSET UNITYSDK_OFFSET(0x17A36CF0)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_1BEFC7D4DC4592AD_OFFSET UNITYSDK_OFFSET(0x17A37A00)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_86BEEB7DC44E6CC1_OFFSET UNITYSDK_OFFSET(0x17A36C80)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_D412F0348A00EBB5_OFFSET UNITYSDK_OFFSET(0x17A371F0)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_F32DFD8F414578F0_OFFSET UNITYSDK_OFFSET(0x17A37950)
#define CLASS_1_D63DE2EC2835DB62__CTOR_OFFSET UNITYSDK_OFFSET(0x17A36810)

inline static constexpr unsigned int Class_1_D63DE2EC2835DB62_TypeDefinitionIndex = 60936;

class Class_1_D63DE2EC2835DB62 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindView, ::Class_1_D63DE2EC2835DB62_Class_1_B0E9C51B6798124B*>* IOMMOLEMMJI; // 0x10
	::RPG::GameCore::TimeRewindMaterialOverlayConfig* OODHJJMGKMP; // 0x18
	::UnityEngine::GameObject* LNOPCAPDCKM; // 0x20
	::System::Single CEFJACGKOLE; // 0x28
	::System::Single GOAHNHLBFGE; // 0x2C
	::RPG::GameCore::EraStateType HFOLIOPFEGF; // 0x30
	::RPG::GameCore::TimeRewindView FGLFCBNJCPA; // 0x34

	::System::Void _ctor(::RPG::GameCore::TimeRewindMaterialOverlayConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindMaterialOverlayConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_86BEEB7DC44E6CC1(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_86BEEB7DC44E6CC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D412F0348A00EBB5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_D412F0348A00EBB5_OFFSET))(this, a1);
	}

	::System::Void Method_1_141453960CF6404C(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_141453960CF6404C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F32DFD8F414578F0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_F32DFD8F414578F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_06150765F7C4861F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_06150765F7C4861F_OFFSET))(this);
	}

	::System::Void Method_1_1BEFC7D4DC4592AD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_1BEFC7D4DC4592AD_OFFSET))(this, a1, a2);
	}
};
