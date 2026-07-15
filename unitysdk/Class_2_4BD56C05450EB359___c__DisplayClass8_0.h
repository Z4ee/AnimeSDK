#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF8737E878E8536B;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x140ECA90)
#define CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0___SETUPBUFFLIST_B__0_OFFSET UNITYSDK_OFFSET(0x140ECDE0)

inline static constexpr unsigned int Class_2_4BD56C05450EB359___c__DisplayClass8_0_TypeDefinitionIndex = 67985;

class Class_2_4BD56C05450EB359___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* buffData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupBuffList_b__0(::Class_2_AF8737E878E8536B* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF8737E878E8536B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359___C__DISPLAYCLASS8_0___SETUPBUFFLIST_B__0_OFFSET))(this, a1, a2);
	}
};
