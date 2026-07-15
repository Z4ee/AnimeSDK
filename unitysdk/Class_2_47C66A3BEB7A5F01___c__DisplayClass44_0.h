#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0EB11F3A302C20F1;
class Class_2_47C66A3BEB7A5F01;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBB150)
#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS44_0___BUILDENTITIES_B__1_OFFSET UNITYSDK_OFFSET(0x16CBB160)
#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS44_0___BUILDENTITIES_B__2_OFFSET UNITYSDK_OFFSET(0x16CBB1C0)

inline static constexpr unsigned int Class_2_47C66A3BEB7A5F01___c__DisplayClass44_0_TypeDefinitionIndex = 57697;

class Class_2_47C66A3BEB7A5F01___c__DisplayClass44_0 : public ::System::Object
{
public:
	::Class_1_0EB11F3A302C20F1* entityLoadingContextData; // 0x10
	::Class_2_47C66A3BEB7A5F01* __4__this; // 0x18
	::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean>* __9__2; // 0x20
	::System::Action_1<::RPG::GameCore::LittleGameEntityConfig*>* __9__1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
	}

	::System::Void __BuildEntities_b__1(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS44_0___BUILDENTITIES_B__1_OFFSET))(this, a1);
	}

	::System::Boolean __BuildEntities_b__2(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS44_0___BUILDENTITIES_B__2_OFFSET))(this, a1);
	}
};
