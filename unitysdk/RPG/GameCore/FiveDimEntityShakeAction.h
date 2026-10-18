#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityShakeConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_4_9EDE0F8A443961DF_OFFSET UNITYSDK_OFFSET(0x1D68E0D0)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_4_F1F29EBA1AE1D704_OFFSET UNITYSDK_OFFSET(0x1D68E110)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityShakeAction_TypeDefinitionIndex = 18748;

	class FiveDimEntityShakeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::RPG::GameCore::FiveDimEntityShakeConfig* ShakeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9EDE0F8A443961DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityShakeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityShakeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_4_9EDE0F8A443961DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1F29EBA1AE1D704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityShakeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_METHOD_4_F1F29EBA1AE1D704_OFFSET))(a1, a2);
		}
	};
}
