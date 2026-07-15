#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_E5D38AB31F1F266B;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_0EDBB2B883C2F751_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x184A31E0)
#define CLASS_3_0EDBB2B883C2F751_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x184A30E0)
#define CLASS_3_0EDBB2B883C2F751__CTOR_OFFSET UNITYSDK_OFFSET(0x184A3170)

inline static constexpr unsigned int Class_3_0EDBB2B883C2F751_TypeDefinitionIndex = 22039;

class Class_3_0EDBB2B883C2F751 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Class_2_E5D38AB31F1F266B* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::System::String* Field_3_5; // 0x40
	::System::String* Field_3_6; // 0x48
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x50
	::System::String* Field_3_8; // 0x58
	::System::Single Field_3_9; // 0x60
	::System::Single Field_3_10; // 0x64
	::RPG::GameCore::StringHash Field_3_11; // 0x68
	::System::Boolean Field_3_12; // 0x6C
	::System::Boolean Field_3_13; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EDBB2B883C2F751__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0EDBB2B883C2F751*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0EDBB2B883C2F751*&))((::PBYTE)hIl2Cpp + CLASS_3_0EDBB2B883C2F751_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0EDBB2B883C2F751* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0EDBB2B883C2F751*))((::PBYTE)hIl2Cpp + CLASS_3_0EDBB2B883C2F751_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
