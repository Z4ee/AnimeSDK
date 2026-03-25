#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9C9B343BAD38C7E4;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A2D720)
#define CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0___SETUPBUFFLIST_B__0_OFFSET UNITYSDK_OFFSET(0x10A2DA30)

inline static constexpr unsigned int Class_2_4BD56C05450EB359___c__DisplayClass8_0_TypeDefinitionIndex = 58326;

class Class_2_4BD56C05450EB359___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* buffData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupBuffList_b__0(::Class_2_9C9B343BAD38C7E4* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C9B343BAD38C7E4*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0___SETUPBUFFLIST_B__0_OFFSET))(this, panel, i);
	}
};
