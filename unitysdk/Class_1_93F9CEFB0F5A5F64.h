#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesJoyStickState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_93F9CEFB0F5A5F64__CTOR_OFFSET UNITYSDK_OFFSET(0x1398C740)

inline static constexpr unsigned int Class_1_93F9CEFB0F5A5F64_TypeDefinitionIndex = 73938;

class Class_1_93F9CEFB0F5A5F64 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState Field_1_0; // 0x10
	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93F9CEFB0F5A5F64__CTOR_OFFSET))(this);
	}
};
