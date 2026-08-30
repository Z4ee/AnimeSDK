#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2250AFBBC876BF24__CTOR_OFFSET UNITYSDK_OFFSET(0x178A22B0)

inline static constexpr unsigned int Class_1_2250AFBBC876BF24_TypeDefinitionIndex = 63809;

class Class_1_2250AFBBC876BF24 : public ::System::Object
{
public:
	::System::Object* NNACKOBKFGE; // 0x10
	::RPG::Client::NotifyType ABIKECHFPAO; // 0x18

	::System::Void _ctor(::RPG::Client::NotifyType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2250AFBBC876BF24__CTOR_OFFSET))(this, a1, a2);
	}
};
