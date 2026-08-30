#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMsgType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EBA383B8D63056FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D4C90)

inline static constexpr unsigned int Class_1_EBA383B8D63056FF_TypeDefinitionIndex = 41148;

class Class_1_EBA383B8D63056FF : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* NNACKOBKFGE; // 0x10
	::RPG::Client::LittleGame::TRFMsgType GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA383B8D63056FF__CTOR_OFFSET))(this);
	}
};
