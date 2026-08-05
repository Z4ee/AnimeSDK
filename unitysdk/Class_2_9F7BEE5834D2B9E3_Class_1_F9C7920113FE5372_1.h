#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define CLASS_2_9F7BEE5834D2B9E3_CLASS_1_F9C7920113FE5372_1_METHOD_1_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x10D25CC0)
#define CLASS_2_9F7BEE5834D2B9E3_CLASS_1_F9C7920113FE5372_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10D25CB0)

inline static constexpr unsigned int Class_2_9F7BEE5834D2B9E3_Class_1_F9C7920113FE5372_1_TypeDefinitionIndex = 81202;

class Class_2_9F7BEE5834D2B9E3_Class_1_F9C7920113FE5372_1 : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F7BEE5834D2B9E3_CLASS_1_F9C7920113FE5372_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9F7BEE5834D2B9E3_CLASS_1_F9C7920113FE5372_1_METHOD_1_9122FC030BA948E4_OFFSET))(this, a1);
	}
};
