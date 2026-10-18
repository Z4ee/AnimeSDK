#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A4088D9A55CD220E;
namespace RPG::Client::B51Racing { class B51RacingPauseDialogViewModel; }

#define CLASS_1_F881705B63B8AE70_METHOD_1_3859939CB317D929_OFFSET UNITYSDK_OFFSET(0xE24AC40)
#define CLASS_1_F881705B63B8AE70_METHOD_1_9C8666AC2D5EF675_OFFSET UNITYSDK_OFFSET(0xE24ABA0)
#define CLASS_1_F881705B63B8AE70__CTOR_OFFSET UNITYSDK_OFFSET(0xE24ADA0)

inline static constexpr unsigned int Class_1_F881705B63B8AE70_TypeDefinitionIndex = 81933;

class Class_1_F881705B63B8AE70 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F881705B63B8AE70__CTOR_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingPauseDialogViewModel* Method_1_9C8666AC2D5EF675(::Class_1_A4088D9A55CD220E* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingPauseDialogViewModel*(*)(::PVOID, ::Class_1_A4088D9A55CD220E*))((::PBYTE)hIl2Cpp + CLASS_1_F881705B63B8AE70_METHOD_1_9C8666AC2D5EF675_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_3859939CB317D929()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F881705B63B8AE70_METHOD_1_3859939CB317D929_OFFSET))(this);
	}
};
