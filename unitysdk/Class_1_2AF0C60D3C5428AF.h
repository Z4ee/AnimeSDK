#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2AF0C60D3C5428AF_METHOD_1_6753D2A2B36BB03A_1_OFFSET UNITYSDK_OFFSET(0x13AA6D30)
#define CLASS_1_2AF0C60D3C5428AF_METHOD_1_6753D2A2B36BB03A_OFFSET UNITYSDK_OFFSET(0x13AA6C50)

inline static constexpr unsigned int Class_1_2AF0C60D3C5428AF_TypeDefinitionIndex = 70096;

class Class_1_2AF0C60D3C5428AF : public ::System::Object
{
public:
	static ::MoleMole::NAPInput::Attitude Method_1_6753D2A2B36BB03A(::MoleMole::NAPInput::Attitude& a1, ::MoleMole::NAPInput::Attitude& a2, ::Foundation::SpaceType a3)
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + CLASS_1_2AF0C60D3C5428AF_METHOD_1_6753D2A2B36BB03A_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::NAPInput::Attitude Method_1_6753D2A2B36BB03A_1(::MoleMole::NAPInput::Attitude& a1, ::MoleMole::NAPInput::Attitude& a2, ::Foundation::SpaceType a3)
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + CLASS_1_2AF0C60D3C5428AF_METHOD_1_6753D2A2B36BB03A_1_OFFSET))(a1, a2, a3);
	}
};
