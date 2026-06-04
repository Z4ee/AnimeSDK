#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCD6FC733B25F13E.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntityCompositeComparer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A48D47F6A7F862E1_METHOD_3_8A43A44EBE6E341C_OFFSET UNITYSDK_OFFSET(0xC1D9930)
#define CLASS_3_A48D47F6A7F862E1__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D9850)

inline static constexpr unsigned int Class_3_A48D47F6A7F862E1_TypeDefinitionIndex = 71962;

class Class_3_A48D47F6A7F862E1 : public ::Class_2_BCD6FC733B25F13E
{
public:
	::System::Collections::Generic::List_1<::Class_2_BCD6FC733B25F13E*>* Field_3_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + CLASS_3_A48D47F6A7F862E1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_8A43A44EBE6E341C(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_A48D47F6A7F862E1_METHOD_3_8A43A44EBE6E341C_OFFSET))(this, a1, a2);
	}
};
