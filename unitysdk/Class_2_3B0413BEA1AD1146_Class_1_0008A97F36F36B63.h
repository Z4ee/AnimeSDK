#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B0413BEA1AD1146;
namespace MoleMole { class UIGachaPageContext; }
namespace System { class Action; }

#define CLASS_2_3B0413BEA1AD1146_CLASS_1_0008A97F36F36B63_METHOD_1_A36F2C07290104C3_OFFSET UNITYSDK_OFFSET(0x15707370)
#define CLASS_2_3B0413BEA1AD1146_CLASS_1_0008A97F36F36B63__CTOR_OFFSET UNITYSDK_OFFSET(0x15707360)

inline static constexpr unsigned int Class_2_3B0413BEA1AD1146_Class_1_0008A97F36F36B63_TypeDefinitionIndex = 63524;

class Class_2_3B0413BEA1AD1146_Class_1_0008A97F36F36B63 : public ::System::Object
{
public:
	::Class_2_3B0413BEA1AD1146* Field_1_0; // 0x10
	::MoleMole::UIGachaPageContext* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0413BEA1AD1146_CLASS_1_0008A97F36F36B63__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A36F2C07290104C3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3B0413BEA1AD1146_CLASS_1_0008A97F36F36B63_METHOD_1_A36F2C07290104C3_OFFSET))(this, a1);
	}
};
