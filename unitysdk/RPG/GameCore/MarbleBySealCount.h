#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYSEALCOUNT_METHOD_4_261CCE94A935F197_OFFSET UNITYSDK_OFFSET(0x1D80D570)
#define RPG_GAMECORE_MARBLEBYSEALCOUNT_METHOD_4_7C4EEC17CE963E9B_OFFSET UNITYSDK_OFFSET(0x1D80D510)
#define RPG_GAMECORE_MARBLEBYSEALCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBySealCount_TypeDefinitionIndex = 16888;

	class MarbleBySealCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::UInt32 SealId; // 0x28
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSEALCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C4EEC17CE963E9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBySealCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBySealCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSEALCOUNT_METHOD_4_7C4EEC17CE963E9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_261CCE94A935F197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleBySealCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleBySealCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSEALCOUNT_METHOD_4_261CCE94A935F197_OFFSET))(a1, a2);
		}
	};
}
