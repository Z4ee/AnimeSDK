#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STATISTICSBAKEDINFO_METHOD_2_C7CEE62D9646A18E_OFFSET UNITYSDK_OFFSET(0x17778D40)
#define RPG_GAMECORE_STATISTICSBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17778E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsBakedInfo_TypeDefinitionIndex = 15325;

	class StatisticsBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CoinIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C7CEE62D9646A18E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StatisticsBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StatisticsBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSBAKEDINFO_METHOD_2_C7CEE62D9646A18E_OFFSET))(a1, a2);
		}
	};
}
