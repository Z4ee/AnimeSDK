#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_4CBA0C5C17D1D227_OFFSET UNITYSDK_OFFSET(0x1BBD4050)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_5F9811F7E9748313_OFFSET UNITYSDK_OFFSET(0x1BBD4200)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_CF2635662F4ACA3D_OFFSET UNITYSDK_OFFSET(0x1BBD41D0)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_FB77D9A9D2D8FC46_OFFSET UNITYSDK_OFFSET(0x1BBD4010)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD4040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentVCameraConfigCaster_TypeDefinitionIndex = 23455;

	class ByCurrentVCameraConfigCaster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FB77D9A9D2D8FC46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_FB77D9A9D2D8FC46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4CBA0C5C17D1D227(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_4CBA0C5C17D1D227_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF2635662F4ACA3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_CF2635662F4ACA3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F9811F7E9748313(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_5F9811F7E9748313_OFFSET))(a1, a2);
		}
	};
}
