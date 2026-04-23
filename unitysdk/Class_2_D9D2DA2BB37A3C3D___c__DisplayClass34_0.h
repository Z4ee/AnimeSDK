#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F949FB82A9B0DFD;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_D9D2DA2BB37A3C3D___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9359800)
#define CLASS_2_D9D2DA2BB37A3C3D___C__DISPLAYCLASS34_0___BUILDENTITIES_B__1_OFFSET UNITYSDK_OFFSET(0x935AF10)

inline static constexpr unsigned int Class_2_D9D2DA2BB37A3C3D___c__DisplayClass34_0_TypeDefinitionIndex = 55703;

class Class_2_D9D2DA2BB37A3C3D___c__DisplayClass34_0 : public ::System::Object
{
public:
	::System::Action_1<::RPG::GameCore::LittleGameEntityConfig*>* __9__1; // 0x10
	::Class_1_5F949FB82A9B0DFD* entityLoadingContextData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Void __BuildEntities_b__1(::RPG::GameCore::LittleGameEntityConfig* entityConfig)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C__DISPLAYCLASS34_0___BUILDENTITIES_B__1_OFFSET))(this, entityConfig);
	}
};
