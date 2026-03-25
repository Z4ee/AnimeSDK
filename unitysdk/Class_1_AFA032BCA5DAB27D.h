#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AFA032BCA5DAB27D__CTOR_OFFSET UNITYSDK_OFFSET(0x104A62C0)

inline static constexpr unsigned int Class_1_AFA032BCA5DAB27D_TypeDefinitionIndex = 50504;

class Class_1_AFA032BCA5DAB27D : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::RPG::Client::NotifyType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFA032BCA5DAB27D__CTOR_OFFSET))(this);
	}
};
