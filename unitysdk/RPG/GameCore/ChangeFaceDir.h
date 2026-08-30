#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEFACEDIR_METHOD_3_2A09A183D64D85B9_OFFSET UNITYSDK_OFFSET(0x1D117F30)
#define RPG_GAMECORE_CHANGEFACEDIR_METHOD_3_EE56C1E68BEA0D1F_OFFSET UNITYSDK_OFFSET(0x1D117FD0)
#define RPG_GAMECORE_CHANGEFACEDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D117F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeFaceDir_TypeDefinitionIndex = 22201;

	class ChangeFaceDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::System::Single FaceDirAngle; // 0x20
		::System::Boolean RelativeAngle; // 0x24
		::System::Single Duration; // 0x28
		::System::Boolean SaveFormationFaceDelta; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEFACEDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A09A183D64D85B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeFaceDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeFaceDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEFACEDIR_METHOD_3_2A09A183D64D85B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE56C1E68BEA0D1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeFaceDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeFaceDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEFACEDIR_METHOD_3_EE56C1E68BEA0D1F_OFFSET))(a1, a2);
		}
	};
}
