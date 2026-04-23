#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }

#define CLASS_1_769152ABE6FB1C2B_METHOD_1_0E012E88044D95D6_OFFSET UNITYSDK_OFFSET(0x939B6F0)
#define CLASS_1_769152ABE6FB1C2B_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x939B650)
#define CLASS_1_769152ABE6FB1C2B__CTOR_OFFSET UNITYSDK_OFFSET(0x939B640)

inline static constexpr unsigned int Class_1_769152ABE6FB1C2B_TypeDefinitionIndex = 61953;

class Class_1_769152ABE6FB1C2B : public ::System::Object
{
public:
	::RPG::Client::RogueMagicUnitDataItem* Field_1_1; // 0x10
	::Struct_2_276321B6B122C69C_2 Field_1_0; // 0x18

	::System::Void _ctor(::Struct_2_276321B6B122C69C_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_2))((::PBYTE)hIl2Cpp + CLASS_1_769152ABE6FB1C2B__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769152ABE6FB1C2B_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::RogueMagicUnitDataItem* Method_1_0E012E88044D95D6()
	{
		return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769152ABE6FB1C2B_METHOD_1_0E012E88044D95D6_OFFSET))(this);
	}
};
