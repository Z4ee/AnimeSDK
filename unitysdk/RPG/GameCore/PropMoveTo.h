#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropMoveToMoveMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPMOVETO_METHOD_3_0E9E3784AB2F4F54_OFFSET UNITYSDK_OFFSET(0x1BA24EA0)
#define RPG_GAMECORE_PROPMOVETO_METHOD_3_E99C10B2F4480EF9_OFFSET UNITYSDK_OFFSET(0x1BA25040)
#define RPG_GAMECORE_PROPMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveTo_TypeDefinitionIndex = 20780;

	class PropMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RelativePath; // 0x18
		::RPG::GameCore::PropMoveToMoveMode Mode; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::RPG::GameCore::DynamicFloat* Speed; // 0x30
		::System::String* AreaName; // 0x38
		::System::String* AnchorName; // 0x40
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x48
		::RPG::MVector3 TargetPosition; // 0x50
		::RPG::MVector3 TargetRotation; // 0x5C
		::System::Boolean WaitFinish; // 0x68
		::System::Boolean IsLocalPlayerForward; // 0x69
		::System::Single LocalPlayerForwardRadius; // 0x6C
		::System::Boolean UseCurveData; // 0x70
		::System::Boolean BreakWhenTalk; // 0x71
		::System::Boolean ForbidTickLod; // 0x72
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E9E3784AB2F4F54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETO_METHOD_3_0E9E3784AB2F4F54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E99C10B2F4480EF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETO_METHOD_3_E99C10B2F4480EF9_OFFSET))(a1, a2);
		}
	};
}
