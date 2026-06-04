#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_775EC50784EC197A;
class Class_1_A92BC063ED2379EB;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_39E3D1796E538BE0_METHOD_3_03C70F3B039EAE63_OFFSET UNITYSDK_OFFSET(0xAD27A60)
#define CLASS_3_39E3D1796E538BE0_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xAD272B0)
#define CLASS_3_39E3D1796E538BE0_METHOD_3_75FD638E8D17DCA6_OFFSET UNITYSDK_OFFSET(0xAD27320)
#define CLASS_3_39E3D1796E538BE0_METHOD_3_9276CA9E1909CA0C_OFFSET UNITYSDK_OFFSET(0xAD27610)
#define CLASS_3_39E3D1796E538BE0__CTOR_OFFSET UNITYSDK_OFFSET(0xAD27A50)

inline static constexpr unsigned int Class_3_39E3D1796E538BE0_TypeDefinitionIndex = 71974;

class Class_3_39E3D1796E538BE0 : public ::Class_2_6B72CB78996603D1
{
public:
	::Class_1_775EC50784EC197A* Field_3_0; // 0x10
	::Class_1_FB3E7B71A45FEB7C* Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_75FD638E8D17DCA6(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_METHOD_3_75FD638E8D17DCA6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_9276CA9E1909CA0C(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_METHOD_3_9276CA9E1909CA0C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_03C70F3B039EAE63(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_39E3D1796E538BE0_METHOD_3_03C70F3B039EAE63_OFFSET))(this, a1, a2, a3);
	}
};
