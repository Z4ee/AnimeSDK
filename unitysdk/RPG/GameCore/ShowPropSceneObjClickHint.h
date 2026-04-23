#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_METHOD_3_29981694393996A5_OFFSET UNITYSDK_OFFSET(0x18E64F00)
#define RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_METHOD_3_454FD8351BE14AED_OFFSET UNITYSDK_OFFSET(0x18E64DB0)
#define RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E64E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPropSceneObjClickHint_TypeDefinitionIndex = 21116;

	class ShowPropSceneObjClickHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_454FD8351BE14AED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPropSceneObjClickHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPropSceneObjClickHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_METHOD_3_454FD8351BE14AED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29981694393996A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPropSceneObjClickHint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPropSceneObjClickHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPROPSCENEOBJCLICKHINT_METHOD_3_29981694393996A5_OFFSET))(a1, a2);
		}
	};
}
