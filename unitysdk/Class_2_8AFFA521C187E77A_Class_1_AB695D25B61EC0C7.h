#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"

class Class_1_315842A41C3BE9C8;
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x186A6260)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x186A7420)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x186A6B70)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x186A7360)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x186A5C10)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x186A7160)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x186A6E80)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x186A7050)
#define CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7__CTOR_OFFSET UNITYSDK_OFFSET(0x186A5BF0)

inline static constexpr unsigned int Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7_TypeDefinitionIndex = 66765;

class Class_2_8AFFA521C187E77A_Class_1_AB695D25B61EC0C7 : public ::System::Object
{
public:
	::UnityEngine::Rendering::CRPVirtualCamera* Field_1_0; // 0x10
	::RPG::GameCore::GameEntityList* Field_1_1; // 0x18
	::UnityEngine::AnimationClip* Field_1_2; // 0x20
	::RPG::GameCore::CRPVirtualCameraConfigList* Field_1_3; // 0x28
	::UnityEngine::MeshRenderer* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::UnityEngine::Camera* Field_1_6; // 0x40
	::Class_1_315842A41C3BE9C8* Field_1_7; // 0x48
	::System::String* Field_1_8; // 0x50
	::RPG::CustomRP::VCMask Field_1_9; // 0x58
	::System::Single Field_1_10; // 0x5C

	::System::Void _ctor(::RPG::CustomRP::VCMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_1_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_515AB539783606E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_95EAF395E6F95EA4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_95EAF395E6F95EA4_OFFSET))(this, a1);
	}

	::System::Single Method_1_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFFA521C187E77A_CLASS_1_AB695D25B61EC0C7_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}
};
