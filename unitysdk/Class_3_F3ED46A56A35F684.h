#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsOffsetType.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsRotateType.h"

namespace RPG::GameCore { class SetupEffectTransformParams; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F3ED46A56A35F684_METHOD_3_5D1550ADB39D27A0_OFFSET UNITYSDK_OFFSET(0x18B789A0)
#define CLASS_3_F3ED46A56A35F684_METHOD_3_F21E395E1CE5DD87_OFFSET UNITYSDK_OFFSET(0x18B78A40)
#define CLASS_3_F3ED46A56A35F684_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B78AE0)
#define CLASS_3_F3ED46A56A35F684__CTOR_OFFSET UNITYSDK_OFFSET(0x18B78970)

inline static constexpr unsigned int Class_3_F3ED46A56A35F684_TypeDefinitionIndex = 50836;

class Class_3_F3ED46A56A35F684 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupEffectTransformParams*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupEffectTransformParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupEffectTransformParams*))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Effect_Transform_OffsetType Method_3_5D1550ADB39D27A0(::RPG::GameCore::SetupEffectTransformParamsOffsetType a1)
	{
		return ((::RPG::Client::Effect_Transform_OffsetType(*)(::PVOID, ::RPG::GameCore::SetupEffectTransformParamsOffsetType))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684_METHOD_3_5D1550ADB39D27A0_OFFSET))(this, a1);
	}

	::RPG::Client::Effect_Transform_RotateType Method_3_F21E395E1CE5DD87(::RPG::GameCore::SetupEffectTransformParamsRotateType a1)
	{
		return ((::RPG::Client::Effect_Transform_RotateType(*)(::PVOID, ::RPG::GameCore::SetupEffectTransformParamsRotateType))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684_METHOD_3_F21E395E1CE5DD87_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684_ONTASKBEGIN_OFFSET))(this);
	}
};
