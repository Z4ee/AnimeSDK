#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActiveTrackCameraMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVETRACKCAMERA_METHOD_3_6DDE1E33A6280F29_OFFSET UNITYSDK_OFFSET(0x16EA0F70)
#define RPG_GAMECORE_ACTIVETRACKCAMERA_METHOD_3_90B150CD9C43E00A_OFFSET UNITYSDK_OFFSET(0x16EA0EB0)
#define RPG_GAMECORE_ACTIVETRACKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA0F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveTrackCamera_TypeDefinitionIndex = 19157;

	class ActiveTrackCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::ActiveTrackCameraMode ActiveMode; // 0x1C
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x30
		::System::Boolean UseOwnerGroup; // 0x38
		::RPG::GameCore::DynamicFloat* PathGroupID; // 0x40
		::RPG::GameCore::DynamicFloat* PathID; // 0x48
		::RPG::GameCore::DynamicFloat* CurveID; // 0x50
		::RPG::GameCore::DynamicFloat* TrackWidth; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitFromStart; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitFromEnd; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOutOfRange; // 0x70
		::System::Boolean OverrideInputByTrack; // 0x78
		::System::Boolean IsAutoMode; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETRACKCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90B150CD9C43E00A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveTrackCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveTrackCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETRACKCAMERA_METHOD_3_90B150CD9C43E00A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6DDE1E33A6280F29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveTrackCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETRACKCAMERA_METHOD_3_6DDE1E33A6280F29_OFFSET))(a1, a2);
		}
	};
}
