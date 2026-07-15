#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IdleLiveUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_CDFC200E015EA18C_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1B126A10)
#define CLASS_3_CDFC200E015EA18C_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1B1269D0)
#define CLASS_3_CDFC200E015EA18C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B126A00)

inline static constexpr unsigned int Class_3_CDFC200E015EA18C_TypeDefinitionIndex = 9923;

class Class_3_CDFC200E015EA18C : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18
	::RPG::Client::IdleLiveUIType Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDFC200E015EA18C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CDFC200E015EA18C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CDFC200E015EA18C*&))((::PBYTE)hIl2Cpp + CLASS_3_CDFC200E015EA18C_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CDFC200E015EA18C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CDFC200E015EA18C*))((::PBYTE)hIl2Cpp + CLASS_3_CDFC200E015EA18C_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
