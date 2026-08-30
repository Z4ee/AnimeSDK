#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/DuelChimeraState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FC4BBA00C18C42A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF849B0)

inline static constexpr unsigned int Class_1_FC4BBA00C18C42A4_TypeDefinitionIndex = 40392;

class Class_1_FC4BBA00C18C42A4 : public ::System::Object
{
public:
	::System::UInt32 PJNNPOKJEFD; // 0x10
	::System::UInt32 PJJDMBCIBDM; // 0x14
	::System::Int32 KKOHJJCHHCI; // 0x18
	::System::UInt32 GLADDBDMANG; // 0x1C
	::RPG::Client::LittleGame::DuelChimeraState MEPFOEEGBEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC4BBA00C18C42A4__CTOR_OFFSET))(this);
	}
};
