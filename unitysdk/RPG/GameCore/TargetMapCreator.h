#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_6963DF70E8A01A78_OFFSET UNITYSDK_OFFSET(0x177C29D0)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_F60E08B86302AAA4_OFFSET UNITYSDK_OFFSET(0x177C2B00)
#define RPG_GAMECORE_TARGETMAPCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x177C2AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCreator_TypeDefinitionIndex = 22230;

	class TargetMapCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6963DF70E8A01A78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_6963DF70E8A01A78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F60E08B86302AAA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_F60E08B86302AAA4_OFFSET))(a1, a2);
		}
	};
}
