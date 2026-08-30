#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"

class Class_2_46FD925988407D1E;
class Class_2_C8461ACA8308A704_1;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CADE1E13EE177768_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1613F550)
#define CLASS_2_CADE1E13EE177768_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1613F080)
#define CLASS_2_CADE1E13EE177768_GET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x1613F110)
#define CLASS_2_CADE1E13EE177768_METHOD_2_07BC9364424C5A6B_OFFSET UNITYSDK_OFFSET(0x1613F130)
#define CLASS_2_CADE1E13EE177768_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x1613F090)
#define CLASS_2_CADE1E13EE177768_METHOD_2_42536886DEA0945F_OFFSET UNITYSDK_OFFSET(0x1613F600)
#define CLASS_2_CADE1E13EE177768_METHOD_2_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x1613F450)
#define CLASS_2_CADE1E13EE177768_METHOD_2_6D7AB0182BF9DEE1_OFFSET UNITYSDK_OFFSET(0x1613F820)
#define CLASS_2_CADE1E13EE177768_METHOD_2_B5F5470A24B3BFCA_OFFSET UNITYSDK_OFFSET(0x1613FB70)
#define CLASS_2_CADE1E13EE177768_METHOD_2_DCC4D428269185A7_OFFSET UNITYSDK_OFFSET(0x1613F270)
#define CLASS_2_CADE1E13EE177768_SET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x1613F120)
#define CLASS_2_CADE1E13EE177768__CTOR_OFFSET UNITYSDK_OFFSET(0x1613F3A0)

inline static constexpr unsigned int Class_2_CADE1E13EE177768_TypeDefinitionIndex = 77540;

class Class_2_CADE1E13EE177768 : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_46FD925988407D1E*>
{
public:
	static ::UnityEngine::Transform** StaticGet_OFMGGMEFGEH()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CADE1E13EE177768_TypeDefinitionIndex)->GetStaticField(0x38DB0);
	}
	::UnityEngine::Transform* _ViewRoot_k__BackingField; // 0x30
	::Class_3_FA020C2C23A72B3F* _Services_k__BackingField; // 0x38

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_FA020C2C23A72B3F* get_Services()
	{
		return ((::Class_3_FA020C2C23A72B3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_GET_SERVICES_OFFSET))(this);
	}

	::Class_2_C8461ACA8308A704_1* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_C8461ACA8308A704_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}

	::UnityEngine::Transform* get_ViewRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_GET_VIEWROOT_OFFSET))(this);
	}

	::System::Void set_ViewRoot(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_SET_VIEWROOT_OFFSET))(this, a1);
	}

	static ::Class_2_CADE1E13EE177768* Method_2_07BC9364424C5A6B(::Class_3_FA020C2C23A72B3F* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_2_CADE1E13EE177768*(*)(::Class_3_FA020C2C23A72B3F*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_07BC9364424C5A6B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_2_DCC4D428269185A7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Transform*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_DCC4D428269185A7_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_2_6D5F59BCE8B4A09A()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_6D5F59BCE8B4A09A_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_42536886DEA0945F(::RPG::GameCore::LittleGameEntityConfig* a1, ::Class_2_46FD925988407D1E* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_46FD925988407D1E*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_42536886DEA0945F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* Method_2_6D7AB0182BF9DEE1(::RPG::GameCore::CakeRaceCellConfig* a1, ::Class_2_46FD925988407D1E* a2)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellConfig*, ::Class_2_46FD925988407D1E*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_6D7AB0182BF9DEE1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_B5F5470A24B3BFCA()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_B5F5470A24B3BFCA_OFFSET))(this);
	}
};
