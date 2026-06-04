#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CA6D1D8E4284E6D1_METHOD_3_59951CE221D377EA_OFFSET UNITYSDK_OFFSET(0x139073D0)
#define CLASS_3_CA6D1D8E4284E6D1__CTOR_OFFSET UNITYSDK_OFFSET(0x139079B0)

inline static constexpr unsigned int Class_3_CA6D1D8E4284E6D1_TypeDefinitionIndex = 71995;

class Class_3_CA6D1D8E4284E6D1 : public ::Class_2_6B72CB78996603D1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA6D1D8E4284E6D1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_59951CE221D377EA(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_CA6D1D8E4284E6D1_METHOD_3_59951CE221D377EA_OFFSET))(this, a1, a2, a3);
	}
};
