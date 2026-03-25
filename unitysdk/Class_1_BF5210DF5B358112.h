#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/System/Object.h"

class Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64;
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_BF5210DF5B358112_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E9E330)
#define CLASS_1_BF5210DF5B358112_METHOD_1_4C0B9E1915FA89DA_OFFSET UNITYSDK_OFFSET(0x8E9EC00)
#define CLASS_1_BF5210DF5B358112_METHOD_1_78A0EE520ED35997_OFFSET UNITYSDK_OFFSET(0x8E9E720)
#define CLASS_1_BF5210DF5B358112_METHOD_1_86BEEB7DC44E6CC1_OFFSET UNITYSDK_OFFSET(0x8E9E6B0)
#define CLASS_1_BF5210DF5B358112_METHOD_1_8B9577E33CA1A81D_OFFSET UNITYSDK_OFFSET(0x8E9F3D0)
#define CLASS_1_BF5210DF5B358112_METHOD_1_9F83ECDCCFE08FB9_OFFSET UNITYSDK_OFFSET(0x8E9F320)
#define CLASS_1_BF5210DF5B358112_METHOD_1_E8BA40F178D1EA5C_OFFSET UNITYSDK_OFFSET(0x8E9F380)
#define CLASS_1_BF5210DF5B358112__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9E270)

inline static constexpr unsigned int Class_1_BF5210DF5B358112_TypeDefinitionIndex = 49303;

class Class_1_BF5210DF5B358112 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindView, ::Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64*>* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_3; // 0x18
	::RPG::GameCore::TimeRewindMaterialOverlayConfig* Field_1_6; // 0x20
	::RPG::GameCore::EraStateType Field_1_1; // 0x28
	::RPG::GameCore::TimeRewindView Field_1_0; // 0x2C
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::TimeRewindMaterialOverlayConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindMaterialOverlayConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_86BEEB7DC44E6CC1(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_METHOD_1_86BEEB7DC44E6CC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C0B9E1915FA89DA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_METHOD_1_4C0B9E1915FA89DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_78A0EE520ED35997(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_METHOD_1_78A0EE520ED35997_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F83ECDCCFE08FB9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_METHOD_1_9F83ECDCCFE08FB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8BA40F178D1EA5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_METHOD_1_E8BA40F178D1EA5C_OFFSET))(this);
	}

	::System::Void Method_1_8B9577E33CA1A81D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BF5210DF5B358112_METHOD_1_8B9577E33CA1A81D_OFFSET))(this, a1, a2);
	}
};
