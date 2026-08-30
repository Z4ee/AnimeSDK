#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AC9D634228E0202B_1_METHOD_3_793D051EECB64640_OFFSET UNITYSDK_OFFSET(0x163C20F0)
#define CLASS_3_AC9D634228E0202B_1_METHOD_3_FE56DBE513136158_OFFSET UNITYSDK_OFFSET(0x163C1AB0)
#define CLASS_3_AC9D634228E0202B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163C2760)

inline static constexpr unsigned int Class_3_AC9D634228E0202B_1_TypeDefinitionIndex = 77026;

class Class_3_AC9D634228E0202B_1 : public ::Class_2_75E63034C2ED40FA
{
public:
	// static const ::System::String* NOIGFGJJDLB; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC9D634228E0202B_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_FE56DBE513136158(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_AC9D634228E0202B_1_METHOD_3_FE56DBE513136158_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_793D051EECB64640(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_AC9D634228E0202B_1_METHOD_3_793D051EECB64640_OFFSET))(this, a1, a2, a3);
	}
};
