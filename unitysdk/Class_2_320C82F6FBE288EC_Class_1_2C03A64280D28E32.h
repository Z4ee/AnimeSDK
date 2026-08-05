#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FC34C7AD15A42B48.h"
#include "unitysdk/System/Object.h"

class Class_2_320C82F6FBE288EC;
namespace MoleMole { class ScrollViewItemWidgetController; }

#define CLASS_2_320C82F6FBE288EC_CLASS_1_2C03A64280D28E32_METHOD_1_907FF9CA9F1ECE5B_OFFSET UNITYSDK_OFFSET(0x159CD300)
#define CLASS_2_320C82F6FBE288EC_CLASS_1_2C03A64280D28E32_METHOD_1_C6BC169A9A7F5DFA_OFFSET UNITYSDK_OFFSET(0x159CD210)
#define CLASS_2_320C82F6FBE288EC_CLASS_1_2C03A64280D28E32__CTOR_OFFSET UNITYSDK_OFFSET(0x159CD200)

inline static constexpr unsigned int Class_2_320C82F6FBE288EC_Class_1_2C03A64280D28E32_TypeDefinitionIndex = 66910;

class Class_2_320C82F6FBE288EC_Class_1_2C03A64280D28E32 : public ::System::Object
{
public:
	::Class_2_320C82F6FBE288EC* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_CLASS_1_2C03A64280D28E32__CTOR_OFFSET))(this);
	}

	::Struct_2_FC34C7AD15A42B48 Method_1_C6BC169A9A7F5DFA(::System::Int32 a1)
	{
		return ((::Struct_2_FC34C7AD15A42B48(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_CLASS_1_2C03A64280D28E32_METHOD_1_C6BC169A9A7F5DFA_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_907FF9CA9F1ECE5B(::System::Int32 a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_320C82F6FBE288EC_CLASS_1_2C03A64280D28E32_METHOD_1_907FF9CA9F1ECE5B_OFFSET))(this, a1);
	}
};
