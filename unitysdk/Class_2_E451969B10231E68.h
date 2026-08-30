#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1382163A006DA4F3.h"

namespace RPG::GameCore { class LittleGameConstConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E451969B10231E68_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x19D53000)
#define CLASS_2_E451969B10231E68_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x19D53280)
#define CLASS_2_E451969B10231E68_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19D53240)
#define CLASS_2_E451969B10231E68_METHOD_2_D9B69CBFF2C3295F_OFFSET UNITYSDK_OFFSET(0x19D533C0)
#define CLASS_2_E451969B10231E68__CTOR_OFFSET UNITYSDK_OFFSET(0x19D52F30)

inline static constexpr unsigned int Class_2_E451969B10231E68_TypeDefinitionIndex = 36500;

class Class_2_E451969B10231E68 : public ::Class_1_1382163A006DA4F3
{
public:
	::RPG::GameCore::LittleGameEntityConfig* PBFLDBBIGNB; // 0x18
	::RPG::GameCore::LittleGameConstConfig* OEBCGADNGII; // 0x20
	::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* NKKOKKFGNHC; // 0x30
	::RPG::GameCore::LittleGameEntityConfig* PMBJAHLGBEG; // 0x38
	::RPG::GameCore::LittleGameEntityConfig* LOAGALADJPN; // 0x40
	::RPG::GameCore::LittleGameEntityConfig* EBEHGIPOOEI; // 0x48

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E451969B10231E68__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E451969B10231E68_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E451969B10231E68_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E451969B10231E68_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameEntityConfig* Method_2_D9B69CBFF2C3295F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E451969B10231E68_METHOD_2_D9B69CBFF2C3295F_OFFSET))(this, a1);
	}
};
