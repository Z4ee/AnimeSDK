#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ECC4E6ADAEEA66;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_00BFC1287967D239_CLEAR_OFFSET UNITYSDK_OFFSET(0x1442A690)
#define CLASS_1_00BFC1287967D239_METHOD_1_E382BDB16AE42CAA_OFFSET UNITYSDK_OFFSET(0x1442A7A0)
#define CLASS_1_00BFC1287967D239__CTOR_OFFSET UNITYSDK_OFFSET(0x1442A900)

inline static constexpr unsigned int Class_1_00BFC1287967D239_TypeDefinitionIndex = 53923;

class Class_1_00BFC1287967D239 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E8ECC4E6ADAEEA66*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BFC1287967D239__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BFC1287967D239_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E382BDB16AE42CAA(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_00BFC1287967D239_METHOD_1_E382BDB16AE42CAA_OFFSET))(this, a1, a2, a3);
	}
};
