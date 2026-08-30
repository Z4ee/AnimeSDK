#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS0_0__CREATESETINTERACTABLECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x17E5D9C0)
#define CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5BDE0)

inline static constexpr unsigned int Class_1_B22E8A401C7E6E0D___c__DisplayClass0_0_TypeDefinitionIndex = 79515;

class Class_1_B22E8A401C7E6E0D___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
	::System::Boolean interactable; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateSetInteractableCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22E8A401C7E6E0D___C__DISPLAYCLASS0_0__CREATESETINTERACTABLECOMMAND_B__0_OFFSET))(this);
	}
};
