#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A4088D9A55CD220E;
namespace RPG::Client::B51Racing { class B51RacingPauseDialogViewModel; }

#define CLASS_1_F881705B63B8AE70_METHOD_1_9C8666AC2D5EF675_OFFSET UNITYSDK_OFFSET(0x18CE18E0)
#define CLASS_1_F881705B63B8AE70_METHOD_1_DC3FBB50D433751E_OFFSET UNITYSDK_OFFSET(0x18CE1980)
#define CLASS_1_F881705B63B8AE70__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE1B10)

inline static constexpr unsigned int Class_1_F881705B63B8AE70_TypeDefinitionIndex = 80605;

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

	::RPG::Client::TextID Method_1_DC3FBB50D433751E()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F881705B63B8AE70_METHOD_1_DC3FBB50D433751E_OFFSET))(this);
	}
};
