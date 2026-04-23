#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_HEADLOOKAT_METHOD_3_46BB0CDE63E0237F_OFFSET UNITYSDK_OFFSET(0x189EAB90)
#define RPG_GAMECORE_HEADLOOKAT_METHOD_3_97F3B0EBA9621CCE_OFFSET UNITYSDK_OFFSET(0x189EAAF0)
#define RPG_GAMECORE_HEADLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x189EAB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeadLookAt_TypeDefinitionIndex = 20527;

	class HeadLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TargetAttachPoint; // 0x28
		::System::Boolean DoRootRotate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97F3B0EBA9621CCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeadLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeadLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADLOOKAT_METHOD_3_97F3B0EBA9621CCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46BB0CDE63E0237F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeadLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeadLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADLOOKAT_METHOD_3_46BB0CDE63E0237F_OFFSET))(a1, a2);
		}
	};
}
