#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_METHOD_3_45F4D090EE628019_OFFSET UNITYSDK_OFFSET(0x1D50A4F0)
#define RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_METHOD_3_D0FFD3727CAD9856_OFFSET UNITYSDK_OFFSET(0x1D50A4B0)
#define RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50A4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetOverrideColliderCamera_TypeDefinitionIndex = 22147;

	class SetOverrideColliderCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ColliderCameraName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0FFD3727CAD9856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetOverrideColliderCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetOverrideColliderCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_METHOD_3_D0FFD3727CAD9856_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45F4D090EE628019(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetOverrideColliderCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetOverrideColliderCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETOVERRIDECOLLIDERCAMERA_METHOD_3_45F4D090EE628019_OFFSET))(a1, a2);
		}
	};
}
