#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_B8E5DF5B61B39C64;
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D63DE2EC2835DB62_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3AB310)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_141453960CF6404C_OFFSET UNITYSDK_OFFSET(0xD3AB730)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_1BEFC7D4DC4592AD_OFFSET UNITYSDK_OFFSET(0xD3AC4A0)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_86BEEB7DC44E6CC1_OFFSET UNITYSDK_OFFSET(0xD3AB6C0)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_BAA2FC2D2B97F525_OFFSET UNITYSDK_OFFSET(0xD3AC450)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_F32DFD8F414578F0_OFFSET UNITYSDK_OFFSET(0xD3AC3F0)
#define CLASS_1_D63DE2EC2835DB62_METHOD_1_F433929C8572B123_OFFSET UNITYSDK_OFFSET(0xD3ABC40)
#define CLASS_1_D63DE2EC2835DB62__CTOR_OFFSET UNITYSDK_OFFSET(0xD3AB220)

inline static constexpr unsigned int Class_1_D63DE2EC2835DB62_TypeDefinitionIndex = 56100;

class Class_1_D63DE2EC2835DB62 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindView, ::Class_1_D63DE2EC2835DB62_Class_1_B8E5DF5B61B39C64*>* Field_1_2; // 0x18
	::RPG::GameCore::TimeRewindMaterialOverlayConfig* Field_1_6; // 0x20
	::RPG::GameCore::EraStateType Field_1_1; // 0x28
	::RPG::GameCore::TimeRewindView Field_1_0; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_4; // 0x34

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

	::System::Void Method_1_F433929C8572B123(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_F433929C8572B123_OFFSET))(this, a1);
	}

	::System::Void Method_1_141453960CF6404C(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_141453960CF6404C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F32DFD8F414578F0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_F32DFD8F414578F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAA2FC2D2B97F525()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_BAA2FC2D2B97F525_OFFSET))(this);
	}

	::System::Void Method_1_1BEFC7D4DC4592AD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_METHOD_1_1BEFC7D4DC4592AD_OFFSET))(this, a1, a2);
	}
};
