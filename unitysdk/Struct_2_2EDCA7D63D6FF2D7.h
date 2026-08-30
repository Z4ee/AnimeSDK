#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_73;
class Class_4_2E0A1A668714B3CC;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_24F974931E9789BB_OFFSET UNITYSDK_OFFSET(0x3B76CA0)
#define STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_55B393D44D9358E3_OFFSET UNITYSDK_OFFSET(0x3B76C40)

inline static constexpr unsigned int Struct_2_2EDCA7D63D6FF2D7_TypeDefinitionIndex = 36448;

struct alignas(8) Struct_2_2EDCA7D63D6FF2D7
{
	::Class_4_2E0A1A668714B3CC* IKLJGJHHMOL; // 0x10
	::System::UInt32 BOKJJKFCFME; // 0x18
	::System::UInt32 CONDNJOOEND; // 0x1C
	::System::Boolean CKMGPKBPKHA; // 0x20
	::RPG::GameCore::BaseLittleGameAbilityEffectConfig* HPBAMMEFDMK; // 0x28
	::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* GLGKAHCEPIL; // 0x30
	::Class_0_16E4307DCC419505_73* IKBEIKJAOFJ; // 0x38
	::Il2CppArray<::RPG::GameCore::FixPoint>* EJHODPJIFIN; // 0x40

	::System::UInt32 Method_2_55B393D44D9358E3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_55B393D44D9358E3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_24F974931E9789BB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_24F974931E9789BB_OFFSET))(this);
	}
};
