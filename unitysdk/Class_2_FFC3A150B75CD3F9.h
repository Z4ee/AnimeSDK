#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionFieldTransportLastCat; }

#define CLASS_2_FFC3A150B75CD3F9_METHOD_2_0B456E977BA53B14_OFFSET UNITYSDK_OFFSET(0x16603C10)
#define CLASS_2_FFC3A150B75CD3F9__CTOR_OFFSET UNITYSDK_OFFSET(0x16603C00)

inline static constexpr unsigned int Class_2_FFC3A150B75CD3F9_TypeDefinitionIndex = 29038;

class Class_2_FFC3A150B75CD3F9 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionFieldTransportLastCat* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionFieldTransportLastCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*))((::PBYTE)hIl2Cpp + CLASS_2_FFC3A150B75CD3F9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B456E977BA53B14(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FFC3A150B75CD3F9_METHOD_2_0B456E977BA53B14_OFFSET))(this, a1, a2, a3);
	}
};
