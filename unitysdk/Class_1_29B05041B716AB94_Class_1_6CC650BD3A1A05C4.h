#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_6CC650BD3A1A05C4_METHOD_1_7A99CC24200B8D4F_OFFSET UNITYSDK_OFFSET(0x12CA2E60)
#define CLASS_1_29B05041B716AB94_CLASS_1_6CC650BD3A1A05C4_METHOD_1_842F6F8D139C672A_OFFSET UNITYSDK_OFFSET(0x12CA2E00)
#define CLASS_1_29B05041B716AB94_CLASS_1_6CC650BD3A1A05C4__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA2DF0)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_6CC650BD3A1A05C4_TypeDefinitionIndex = 77597;

class Class_1_29B05041B716AB94_Class_1_6CC650BD3A1A05C4 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_6CC650BD3A1A05C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_842F6F8D139C672A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_6CC650BD3A1A05C4_METHOD_1_842F6F8D139C672A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A99CC24200B8D4F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_6CC650BD3A1A05C4_METHOD_1_7A99CC24200B8D4F_OFFSET))(this, a1);
	}
};
