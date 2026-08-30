#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2AFA6D08323477B5.h"

class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntityCompositeComparer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C579947CA941AB2F_METHOD_3_65F634C5E76CBD91_OFFSET UNITYSDK_OFFSET(0x1A0DFA30)
#define CLASS_3_C579947CA941AB2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DF950)

inline static constexpr unsigned int Class_3_C579947CA941AB2F_TypeDefinitionIndex = 76971;

class Class_3_C579947CA941AB2F : public ::Class_2_2AFA6D08323477B5
{
public:
	::System::Collections::Generic::List_1<::Class_2_2AFA6D08323477B5*>* AAMPDBBPEBD; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + CLASS_3_C579947CA941AB2F__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_65F634C5E76CBD91(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_C579947CA941AB2F_METHOD_3_65F634C5E76CBD91_OFFSET))(this, a1, a2);
	}
};
