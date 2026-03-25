#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_0190AB1E1065D718;
class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define CLASS_1_01A098F2AEBD4878_METHOD_1_1827DE77D3F6AF69_OFFSET UNITYSDK_OFFSET(0x1105E2C0)
#define CLASS_1_01A098F2AEBD4878_METHOD_1_2242221248F9F386_OFFSET UNITYSDK_OFFSET(0x1105E3F0)
#define CLASS_1_01A098F2AEBD4878_METHOD_1_5B29EC1B70801E92_OFFSET UNITYSDK_OFFSET(0x1105E0B0)
#define CLASS_1_01A098F2AEBD4878_METHOD_1_7A051F89C5353A37_OFFSET UNITYSDK_OFFSET(0x1105E5B0)
#define CLASS_1_01A098F2AEBD4878_METHOD_1_A7726EED312A3CE5_OFFSET UNITYSDK_OFFSET(0x1105DFA0)
#define CLASS_1_01A098F2AEBD4878__CTOR_OFFSET UNITYSDK_OFFSET(0x1105DF90)

inline static constexpr unsigned int Class_1_01A098F2AEBD4878_TypeDefinitionIndex = 63279;

class Class_1_01A098F2AEBD4878 : public ::System::Object
{
public:
	::Class_3_543326C044264182* Field_1_1; // 0x10
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x18

	::System::Void _ctor(::Class_3_543326C044264182* a1, ::Class_2_E9C9AAD7C711B3E3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_01A098F2AEBD4878__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7726EED312A3CE5(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleTriggerCallback* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleTriggerCallback*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_01A098F2AEBD4878_METHOD_1_A7726EED312A3CE5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5B29EC1B70801E92(::Class_2_181A7F9409C60DBC* a1, ::Class_1_0190AB1E1065D718* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_0190AB1E1065D718*))((::PBYTE)hIl2Cpp + CLASS_1_01A098F2AEBD4878_METHOD_1_5B29EC1B70801E92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1827DE77D3F6AF69(::Class_2_181A7F9409C60DBC* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType))((::PBYTE)hIl2Cpp + CLASS_1_01A098F2AEBD4878_METHOD_1_1827DE77D3F6AF69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2242221248F9F386(::Class_2_181A7F9409C60DBC* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_01A098F2AEBD4878_METHOD_1_2242221248F9F386_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7A051F89C5353A37(::Class_2_181A7F9409C60DBC* a1, ::Class_1_0190AB1E1065D718* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_0190AB1E1065D718*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_01A098F2AEBD4878_METHOD_1_7A051F89C5353A37_OFFSET))(this, a1, a2, a3);
	}
};
