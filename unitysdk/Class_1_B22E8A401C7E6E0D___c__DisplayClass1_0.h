#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS1_0__CREATEMARKSKIPLAYOUTCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x17E5D9D0)
#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5BF20)

inline static constexpr unsigned int Class_1_B22E8A401C7E6E0D___c__DisplayClass1_0_TypeDefinitionIndex = 79516;

class Class_1_B22E8A401C7E6E0D___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateMarkSkipLayoutCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS1_0__CREATEMARKSKIPLAYOUTCOMMAND_B__0_OFFSET))(this);
	}
};
