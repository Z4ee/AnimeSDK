#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_0952501E522A47D1_OFFSET UNITYSDK_OFFSET(0x17479590)
#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_C514CD9E1480042E_OFFSET UNITYSDK_OFFSET(0x17479510)
#define RPG_GAMECORE_OBSERVEMATERIALSUBMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17479560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ObserveMaterialSubmission_TypeDefinitionIndex = 19547;

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

		static ::System::Void Method_3_C514CD9E1480042E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ObserveMaterialSubmission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ObserveMaterialSubmission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_C514CD9E1480042E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0952501E522A47D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSERVEMATERIALSUBMISSION_METHOD_3_0952501E522A47D1_OFFSET))(a1, a2);
		}
	};
}
