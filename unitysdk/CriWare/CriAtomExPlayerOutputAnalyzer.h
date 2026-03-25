#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputAnalyzer.h"
#include "unitysdk/CriWare/CriAtomExPlayerOutputAnalyzer_Config.h"
#include "unitysdk/CriWare/CriAtomExPlayerOutputAnalyzer_Type.h"

#define CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A22E70)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayerOutputAnalyzer_TypeDefinitionIndex = 31086;

	class CriAtomExPlayerOutputAnalyzer : public ::CriWare::CriAtomExOutputAnalyzer
	{
	public:
		::System::Void _ctor(::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Type>* types, ::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Config>* configs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Type>*, ::Il2CppArray<::CriWare::CriAtomExPlayerOutputAnalyzer_Config>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER__CTOR_OFFSET))(this, types, configs);
		}
	};
}
