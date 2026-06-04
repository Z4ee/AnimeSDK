#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVFORCEHIDEBILLBOARD_METHOD_3_247D1893CCB56C81_OFFSET UNITYSDK_OFFSET(0x19425080)
#define RPG_GAMECORE_ADVFORCEHIDEBILLBOARD_METHOD_3_DB6F38911A805D3D_OFFSET UNITYSDK_OFFSET(0x19425110)
#define RPG_GAMECORE_ADVFORCEHIDEBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x194250E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvForceHideBillboard_TypeDefinitionIndex = 20530;

	class AdvForceHideBillboard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCEHIDEBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_247D1893CCB56C81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvForceHideBillboard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvForceHideBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCEHIDEBILLBOARD_METHOD_3_247D1893CCB56C81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB6F38911A805D3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvForceHideBillboard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvForceHideBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCEHIDEBILLBOARD_METHOD_3_DB6F38911A805D3D_OFFSET))(a1, a2);
		}
	};
}
