#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA642DEE53091501.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_43BD383C98B4C0C5_185;
class Class_1_775EC50784EC197A;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_01323DB04D8B58E2_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xC46C610)
#define CLASS_2_01323DB04D8B58E2_METHOD_2_DFE9DCCE7144AE5B_OFFSET UNITYSDK_OFFSET(0xC46CC70)
#define CLASS_2_01323DB04D8B58E2_METHOD_2_FF47E1CD1DD3FF94_OFFSET UNITYSDK_OFFSET(0xC46C680)
#define CLASS_2_01323DB04D8B58E2__CTOR_OFFSET UNITYSDK_OFFSET(0xC46CE20)

inline static constexpr unsigned int Class_2_01323DB04D8B58E2_TypeDefinitionIndex = 71975;

class Class_2_01323DB04D8B58E2 : public ::Class_1_AA642DEE53091501
{
public:
	::Class_1_2CE61CB9B2E57F36* Field_2_0; // 0x10
	::Class_1_775EC50784EC197A* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01323DB04D8B58E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_01323DB04D8B58E2_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FF47E1CD1DD3FF94(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_185*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_185*&))((::PBYTE)hIl2Cpp + CLASS_2_01323DB04D8B58E2_METHOD_2_FF47E1CD1DD3FF94_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_DFE9DCCE7144AE5B(::Class_1_A92BC063ED2379EB* a1, ::Class_2_B66C1067C0468FBB* a2, ::RPG::GameCore::ChimeraDuelBuffConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_2_01323DB04D8B58E2_METHOD_2_DFE9DCCE7144AE5B_OFFSET))(this, a1, a2, a3);
	}
};
