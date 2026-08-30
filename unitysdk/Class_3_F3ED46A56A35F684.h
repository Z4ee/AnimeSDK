#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsOffsetType.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsRotateType.h"

namespace RPG::GameCore { class SetupEffectTransformParams; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F3ED46A56A35F684_METHOD_3_1158644B88A2C7FB_OFFSET UNITYSDK_OFFSET(0x15705A80)
#define CLASS_3_F3ED46A56A35F684_METHOD_3_CD20A4B8A8FD80FE_OFFSET UNITYSDK_OFFSET(0x15705B00)
#define CLASS_3_F3ED46A56A35F684_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15705B80)
#define CLASS_3_F3ED46A56A35F684__CTOR_OFFSET UNITYSDK_OFFSET(0x15705A50)

inline static constexpr unsigned int Class_3_F3ED46A56A35F684_TypeDefinitionIndex = 53518;

class Class_3_F3ED46A56A35F684 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupEffectTransformParams*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupEffectTransformParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupEffectTransformParams*))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Effect_Transform_OffsetType Method_3_1158644B88A2C7FB(::RPG::GameCore::SetupEffectTransformParamsOffsetType a1)
	{
		return ((::RPG::Client::Effect_Transform_OffsetType(*)(::PVOID, ::RPG::GameCore::SetupEffectTransformParamsOffsetType))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684_METHOD_3_1158644B88A2C7FB_OFFSET))(this, a1);
	}

	::RPG::Client::Effect_Transform_RotateType Method_3_CD20A4B8A8FD80FE(::RPG::GameCore::SetupEffectTransformParamsRotateType a1)
	{
		return ((::RPG::Client::Effect_Transform_RotateType(*)(::PVOID, ::RPG::GameCore::SetupEffectTransformParamsRotateType))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684_METHOD_3_CD20A4B8A8FD80FE_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3ED46A56A35F684_ONTASKBEGIN_OFFSET))(this);
	}
};
