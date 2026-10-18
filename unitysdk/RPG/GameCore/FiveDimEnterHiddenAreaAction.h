#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_4_BC6F6B078AC1DEBD_OFFSET UNITYSDK_OFFSET(0x1D6BB740)
#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_4_E4CA8B7DA2F87158_OFFSET UNITYSDK_OFFSET(0x1D6BB7C0)
#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnterHiddenAreaAction_TypeDefinitionIndex = 18649;

	class FiveDimEnterHiddenAreaAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC6F6B078AC1DEBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_4_BC6F6B078AC1DEBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4CA8B7DA2F87158(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_METHOD_4_E4CA8B7DA2F87158_OFFSET))(a1, a2);
		}
	};
}
