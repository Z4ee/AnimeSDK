#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F969215F73192D65;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_667914C479297D2B_CLASS_1_9BA1E8A7E1CFC009_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x11164200)
#define CLASS_1_667914C479297D2B_CLASS_1_9BA1E8A7E1CFC009__CTOR_OFFSET UNITYSDK_OFFSET(0x111641F0)

inline static constexpr unsigned int Class_1_667914C479297D2B_Class_1_9BA1E8A7E1CFC009_TypeDefinitionIndex = 79036;

class Class_1_667914C479297D2B_Class_1_9BA1E8A7E1CFC009 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Action_1<::Class_1_F969215F73192D65*>* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_CLASS_1_9BA1E8A7E1CFC009__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_F969215F73192D65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F969215F73192D65*))((::PBYTE)hIl2Cpp + CLASS_1_667914C479297D2B_CLASS_1_9BA1E8A7E1CFC009_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
	}
};
