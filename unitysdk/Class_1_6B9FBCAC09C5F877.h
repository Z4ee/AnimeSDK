#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6B9FBCAC09C5F877_EQUALS_OFFSET UNITYSDK_OFFSET(0x159AF780)
#define CLASS_1_6B9FBCAC09C5F877__CTOR_OFFSET UNITYSDK_OFFSET(0x159AF800)

inline static constexpr unsigned int Class_1_6B9FBCAC09C5F877_TypeDefinitionIndex = 54488;

class Class_1_6B9FBCAC09C5F877 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* CDMKBCHLPAB; // 0x10
	::System::UInt32 AAGKEBFHLMC; // 0x18
	::System::UInt32 PMIEAEGJNMJ; // 0x1C
	::System::UInt32 IHALFHPNNGL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B9FBCAC09C5F877__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_6B9FBCAC09C5F877* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B9FBCAC09C5F877*))((::PBYTE)hIl2Cpp + CLASS_1_6B9FBCAC09C5F877_EQUALS_OFFSET))(this, a1);
	}
};
