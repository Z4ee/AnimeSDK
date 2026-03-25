#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B_1;
class Class_2_921296CE04546AF9;
class Class_3_99BC749707F2A8AC;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class PingPongProjectileGroup; }

#define CLASS_1_0EE68920FE366BFF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1195E1C0)
#define CLASS_1_0EE68920FE366BFF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1195D980)
#define CLASS_1_0EE68920FE366BFF_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1195D920)
#define CLASS_1_0EE68920FE366BFF_METHOD_1_43956D919283A3CA_OFFSET UNITYSDK_OFFSET(0x1195EA50)
#define CLASS_1_0EE68920FE366BFF_METHOD_1_E61B5D6A85C83CB0_OFFSET UNITYSDK_OFFSET(0x1195EAC0)
#define CLASS_1_0EE68920FE366BFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1195D910)

inline static constexpr unsigned int Class_1_0EE68920FE366BFF_TypeDefinitionIndex = 62427;

class Class_1_0EE68920FE366BFF : public ::System::Object
{
public:
	::Class_3_99BC749707F2A8AC* Field_1_1; // 0x10
	::Class_1_B4357A1C72BABC6B_1* Field_1_0; // 0x18
	::Entitas::IGroup_1<::Class_2_921296CE04546AF9*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B_1* a1, ::Class_3_99BC749707F2A8AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B_1*, ::Class_3_99BC749707F2A8AC*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_EXECUTE_OFFSET))(this);
	}

	::RPG::GameCore::PingPongProjectileGroup* Method_1_43956D919283A3CA(::RPG::GameCore::PingPongSPSkillType a1)
	{
		return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_METHOD_1_43956D919283A3CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_E61B5D6A85C83CB0(::RPG::GameCore::PingPongProjectileGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileGroup*))((::PBYTE)hIl2Cpp + CLASS_1_0EE68920FE366BFF_METHOD_1_E61B5D6A85C83CB0_OFFSET))(this, a1);
	}
};
