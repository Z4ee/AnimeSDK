#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_737370D674376C00;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_07DDA14415B0B616_METHOD_1_4C85CC418FBB1199_OFFSET UNITYSDK_OFFSET(0x10C85A20)
#define CLASS_1_07DDA14415B0B616_METHOD_1_597174F7F7959C8E_OFFSET UNITYSDK_OFFSET(0x10C85840)
#define CLASS_1_07DDA14415B0B616_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10C859B0)
#define CLASS_1_07DDA14415B0B616_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x10C85AD0)
#define CLASS_1_07DDA14415B0B616__CTOR_OFFSET UNITYSDK_OFFSET(0x10C857C0)

inline static constexpr unsigned int Class_1_07DDA14415B0B616_TypeDefinitionIndex = 69130;

class Class_1_07DDA14415B0B616 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07DDA14415B0B616__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_597174F7F7959C8E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_07DDA14415B0B616_METHOD_1_597174F7F7959C8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07DDA14415B0B616_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4C85CC418FBB1199(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07DDA14415B0B616_METHOD_1_4C85CC418FBB1199_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_737370D674376C00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_737370D674376C00*))((::PBYTE)hIl2Cpp + CLASS_1_07DDA14415B0B616_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}
};
