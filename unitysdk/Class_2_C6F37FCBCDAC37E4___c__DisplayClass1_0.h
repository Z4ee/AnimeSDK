#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C6F37FCBCDAC37E4___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABECA70)
#define CLASS_2_C6F37FCBCDAC37E4___C__DISPLAYCLASS1_0__REFRESHEFFECTS_B__1_OFFSET UNITYSDK_OFFSET(0xABECFF0)

inline static constexpr unsigned int Class_2_C6F37FCBCDAC37E4___c__DisplayClass1_0_TypeDefinitionIndex = 66588;

class Class_2_C6F37FCBCDAC37E4___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* effectPaths; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshEffects_b__1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C6F37FCBCDAC37E4___C__DISPLAYCLASS1_0__REFRESHEFFECTS_B__1_OFFSET))(this, a1);
	}
};
