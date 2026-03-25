#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D66A03493B0F84A__CTOR_OFFSET UNITYSDK_OFFSET(0x8935C10)

inline static constexpr unsigned int Class_1_0D66A03493B0F84A_TypeDefinitionIndex = 58686;

class Class_1_0D66A03493B0F84A : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* Field_1_1; // 0x10
	::RPG::Client::TextID Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D66A03493B0F84A__CTOR_OFFSET))(this);
	}
};
