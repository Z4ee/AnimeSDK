#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_39EA11796E58647E_METHOD_3_03C70F3B039EAE63_OFFSET UNITYSDK_OFFSET(0xACE84B0)
#define CLASS_3_39EA11796E58647E_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xACE7A30)
#define CLASS_3_39EA11796E58647E_METHOD_3_6EBB5E5434621FC5_OFFSET UNITYSDK_OFFSET(0xACE7A80)
#define CLASS_3_39EA11796E58647E_METHOD_3_924A681277B8C797_OFFSET UNITYSDK_OFFSET(0xACE8440)
#define CLASS_3_39EA11796E58647E__CTOR_OFFSET UNITYSDK_OFFSET(0xACE84A0)

inline static constexpr unsigned int Class_3_39EA11796E58647E_TypeDefinitionIndex = 71979;

class Class_3_39EA11796E58647E : public ::Class_2_6B72CB78996603D1
{
public:
	::Class_3_D637C1E17FCBBFB0* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39EA11796E58647E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_39EA11796E58647E_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6EBB5E5434621FC5(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39EA11796E58647E_METHOD_3_6EBB5E5434621FC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_924A681277B8C797(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39EA11796E58647E_METHOD_3_924A681277B8C797_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_03C70F3B039EAE63(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39EA11796E58647E_METHOD_3_03C70F3B039EAE63_OFFSET))(this, a1, a2, a3);
	}
};
