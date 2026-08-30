#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }

#define CLASS_1_769152ABE6FB1C2B_METHOD_1_0E012E88044D95D6_OFFSET UNITYSDK_OFFSET(0xBCEC520)
#define CLASS_1_769152ABE6FB1C2B_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0xBCEC480)
#define CLASS_1_769152ABE6FB1C2B__CTOR_OFFSET UNITYSDK_OFFSET(0xBCEC470)

inline static constexpr unsigned int Class_1_769152ABE6FB1C2B_TypeDefinitionIndex = 67248;

class Class_1_769152ABE6FB1C2B : public ::System::Object
{
public:
	::RPG::Client::RogueMagicUnitDataItem* DJBJGPGCGBC; // 0x10
	::Struct_2_276321B6B122C69C_5 LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::Struct_2_276321B6B122C69C_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_5))((::PBYTE)hIl2Cpp + CLASS_1_769152ABE6FB1C2B__CTOR_OFFSET))(this, a1);
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
