#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_D058D5EADB8070DF_OFFSET UNITYSDK_OFFSET(0x1BAFE690)
#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_D503405E715D4FB2_OFFSET UNITYSDK_OFFSET(0x1BAFE650)
#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFE680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ObserveMaterialSubmission_TypeDefinitionIndex = 20451;

	class ObserveMaterialSubmission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinished; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancelled; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInterrupted; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D503405E715D4FB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ObserveMaterialSubmission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ObserveMaterialSubmission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_D503405E715D4FB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D058D5EADB8070DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_D058D5EADB8070DF_OFFSET))(a1, a2);
		}
	};
}
