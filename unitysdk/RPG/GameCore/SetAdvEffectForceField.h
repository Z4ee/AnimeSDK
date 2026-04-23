#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTFORCEFIELD_METHOD_3_AFDDAC5BDAE4169D_OFFSET UNITYSDK_OFFSET(0x18E08120)
#define RPG_GAMECORE_SETADVEFFECTFORCEFIELD_METHOD_3_C7A7ECF5F8192DE8_OFFSET UNITYSDK_OFFSET(0x18E081A0)
#define RPG_GAMECORE_SETADVEFFECTFORCEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18E08170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectForceField_TypeDefinitionIndex = 21201;

	class SetAdvEffectForceField : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EmitterTargetType; // 0x18
		::System::String* EmitterConfigName; // 0x20
		::RPG::GameCore::TargetEvaluator* ForceFieldTargetType; // 0x28
		::System::String* ForceFieldConfigName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTFORCEFIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AFDDAC5BDAE4169D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectForceField*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectForceField*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTFORCEFIELD_METHOD_3_AFDDAC5BDAE4169D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7A7ECF5F8192DE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectForceField* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectForceField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTFORCEFIELD_METHOD_3_C7A7ECF5F8192DE8_OFFSET))(a1, a2);
		}
	};
}
