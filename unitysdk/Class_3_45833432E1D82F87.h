#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_45833432E1D82F87_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x15F5DD50)
#define CLASS_3_45833432E1D82F87_METHOD_3_924A681277B8C797_OFFSET UNITYSDK_OFFSET(0x15F5E630)
#define CLASS_3_45833432E1D82F87_METHOD_3_BE29850B720C74B5_OFFSET UNITYSDK_OFFSET(0x15F5DDA0)
#define CLASS_3_45833432E1D82F87__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5E690)

inline static constexpr unsigned int Class_3_45833432E1D82F87_TypeDefinitionIndex = 73504;

class Class_3_45833432E1D82F87 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_3_D637C1E17FCBBFB0* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_45833432E1D82F87__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_45833432E1D82F87_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BE29850B720C74B5(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_45833432E1D82F87_METHOD_3_BE29850B720C74B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_924A681277B8C797(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_45833432E1D82F87_METHOD_3_924A681277B8C797_OFFSET))(this, a1, a2, a3);
	}
};
