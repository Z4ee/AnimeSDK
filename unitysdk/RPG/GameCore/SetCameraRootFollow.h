#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCAMERAROOTFOLLOW_METHOD_3_6C6F7006846FFB80_OFFSET UNITYSDK_OFFSET(0x19C2DB70)
#define RPG_GAMECORE_SETCAMERAROOTFOLLOW_METHOD_3_7F8D4D40AE6300F1_OFFSET UNITYSDK_OFFSET(0x19C2DBF0)
#define RPG_GAMECORE_SETCAMERAROOTFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2DBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCameraRootFollow_TypeDefinitionIndex = 21643;

	class SetCameraRootFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PointName; // 0x20
		::RPG::MVector3 Offset; // 0x28
		::System::Boolean IsReset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAROOTFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C6F7006846FFB80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCameraRootFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCameraRootFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAROOTFOLLOW_METHOD_3_6C6F7006846FFB80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F8D4D40AE6300F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCameraRootFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCameraRootFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERAROOTFOLLOW_METHOD_3_7F8D4D40AE6300F1_OFFSET))(a1, a2);
		}
	};
}
