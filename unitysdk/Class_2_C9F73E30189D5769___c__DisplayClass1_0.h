#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C9F73E30189D5769___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE639D10)
#define CLASS_2_C9F73E30189D5769___C__DISPLAYCLASS1_0__REFRESHEFFECTS_B__1_OFFSET UNITYSDK_OFFSET(0xE63A1B0)

inline static constexpr unsigned int Class_2_C9F73E30189D5769___c__DisplayClass1_0_TypeDefinitionIndex = 65654;

class Class_2_C9F73E30189D5769___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* effectPaths; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshEffects_b__1(::System::String* k)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C9F73E30189D5769___C__DISPLAYCLASS1_0__REFRESHEFFECTS_B__1_OFFSET))(this, k);
	}
};
