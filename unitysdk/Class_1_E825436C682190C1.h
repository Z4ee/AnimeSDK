#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_41;
class Class_1_A0D02DD7A013DE98;
class Class_1_E754E66360B8422F;
class Class_1_F9AE7AA9DD8A83B5;
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class RtBattleStageConfig; }

#define CLASS_1_E825436C682190C1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B9F20)

inline static constexpr unsigned int Class_1_E825436C682190C1_TypeDefinitionIndex = 50062;

class Class_1_E825436C682190C1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_13; // 0x10
	::Class_1_A0D02DD7A013DE98* Field_1_11; // 0x18
	::Il2CppArray<::Class_1_E754E66360B8422F*>* Field_1_8; // 0x20
	::RPG::GameCore::ILBattleStageConfigRow* Field_1_5; // 0x28
	::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>* Field_1_9; // 0x30
	::RPG::GameCore::RtBattleStageConfig* Field_1_6; // 0x38
	::Il2CppArray<::System::UInt32>* Field_1_10; // 0x40
	::Il2CppArray<::Class_1_7AB88D713F5121B3_41*>* Field_1_12; // 0x48
	::System::UInt32 Field_1_3; // 0x50
	::System::UInt32 Field_1_1; // 0x54
	::System::UInt64 Field_1_7; // 0x58
	::System::Boolean Field_1_4; // 0x60
	::System::Int32 Field_1_0; // 0x64
	::System::UInt32 Field_1_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E825436C682190C1__CTOR_OFFSET))(this);
	}
};
