#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM_METHOD_2_E4A7B00964C32BFF_OFFSET UNITYSDK_OFFSET(0x18EB7360)
#define RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB7630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwipeRotationCameraParam_TypeDefinitionIndex = 19810;

	class SwipeRotationCameraParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* XAngleLimit; // 0x10
		::RPG::GameCore::DynamicFloat* YAngleLimit; // 0x18
		::RPG::GameCore::DynamicFloat* RecoverDamp; // 0x20
		::RPG::GameCore::DynamicFloat* Factor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E4A7B00964C32BFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwipeRotationCameraParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwipeRotationCameraParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM_METHOD_2_E4A7B00964C32BFF_OFFSET))(a1, a2);
		}
	};
}
