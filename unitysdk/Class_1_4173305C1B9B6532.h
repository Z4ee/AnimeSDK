#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;

#define CLASS_1_4173305C1B9B6532_METHOD_1_23D03D242F7CA1D8_OFFSET UNITYSDK_OFFSET(0x8854020)
#define CLASS_1_4173305C1B9B6532_METHOD_1_C099BFAC7CD3CF58_OFFSET UNITYSDK_OFFSET(0x8853FA0)
#define CLASS_1_4173305C1B9B6532_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88540A0)
#define CLASS_1_4173305C1B9B6532__CTOR_OFFSET UNITYSDK_OFFSET(0x8853F90)

inline static constexpr unsigned int Class_1_4173305C1B9B6532_TypeDefinitionIndex = 50828;

class Class_1_4173305C1B9B6532 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_4173305C1B9B6532__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_C099BFAC7CD3CF58(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_4173305C1B9B6532_METHOD_1_C099BFAC7CD3CF58_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_573* Method_1_23D03D242F7CA1D8(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_4173305C1B9B6532_METHOD_1_23D03D242F7CA1D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4173305C1B9B6532_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
