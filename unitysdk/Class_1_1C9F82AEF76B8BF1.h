#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_02480C4BB819085A;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_1C9F82AEF76B8BF1_METHOD_1_389942622BFEB1E1_OFFSET UNITYSDK_OFFSET(0x133E3F00)
#define CLASS_1_1C9F82AEF76B8BF1_METHOD_1_C6522033E69C47B0_OFFSET UNITYSDK_OFFSET(0x133E4080)
#define CLASS_1_1C9F82AEF76B8BF1_METHOD_1_CA1F7DC254432E8F_OFFSET UNITYSDK_OFFSET(0x133E3FB0)

inline static constexpr unsigned int Class_1_1C9F82AEF76B8BF1_TypeDefinitionIndex = 82783;

class Class_1_1C9F82AEF76B8BF1 : public ::System::Object
{
public:
	static ::Class_2_02480C4BB819085A* Method_1_389942622BFEB1E1(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_2_02480C4BB819085A*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_1C9F82AEF76B8BF1_METHOD_1_389942622BFEB1E1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CA1F7DC254432E8F(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_1C9F82AEF76B8BF1_METHOD_1_CA1F7DC254432E8F_OFFSET))(a1);
	}

	static ::Class_2_02480C4BB819085A* Method_1_C6522033E69C47B0(::MoleMole::EntityHandle a1)
	{
		return ((::Class_2_02480C4BB819085A*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_1C9F82AEF76B8BF1_METHOD_1_C6522033E69C47B0_OFFSET))(a1);
	}
};
