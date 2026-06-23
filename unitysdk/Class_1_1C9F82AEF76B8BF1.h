#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_C84F2E6507127FC1;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_1C9F82AEF76B8BF1_METHOD_1_389942622BFEB1E1_OFFSET UNITYSDK_OFFSET(0x18080CE0)
#define CLASS_1_1C9F82AEF76B8BF1_METHOD_1_80D10F12C5B6FAD6_OFFSET UNITYSDK_OFFSET(0x18080F00)
#define CLASS_1_1C9F82AEF76B8BF1_METHOD_1_C6522033E69C47B0_OFFSET UNITYSDK_OFFSET(0x18080D90)

inline static constexpr unsigned int Class_1_1C9F82AEF76B8BF1_TypeDefinitionIndex = 44558;

class Class_1_1C9F82AEF76B8BF1 : public ::System::Object
{
public:
	static ::Class_2_C84F2E6507127FC1* Method_1_389942622BFEB1E1(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_2_C84F2E6507127FC1*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_1C9F82AEF76B8BF1_METHOD_1_389942622BFEB1E1_OFFSET))(a1);
	}

	static ::Class_2_C84F2E6507127FC1* Method_1_C6522033E69C47B0(::MoleMole::EntityHandle a1)
	{
		return ((::Class_2_C84F2E6507127FC1*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_1C9F82AEF76B8BF1_METHOD_1_C6522033E69C47B0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_80D10F12C5B6FAD6(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_1C9F82AEF76B8BF1_METHOD_1_80D10F12C5B6FAD6_OFFSET))(a1);
	}
};
