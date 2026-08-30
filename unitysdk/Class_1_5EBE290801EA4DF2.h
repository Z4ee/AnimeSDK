#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_5EBE290801EA4DF2__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D3EE0)

inline static constexpr unsigned int Class_1_5EBE290801EA4DF2_TypeDefinitionIndex = 52386;

class Class_1_5EBE290801EA4DF2 : public ::System::Object
{
public:
	::System::String* OENAMINOLLF; // 0x10
	::Il2CppArray<::System::UInt32>* KGKEPIJIABL; // 0x18
	::System::Single OOFCOHBIAKL; // 0x20
	::System::Nullable_1<::System::UInt32> MCLLALGABAB; // 0x24
	::System::Nullable_1<::System::UInt32> IOPBMDJMPHO; // 0x2C
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBE290801EA4DF2__CTOR_OFFSET))(this);
	}
};
