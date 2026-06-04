#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06D1599651D94205;
class Class_1_6B9FBCAC09C5F877;
class Class_1_7AB88D713F5121B3_41;
class Class_1_E754E66360B8422F;
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class RtBattleStageConfig; }

#define CLASS_1_0ED7108EB7D9E344__CTOR_OFFSET UNITYSDK_OFFSET(0x13694580)

inline static constexpr unsigned int Class_1_0ED7108EB7D9E344_TypeDefinitionIndex = 50729;

class Class_1_0ED7108EB7D9E344 : public ::System::Object
{
public:
	::Class_1_06D1599651D94205* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::RPG::GameCore::RtBattleStageConfig* Field_1_3; // 0x28
	::Il2CppArray<::Class_1_6B9FBCAC09C5F877*>* Field_1_4; // 0x30
	::Il2CppArray<::Class_1_7AB88D713F5121B3_41*>* Field_1_5; // 0x38
	::Il2CppArray<::Class_1_E754E66360B8422F*>* Field_1_6; // 0x40
	::RPG::GameCore::ILBattleStageConfigRow* Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x50
	::System::Int32 Field_1_9; // 0x54
	::System::UInt32 Field_1_10; // 0x58
	::System::UInt32 Field_1_11; // 0x5C
	::System::Boolean Field_1_12; // 0x60
	::System::UInt64 Field_1_13; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED7108EB7D9E344__CTOR_OFFSET))(this);
	}
};
