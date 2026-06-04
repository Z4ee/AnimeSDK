#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_A7993FD8B166AE9B;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_39E3D1796E538BE0_1_METHOD_3_03C70F3B039EAE63_OFFSET UNITYSDK_OFFSET(0x14574E50)
#define CLASS_3_39E3D1796E538BE0_1_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x14574990)
#define CLASS_3_39E3D1796E538BE0_1_METHOD_3_F15C2A86E41B06D4_OFFSET UNITYSDK_OFFSET(0x145749F0)
#define CLASS_3_39E3D1796E538BE0_1_METHOD_3_FD2AC483192E81E2_OFFSET UNITYSDK_OFFSET(0x14574DA0)
#define CLASS_3_39E3D1796E538BE0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14574E40)

inline static constexpr unsigned int Class_3_39E3D1796E538BE0_1_TypeDefinitionIndex = 72000;

class Class_3_39E3D1796E538BE0_1 : public ::Class_2_6B72CB78996603D1
{
public:
	::Class_1_A7993FD8B166AE9B* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_1_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F15C2A86E41B06D4(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_1_METHOD_3_F15C2A86E41B06D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_FD2AC483192E81E2(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_1_METHOD_3_FD2AC483192E81E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_03C70F3B039EAE63(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_1_METHOD_3_03C70F3B039EAE63_OFFSET))(this, a1, a2, a3);
	}
};
