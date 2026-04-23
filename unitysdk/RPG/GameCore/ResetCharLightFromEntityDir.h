#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_4C67A3CACB17324A_OFFSET UNITYSDK_OFFSET(0x18CAA260)
#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_F066337EB592BEDE_OFFSET UNITYSDK_OFFSET(0x18CAA150)
#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetCharLightFromEntityDir_TypeDefinitionIndex = 20725;

	class ResetCharLightFromEntityDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F066337EB592BEDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCharLightFromEntityDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCharLightFromEntityDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_F066337EB592BEDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C67A3CACB17324A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_4C67A3CACB17324A_OFFSET))(a1, a2);
		}
	};
}
