#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TOPVIEWCAMERACHANGE_METHOD_3_133684657F9274D4_OFFSET UNITYSDK_OFFSET(0x1788B8F0)
#define RPG_GAMECORE_TOPVIEWCAMERACHANGE_METHOD_3_37388A7F73471162_OFFSET UNITYSDK_OFFSET(0x178A2860)
#define RPG_GAMECORE_TOPVIEWCAMERACHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1788B8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TopViewCameraChange_TypeDefinitionIndex = 21999;

	class TopViewCameraChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ResetToDefault; // 0x18
		::RPG::GameCore::TargetEvaluator* LookAtEntity; // 0x20
		::RPG::MVector3 LookAtOffset; // 0x28
		::System::Single LookAtAngleBias; // 0x34
		::System::Single DepressionAngle; // 0x38
		::System::Single CameraDistance; // 0x3C
		::System::Single SmoothTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOPVIEWCAMERACHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37388A7F73471162(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TopViewCameraChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TopViewCameraChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOPVIEWCAMERACHANGE_METHOD_3_37388A7F73471162_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_133684657F9274D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TopViewCameraChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TopViewCameraChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOPVIEWCAMERACHANGE_METHOD_3_133684657F9274D4_OFFSET))(a1, a2);
		}
	};
}
