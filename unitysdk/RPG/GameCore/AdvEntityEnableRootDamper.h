#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_METHOD_3_902FF591D4E44E88_OFFSET UNITYSDK_OFFSET(0x1BE1AD70)
#define RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_METHOD_3_FFBBBBDCCD06F60A_OFFSET UNITYSDK_OFFSET(0x1BE1AE10)
#define RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1ADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityEnableRootDamper_TypeDefinitionIndex = 20264;

	class AdvEntityEnableRootDamper : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_902FF591D4E44E88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityEnableRootDamper*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityEnableRootDamper*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_METHOD_3_902FF591D4E44E88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFBBBBDCCD06F60A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityEnableRootDamper* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityEnableRootDamper*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_METHOD_3_FFBBBBDCCD06F60A_OFFSET))(a1, a2);
		}
	};
}
