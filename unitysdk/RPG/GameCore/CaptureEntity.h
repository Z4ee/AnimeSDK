#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CAPTUREENTITY_METHOD_3_BB8FB5BC258A2E09_OFFSET UNITYSDK_OFFSET(0x187B7AB0)
#define RPG_GAMECORE_CAPTUREENTITY_METHOD_3_CD69CDD12E863B00_OFFSET UNITYSDK_OFFSET(0x187B7A30)
#define RPG_GAMECORE_CAPTUREENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x187B7A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureEntity_TypeDefinitionIndex = 19799;

	class CaptureEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD69CDD12E863B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREENTITY_METHOD_3_CD69CDD12E863B00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB8FB5BC258A2E09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREENTITY_METHOD_3_BB8FB5BC258A2E09_OFFSET))(a1, a2);
		}
	};
}
