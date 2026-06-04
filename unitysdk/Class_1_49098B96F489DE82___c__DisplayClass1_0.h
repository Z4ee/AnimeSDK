#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_49098B96F489DE82___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB781560)
#define CLASS_1_49098B96F489DE82___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xB781580)

inline static constexpr unsigned int Class_1_49098B96F489DE82___c__DisplayClass1_0_TypeDefinitionIndex = 72041;

class Class_1_49098B96F489DE82___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_B66C1067C0468FBB*>* excluded; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SelectTarget_b__0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET))(this, a1);
	}
};
