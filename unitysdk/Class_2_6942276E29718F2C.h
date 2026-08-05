#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }

#define CLASS_2_6942276E29718F2C_METHOD_2_9FEC95FABC646B0B_OFFSET UNITYSDK_OFFSET(0x16661480)
#define CLASS_2_6942276E29718F2C_METHOD_2_B21AD074EE2B0CEC_OFFSET UNITYSDK_OFFSET(0x16661470)
#define CLASS_2_6942276E29718F2C_METHOD_2_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0x16661270)
#define CLASS_2_6942276E29718F2C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x166613E0)
#define CLASS_2_6942276E29718F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x166611F0)

inline static constexpr unsigned int Class_2_6942276E29718F2C_TypeDefinitionIndex = 57269;

class Class_2_6942276E29718F2C : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC388DC6F82177FE(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_DC388DC6F82177FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B21AD074EE2B0CEC(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_B21AD074EE2B0CEC_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode* Method_2_9FEC95FABC646B0B()
	{
		return ((::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6942276E29718F2C_METHOD_2_9FEC95FABC646B0B_OFFSET))(this);
	}
};
