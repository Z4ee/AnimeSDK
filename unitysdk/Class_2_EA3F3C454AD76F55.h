#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1382163A006DA4F3.h"

namespace RPG::GameCore { class LittleGameConstConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_EA3F3C454AD76F55_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x16624470)
#define CLASS_2_EA3F3C454AD76F55_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x166246F0)
#define CLASS_2_EA3F3C454AD76F55_METHOD_2_89C3D3C22458DF76_OFFSET UNITYSDK_OFFSET(0x16624820)
#define CLASS_2_EA3F3C454AD76F55_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x166246B0)
#define CLASS_2_EA3F3C454AD76F55__CTOR_OFFSET UNITYSDK_OFFSET(0x166243A0)

inline static constexpr unsigned int Class_2_EA3F3C454AD76F55_TypeDefinitionIndex = 28841;

class Class_2_EA3F3C454AD76F55 : public ::Class_1_1382163A006DA4F3
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_2_6; // 0x18
	::RPG::GameCore::LittleGameEntityConfig* Field_2_1; // 0x20
	::RPG::GameCore::LittleGameLevelConfig* Field_2_4; // 0x28
	::RPG::GameCore::LittleGameEntityConfig* Field_2_0; // 0x30
	::RPG::GameCore::LittleGameEntityConfig* Field_2_3; // 0x38
	::RPG::GameCore::LittleGameEntityConfig* Field_2_2; // 0x40
	::RPG::GameCore::LittleGameConstConfig* Field_2_5; // 0x48

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EA3F3C454AD76F55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3F3C454AD76F55_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3F3C454AD76F55_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA3F3C454AD76F55_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameEntityConfig* Method_2_89C3D3C22458DF76(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EA3F3C454AD76F55_METHOD_2_89C3D3C22458DF76_OFFSET))(this, a1);
	}
};
