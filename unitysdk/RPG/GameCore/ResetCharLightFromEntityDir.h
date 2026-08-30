#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_4C67A3CACB17324A_OFFSET UNITYSDK_OFFSET(0x1D3A4560)
#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_C5EFD93A2BC2EEE7_OFFSET UNITYSDK_OFFSET(0x1D3A4490)
#define RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetCharLightFromEntityDir_TypeDefinitionIndex = 21627;

	class ResetCharLightFromEntityDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5EFD93A2BC2EEE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCharLightFromEntityDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCharLightFromEntityDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_C5EFD93A2BC2EEE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C67A3CACB17324A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARLIGHTFROMENTITYDIR_METHOD_3_4C67A3CACB17324A_OFFSET))(a1, a2);
		}
	};
}
