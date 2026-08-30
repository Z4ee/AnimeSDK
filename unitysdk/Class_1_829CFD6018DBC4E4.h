#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ChangeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_829CFD6018DBC4E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C5620)

inline static constexpr unsigned int Class_1_829CFD6018DBC4E4_TypeDefinitionIndex = 36229;

class Class_1_829CFD6018DBC4E4 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* MADGAJKGCMD; // 0x10
	::System::UInt32 NAAENBLCEEG; // 0x18
	::RPG::Client::LittleGameShare::ChangeType EBFOHGMMHKL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_829CFD6018DBC4E4__CTOR_OFFSET))(this);
	}
};
