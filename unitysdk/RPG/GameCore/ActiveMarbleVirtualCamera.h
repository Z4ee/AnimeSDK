#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActiveVirtualCamera.h"
#include "unitysdk/RPG/GameCore/MarbleTargetType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_METHOD_4_D7DDA170B7F90816_OFFSET UNITYSDK_OFFSET(0x186003A0)
#define RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_METHOD_4_EF3DE278BF422031_OFFSET UNITYSDK_OFFSET(0x186002E0)
#define RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18600350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveMarbleVirtualCamera_TypeDefinitionIndex = 20905;

	class ActiveMarbleVirtualCamera : public ::RPG::GameCore::ActiveVirtualCamera
	{
	public:
		::RPG::GameCore::MarbleTargetType FollowObject; // 0xF0
		::System::String* FollowPoint; // 0xF8
		::RPG::GameCore::MarbleTargetType LookAtObject; // 0x100
		::System::String* LookAtPoint; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EF3DE278BF422031(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveMarbleVirtualCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveMarbleVirtualCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_METHOD_4_EF3DE278BF422031_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7DDA170B7F90816(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveMarbleVirtualCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveMarbleVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_METHOD_4_D7DDA170B7F90816_OFFSET))(a1, a2);
		}
	};
}
