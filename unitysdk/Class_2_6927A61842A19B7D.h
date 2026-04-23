#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/AttackType.h"

class Class_1_DF472CB3F2039D5D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6927A61842A19B7D_METHOD_2_32FE1885C27A4F51_OFFSET UNITYSDK_OFFSET(0x99A5F00)
#define CLASS_2_6927A61842A19B7D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x99A64F0)
#define CLASS_2_6927A61842A19B7D_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x99A5C90)
#define CLASS_2_6927A61842A19B7D_METHOD_2_B07715FBD7074CCC_OFFSET UNITYSDK_OFFSET(0x99A6150)
#define CLASS_2_6927A61842A19B7D__CTOR_OFFSET UNITYSDK_OFFSET(0x99A64A0)

inline static constexpr unsigned int Class_2_6927A61842A19B7D_TypeDefinitionIndex = 49542;

class Class_2_6927A61842A19B7D : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::Collections::Generic::List_1<::Class_1_DF472CB3F2039D5D*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6927A61842A19B7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6927A61842A19B7D_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_32FE1885C27A4F51(::RPG::GameCore::AttackType a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_6927A61842A19B7D_METHOD_2_32FE1885C27A4F51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B07715FBD7074CCC(::RPG::GameCore::AttackType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_6927A61842A19B7D_METHOD_2_B07715FBD7074CCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6927A61842A19B7D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
