#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ChangeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_829CFD6018DBC4E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17B07F70)

inline static constexpr unsigned int Class_1_829CFD6018DBC4E4_TypeDefinitionIndex = 35368;

class Class_1_829CFD6018DBC4E4 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::Client::LittleGameShare::ChangeType Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_829CFD6018DBC4E4__CTOR_OFFSET))(this);
	}
};
