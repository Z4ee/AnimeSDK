#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4E4092B5084378A4__CTOR_OFFSET UNITYSDK_OFFSET(0xC111D20)

inline static constexpr unsigned int Class_1_4E4092B5084378A4_TypeDefinitionIndex = 79268;

class Class_1_4E4092B5084378A4 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* ACJEBIJEHOK; // 0x10
	::System::UInt32 CEGOPEIKDLA; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + CLASS_1_4E4092B5084378A4__CTOR_OFFSET))(this, a1, a2);
	}
};
