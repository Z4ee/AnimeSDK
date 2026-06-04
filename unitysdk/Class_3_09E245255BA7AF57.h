#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_09E245255BA7AF57_METHOD_3_0587F2D8F7CAD817_OFFSET UNITYSDK_OFFSET(0xA92D3A0)
#define CLASS_3_09E245255BA7AF57__CTOR_OFFSET UNITYSDK_OFFSET(0xA92D530)

inline static constexpr unsigned int Class_3_09E245255BA7AF57_TypeDefinitionIndex = 71997;

class Class_3_09E245255BA7AF57 : public ::Class_2_6B72CB78996603D1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09E245255BA7AF57__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_0587F2D8F7CAD817(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_09E245255BA7AF57_METHOD_3_0587F2D8F7CAD817_OFFSET))(this, a1, a2, a3);
	}
};
