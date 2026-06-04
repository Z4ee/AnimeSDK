#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_7E069FB01FF359E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B67820)
#define CLASS_1_7E069FB01FF359E9_GET_AOEGROUP_OFFSET UNITYSDK_OFFSET(0x18B67870)
#define CLASS_1_7E069FB01FF359E9_SET_AOEGROUP_OFFSET UNITYSDK_OFFSET(0x18B67880)
#define CLASS_1_7E069FB01FF359E9__CTOR_OFFSET UNITYSDK_OFFSET(0x18B67760)

inline static constexpr unsigned int Class_1_7E069FB01FF359E9_TypeDefinitionIndex = 34947;

class Class_1_7E069FB01FF359E9 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>* _AoeGroup_k__BackingField; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9_DISPOSE_OFFSET))(this);
	}

	::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>* get_AoeGroup()
	{
		return ((::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9_GET_AOEGROUP_OFFSET))(this);
	}

	::System::Void set_AoeGroup(::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E069FB01FF359E9_SET_AOEGROUP_OFFSET))(this, a1);
	}
};
