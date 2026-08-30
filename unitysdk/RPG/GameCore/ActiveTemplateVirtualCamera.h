#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_994635DDA4585E1E_OFFSET UNITYSDK_OFFSET(0x1C9EC650)
#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_D472540401E2D54E_OFFSET UNITYSDK_OFFSET(0x1C9EC6A0)
#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9EC690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveTemplateVirtualCamera_TypeDefinitionIndex = 20588;

	class ActiveTemplateVirtualCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TemplateName; // 0x18
		::System::Single FollowOffset; // 0x20
		::RPG::MVector3 CameraRotation; // 0x24
		::System::Single CameraRotationOffset; // 0x30
		::System::Boolean IsActive; // 0x34
		::System::String* FollowTargetAnchorName; // 0x38
		::System::String* LookAtTargetAnchorName; // 0x40
		::System::UInt32 FollowTargetGroupID; // 0x48
		::System::UInt32 FollowTargetEntityID; // 0x4C
		::System::UInt32 LookAtTargetGroupID; // 0x50
		::System::UInt32 LookAtTargetEntityID; // 0x54
		::System::String* AreaName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_994635DDA4585E1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveTemplateVirtualCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_994635DDA4585E1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D472540401E2D54E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveTemplateVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_D472540401E2D54E_OFFSET))(a1, a2);
		}
	};
}
