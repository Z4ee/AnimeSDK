#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_6B160DE28C891EFB;
class Class_2_293C6AF513403273;
namespace System { class String; }

#define CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E51710)
#define CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS46_0__GETINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0x14E51BE0)
#define CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS46_0__GETINSTANCE_B__1_OFFSET UNITYSDK_OFFSET(0x14E51C30)

inline static constexpr unsigned int Class_1_7898B789E41E5CD6___c__DisplayClass46_0_TypeDefinitionIndex = 76843;

class Class_1_7898B789E41E5CD6___c__DisplayClass46_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetInstance_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_2_293C6AF513403273*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_2_293C6AF513403273*>))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS46_0__GETINSTANCE_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _GetInstance_b__1(::Class_1_6B160DE28C891EFB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B160DE28C891EFB*))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS46_0__GETINSTANCE_B__1_OFFSET))(this, a1);
	}
};
