#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_METHOD_3_89CF2336C66B7ECE_OFFSET UNITYSDK_OFFSET(0x1D3DF4C0)
#define RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_METHOD_3_DC9725C11B7BF93F_OFFSET UNITYSDK_OFFSET(0x1D3DF500)
#define RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DF4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntityInActionBarByDelay_TypeDefinitionIndex = 22692;

	class HideEntityInActionBarByDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FixPoint Delay; // 0x20
		::System::Boolean IsCancelHide; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89CF2336C66B7ECE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntityInActionBarByDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntityInActionBarByDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_METHOD_3_89CF2336C66B7ECE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC9725C11B7BF93F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntityInActionBarByDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntityInActionBarByDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYINACTIONBARBYDELAY_METHOD_3_DC9725C11B7BF93F_OFFSET))(a1, a2);
		}
	};
}
