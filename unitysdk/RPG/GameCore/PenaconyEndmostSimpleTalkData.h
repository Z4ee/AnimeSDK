#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA_METHOD_2_06EDC62F8A066D20_OFFSET UNITYSDK_OFFSET(0x1D41AB50)
#define RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41ACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PenaconyEndmostSimpleTalkData_TypeDefinitionIndex = 21577;

	class PenaconyEndmostSimpleTalkData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SentenceID; // 0x10
		::System::Single BlockTime; // 0x14
		::System::Single Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_06EDC62F8A066D20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PenaconyEndmostSimpleTalkData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PenaconyEndmostSimpleTalkData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTSIMPLETALKDATA_METHOD_2_06EDC62F8A066D20_OFFSET))(a1, a2);
		}
	};
}
