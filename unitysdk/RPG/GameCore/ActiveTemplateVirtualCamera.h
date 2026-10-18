#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_1D3B7793A929DC39_OFFSET UNITYSDK_OFFSET(0x1D31D330)
#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_3B5E29CAC772C16B_OFFSET UNITYSDK_OFFSET(0x1D31D380)
#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31D370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveTemplateVirtualCamera_TypeDefinitionIndex = 20827;

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

		static ::System::Void Method_3_1D3B7793A929DC39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveTemplateVirtualCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_1D3B7793A929DC39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B5E29CAC772C16B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveTemplateVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_METHOD_3_3B5E29CAC772C16B_OFFSET))(a1, a2);
		}
	};
}
