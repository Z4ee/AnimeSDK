#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_D00FA93D624E562A_METHOD_1_842F6F8D139C672A_OFFSET UNITYSDK_OFFSET(0x153BE980)
#define CLASS_1_29B05041B716AB94_CLASS_1_D00FA93D624E562A_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x153BE9E0)
#define CLASS_1_29B05041B716AB94_CLASS_1_D00FA93D624E562A__CTOR_OFFSET UNITYSDK_OFFSET(0x153BE970)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_D00FA93D624E562A_TypeDefinitionIndex = 50428;

class Class_1_29B05041B716AB94_Class_1_D00FA93D624E562A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_D00FA93D624E562A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_842F6F8D139C672A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_D00FA93D624E562A_METHOD_1_842F6F8D139C672A_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_D00FA93D624E562A_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
