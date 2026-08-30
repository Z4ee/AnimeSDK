#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_METHOD_3_1A561E66EC9EB480_OFFSET UNITYSDK_OFFSET(0x1D106AF0)
#define RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_METHOD_3_BA67CCE879352643_OFFSET UNITYSDK_OFFSET(0x1D106AA0)
#define RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D106AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraFollowEntityTimeScale_TypeDefinitionIndex = 22423;

	class CameraFollowEntityTimeScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA67CCE879352643(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraFollowEntityTimeScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraFollowEntityTimeScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_METHOD_3_BA67CCE879352643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A561E66EC9EB480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraFollowEntityTimeScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraFollowEntityTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFOLLOWENTITYTIMESCALE_METHOD_3_1A561E66EC9EB480_OFFSET))(a1, a2);
		}
	};
}
