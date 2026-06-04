#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelTriggerEventRow; }
namespace System { class String; }

#define CLASS_1_EBA0DB4687115F0A_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1356F570)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1356F5A0)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_47611495928F3A89_OFFSET UNITYSDK_OFFSET(0x1356F5E0)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x1356F5C0)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x1356F580)
#define CLASS_1_EBA0DB4687115F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1356F560)

inline static constexpr unsigned int Class_1_EBA0DB4687115F0A_TypeDefinitionIndex = 59330;

class Class_1_EBA0DB4687115F0A : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelTriggerEventRow* __Row_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelTriggerEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTriggerEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChimeraDuelTriggerEventRow* get__Row()
	{
		return ((::RPG::GameCore::ChimeraDuelTriggerEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_GET__ROW_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::Il2CppArray<::System::Single>* Method_1_47611495928F3A89()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_47611495928F3A89_OFFSET))(this);
	}
};
