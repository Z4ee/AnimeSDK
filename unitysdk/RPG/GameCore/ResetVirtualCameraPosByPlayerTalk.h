#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_METHOD_3_8EB3432ADF9EF85B_OFFSET UNITYSDK_OFFSET(0x1D01CF40)
#define RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_METHOD_3_DF07DB499EEFF38F_OFFSET UNITYSDK_OFFSET(0x1D01CF80)
#define RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01CF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetVirtualCameraPosByPlayerTalk_TypeDefinitionIndex = 22883;

	class ResetVirtualCameraPosByPlayerTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* CameraAnchorName; // 0x20
		::System::String* PlayerAnchorName; // 0x28
		::System::String* NPCAnchorName; // 0x30
		::System::String* RealPlayerUniqueName; // 0x38
		::System::String* RealNPCUniqueName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EB3432ADF9EF85B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_METHOD_3_8EB3432ADF9EF85B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF07DB499EEFF38F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETVIRTUALCAMERAPOSBYPLAYERTALK_METHOD_3_DF07DB499EEFF38F_OFFSET))(a1, a2);
		}
	};
}
