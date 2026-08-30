#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagContainer; }

#define STRUCT_2_CC45B4503679E14E_32_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82F250)
#define STRUCT_2_CC45B4503679E14E_32_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x860E40)
#define STRUCT_2_CC45B4503679E14E_32_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12370)
#define STRUCT_2_CC45B4503679E14E_32_GET_POOL_OFFSET UNITYSDK_OFFSET(0x161E0)
#define STRUCT_2_CC45B4503679E14E_32_INIT_OFFSET UNITYSDK_OFFSET(0x6B82D0)
#define STRUCT_2_CC45B4503679E14E_32_METHOD_2_6DC2BF0030AE0012_OFFSET UNITYSDK_OFFSET(0x3AA7880)
#define STRUCT_2_CC45B4503679E14E_32_METHOD_2_7FAC7D29396EAA9C_OFFSET UNITYSDK_OFFSET(0x3AA7830)
#define STRUCT_2_CC45B4503679E14E_32_METHOD_2_BDDCF2E9DEFA8EAD_OFFSET UNITYSDK_OFFSET(0x3AA7820)

inline static constexpr unsigned int Struct_2_CC45B4503679E14E_32_TypeDefinitionIndex = 10660;

struct alignas(8) Struct_2_CC45B4503679E14E_32
{
	::Class_1_43BD383C98B4C0C5_3* BEHHICMOFIE; // 0x10
	::System::UInt32 IKKNJMJCDOJ; // 0x18

	::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_INIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_GET_ISVALID_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_GET_OFFSET_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_3* get_Pool()
	{
		return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_GET_POOL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::HoyoTag*>* Method_2_BDDCF2E9DEFA8EAD()
	{
		return ((::Il2CppArray<::RPG::GameCore::HoyoTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_METHOD_2_BDDCF2E9DEFA8EAD_OFFSET))(this);
	}

	::System::Void Method_2_7FAC7D29396EAA9C(::Il2CppArray<::RPG::GameCore::HoyoTag*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::HoyoTag*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_METHOD_2_7FAC7D29396EAA9C_OFFSET))(this, a1);
	}

	::RPG::GameCore::HoyoTagContainer* Method_2_6DC2BF0030AE0012()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CC45B4503679E14E_32_METHOD_2_6DC2BF0030AE0012_OFFSET))(this);
	}
};
