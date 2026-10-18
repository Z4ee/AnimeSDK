#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveGearConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_0126EC166C1B1051_OFFSET UNITYSDK_OFFSET(0xBA30AA0)
#define CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBA30C00)
#define CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3__CTOR_OFFSET UNITYSDK_OFFSET(0xBA30CE0)

inline static constexpr unsigned int Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3_TypeDefinitionIndex = 56081;

class Class_1_48FE7ED9C7C8C788_Class_1_0B550233887B05A3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveGearConfig*>* BPGFCIEAJKG; // 0x10
	::RPG::GameCore::FixPoint LHPPOCJCPIA; // 0x18
	::System::UInt32 LDFEJAAOLKB; // 0x20
	::System::UInt32 ILGNCEELEJJ; // 0x24
	::RPG::GameCore::FixPoint DGDEGJPPFLK; // 0x28
	::RPG::GameCore::FixPoint PBJFNFPPJEI; // 0x30
	::RPG::GameCore::FixPoint ENBFEFCDLAH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_0126EC166C1B1051()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_0126EC166C1B1051_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FE7ED9C7C8C788_CLASS_1_0B550233887B05A3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
