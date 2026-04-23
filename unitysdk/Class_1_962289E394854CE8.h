#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_962289E394854CE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C6E0F0)
#define CLASS_1_962289E394854CE8_GET_AOEGROUP_OFFSET UNITYSDK_OFFSET(0x17C6E140)
#define CLASS_1_962289E394854CE8_SET_AOEGROUP_OFFSET UNITYSDK_OFFSET(0x17C6E150)
#define CLASS_1_962289E394854CE8__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6DF70)

inline static constexpr unsigned int Class_1_962289E394854CE8_TypeDefinitionIndex = 34664;

class Class_1_962289E394854CE8 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>* _AoeGroup_k__BackingField; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_962289E394854CE8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_962289E394854CE8_DISPOSE_OFFSET))(this);
	}

	::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>* get_AoeGroup()
	{
		return ((::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_962289E394854CE8_GET_AOEGROUP_OFFSET))(this);
	}

	::System::Void set_AoeGroup(::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_1_962289E394854CE8_SET_AOEGROUP_OFFSET))(this, value);
	}
};
