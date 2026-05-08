#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define CLASS_2_1A3197598F874EB7_CLASS_1_F9C7920113FE5372_METHOD_1_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x1622AB30)
#define CLASS_2_1A3197598F874EB7_CLASS_1_F9C7920113FE5372__CTOR_OFFSET UNITYSDK_OFFSET(0x1622AB20)

inline static constexpr unsigned int Class_2_1A3197598F874EB7_Class_1_F9C7920113FE5372_TypeDefinitionIndex = 63331;

class Class_2_1A3197598F874EB7_Class_1_F9C7920113FE5372 : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A3197598F874EB7_CLASS_1_F9C7920113FE5372__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_1A3197598F874EB7_CLASS_1_F9C7920113FE5372_METHOD_1_9122FC030BA948E4_OFFSET))(this, a1);
	}
};
