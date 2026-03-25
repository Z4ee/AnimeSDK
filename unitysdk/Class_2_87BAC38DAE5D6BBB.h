#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_AB1A4AA1BFE2A872;

#define CLASS_2_87BAC38DAE5D6BBB_METHOD_2_2F4B6108E2917C18_OFFSET UNITYSDK_OFFSET(0x1791D460)
#define CLASS_2_87BAC38DAE5D6BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1791D610)

inline static constexpr unsigned int Class_2_87BAC38DAE5D6BBB_TypeDefinitionIndex = 15399;

class Class_2_87BAC38DAE5D6BBB : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* Field_2_1; // 0x10
	::Il2CppArray<::Class_2_AB1A4AA1BFE2A872*>* Field_2_2; // 0x18
	::System::UInt64 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BAC38DAE5D6BBB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_2F4B6108E2917C18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_87BAC38DAE5D6BBB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_87BAC38DAE5D6BBB*&))((::PBYTE)hIl2Cpp + CLASS_2_87BAC38DAE5D6BBB_METHOD_2_2F4B6108E2917C18_OFFSET))(a1, a2);
	}
};
