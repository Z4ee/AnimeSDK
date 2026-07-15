#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETTEAMENTITYFACEDIR_METHOD_3_9D0FD06796CE961A_OFFSET UNITYSDK_OFFSET(0x1D01C950)
#define RPG_GAMECORE_RESETTEAMENTITYFACEDIR_METHOD_3_D81E7799E1483601_OFFSET UNITYSDK_OFFSET(0x1D01C990)
#define RPG_GAMECORE_RESETTEAMENTITYFACEDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01C980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTeamEntityFaceDir_TypeDefinitionIndex = 22612;

	class ResetTeamEntityFaceDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMENTITYFACEDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D0FD06796CE961A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTeamEntityFaceDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTeamEntityFaceDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMENTITYFACEDIR_METHOD_3_9D0FD06796CE961A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D81E7799E1483601(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTeamEntityFaceDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTeamEntityFaceDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMENTITYFACEDIR_METHOD_3_D81E7799E1483601_OFFSET))(a1, a2);
		}
	};
}
