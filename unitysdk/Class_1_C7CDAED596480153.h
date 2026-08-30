#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C7CDAED596480153_ADD_ACTIONS_OFFSET UNITYSDK_OFFSET(0x19D269C0)
#define CLASS_1_C7CDAED596480153_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x19D268D0)
#define CLASS_1_C7CDAED596480153_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19D26970)
#define CLASS_1_C7CDAED596480153_REMOVE_ACTIONS_OFFSET UNITYSDK_OFFSET(0x19D26A20)
#define CLASS_1_C7CDAED596480153__CTOR_OFFSET UNITYSDK_OFFSET(0x19D268B0)

inline static constexpr unsigned int Class_1_C7CDAED596480153_TypeDefinitionIndex = 36276;

class Class_1_C7CDAED596480153 : public ::System::Object
{
public:
	::System::Action* Actions; // 0x10
	::System::Single CDOLCLMGEBO; // 0x18
	::System::Single HBANLBGKNKP; // 0x1C
	::System::Single PGMIOKKLHIE; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void add_Actions(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_ADD_ACTIONS_OFFSET))(this, a1);
	}

	::System::Void remove_Actions(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_REMOVE_ACTIONS_OFFSET))(this, a1);
	}
};
