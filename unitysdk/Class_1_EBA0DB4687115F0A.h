#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelTriggerEventRow; }
namespace System { class String; }

#define CLASS_1_EBA0DB4687115F0A_GET__ROW_OFFSET UNITYSDK_OFFSET(0x152E6340)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_770B8DD54F7B72FB_OFFSET UNITYSDK_OFFSET(0x152E6440)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x152E63A0)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x152E63F0)
#define CLASS_1_EBA0DB4687115F0A_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x152E6350)
#define CLASS_1_EBA0DB4687115F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6330)

inline static constexpr unsigned int Class_1_EBA0DB4687115F0A_TypeDefinitionIndex = 63454;

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

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::Il2CppArray<::System::Single>* Method_1_770B8DD54F7B72FB()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA0DB4687115F0A_METHOD_1_770B8DD54F7B72FB_OFFSET))(this);
	}
};
