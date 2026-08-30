#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C06DAA71BE7D3075_METHOD_3_A0E0A79AF457C9BC_OFFSET UNITYSDK_OFFSET(0xB8F5CE0)
#define CLASS_3_C06DAA71BE7D3075__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F6110)

inline static constexpr unsigned int Class_3_C06DAA71BE7D3075_TypeDefinitionIndex = 77025;

class Class_3_C06DAA71BE7D3075 : public ::Class_2_75E63034C2ED40FA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C06DAA71BE7D3075__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_A0E0A79AF457C9BC(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C06DAA71BE7D3075_METHOD_3_A0E0A79AF457C9BC_OFFSET))(this, a1, a2, a3);
	}
};
