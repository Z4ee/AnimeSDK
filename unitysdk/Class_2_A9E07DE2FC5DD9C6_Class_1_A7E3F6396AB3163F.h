#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_A7E3F6396AB3163F_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x164AD7E0)
#define CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_A7E3F6396AB3163F_METHOD_1_FE99C523EC0741C9_OFFSET UNITYSDK_OFFSET(0x164AD6F0)
#define CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_A7E3F6396AB3163F__CTOR_OFFSET UNITYSDK_OFFSET(0x164AD6E0)

inline static constexpr unsigned int Class_2_A9E07DE2FC5DD9C6_Class_1_A7E3F6396AB3163F_TypeDefinitionIndex = 80626;

class Class_2_A9E07DE2FC5DD9C6_Class_1_A7E3F6396AB3163F : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_A7E3F6396AB3163F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FE99C523EC0741C9(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_A7E3F6396AB3163F_METHOD_1_FE99C523EC0741C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A9E07DE2FC5DD9C6_CLASS_1_A7E3F6396AB3163F_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}
};
