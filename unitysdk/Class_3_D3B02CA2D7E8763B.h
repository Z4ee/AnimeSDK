#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D3B02CA2D7E8763B_METHOD_3_CB983F5ABCD21A2E_OFFSET UNITYSDK_OFFSET(0x1753BA50)
#define CLASS_3_D3B02CA2D7E8763B__CTOR_OFFSET UNITYSDK_OFFSET(0x1753C180)

inline static constexpr unsigned int Class_3_D3B02CA2D7E8763B_TypeDefinitionIndex = 73520;

class Class_3_D3B02CA2D7E8763B : public ::Class_2_75E63034C2ED40FA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3B02CA2D7E8763B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_CB983F5ABCD21A2E(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_D3B02CA2D7E8763B_METHOD_3_CB983F5ABCD21A2E_OFFSET))(this, a1, a2, a3);
	}
};
