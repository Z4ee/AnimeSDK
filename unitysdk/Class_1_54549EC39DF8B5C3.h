#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CLASS_1_54549EC39DF8B5C3_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x973AEA0)
#define CLASS_1_54549EC39DF8B5C3_METHOD_1_51AC7912135C5E23_1_OFFSET UNITYSDK_OFFSET(0x973AD20)
#define CLASS_1_54549EC39DF8B5C3_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x9739D90)
#define CLASS_1_54549EC39DF8B5C3_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x9739F90)
#define CLASS_1_54549EC39DF8B5C3_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x973A5C0)
#define CLASS_1_54549EC39DF8B5C3_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x973ACA0)
#define CLASS_1_54549EC39DF8B5C3_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x9739F10)
#define CLASS_1_54549EC39DF8B5C3_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x973AEB0)
#define CLASS_1_54549EC39DF8B5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x9739D20)

inline static constexpr unsigned int Class_1_54549EC39DF8B5C3_TypeDefinitionIndex = 71939;

class Class_1_54549EC39DF8B5C3 : public ::System::Object
{
public:
	::RPG::Client::ChimeraBattlePuzzleArea* Field_1_2; // 0x10
	::System::Action* Field_1_6; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_5; // 0x20
	::RPG::Client::ChimeraBattlePuzzleArea* Field_1_1; // 0x28
	::System::Single Field_1_3; // 0x30
	::System::Boolean _IsFinished_k__BackingField; // 0x34
	::System::Single Field_1_4; // 0x38

	::System::Void _ctor(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_METHOD_1_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_METHOD_1_51AC7912135C5E23_1_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_METHOD_1_998E122F46014853_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54549EC39DF8B5C3_SET_ISFINISHED_OFFSET))(this, value);
	}
};
