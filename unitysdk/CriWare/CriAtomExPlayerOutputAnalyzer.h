#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputAnalyzer.h"
#include "unitysdk/CriWare/CriAtomExPlayerOutputAnalyzer_Config.h"
#include "unitysdk/CriWare/CriAtomExPlayerOutputAnalyzer_Type.h"

#define CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER__CTOR_OFFSET UNITYSDK_OFFSET(0x164D7E00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayerOutputAnalyzer_TypeDefinitionIndex = 38764;

	class CriAtomExPlayerOutputAnalyzer : public ::CriWare::CriAtomExOutputAnalyzer
	{
	public:
		::System::Void _ctor(::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Type>* a1, ::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Config>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Type>*, ::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Config>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
