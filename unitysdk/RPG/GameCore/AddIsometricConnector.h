#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDISOMETRICCONNECTOR_METHOD_3_13EE773768E6A67D_OFFSET UNITYSDK_OFFSET(0x16F1DBE0)
#define RPG_GAMECORE_ADDISOMETRICCONNECTOR_METHOD_3_CD9284761691B76B_OFFSET UNITYSDK_OFFSET(0x16F1DA90)
#define RPG_GAMECORE_ADDISOMETRICCONNECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1DB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddIsometricConnector_TypeDefinitionIndex = 20396;

	class AddIsometricConnector : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDISOMETRICCONNECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD9284761691B76B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddIsometricConnector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddIsometricConnector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDISOMETRICCONNECTOR_METHOD_3_CD9284761691B76B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13EE773768E6A67D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddIsometricConnector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddIsometricConnector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDISOMETRICCONNECTOR_METHOD_3_13EE773768E6A67D_OFFSET))(a1, a2);
		}
	};
}
