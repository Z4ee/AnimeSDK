#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"

class Class_2_15E317187C4E8254;
class Class_2_C8461ACA8308A704_1;
class Class_3_626F93E2306641CC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CADE1E13EE177768_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BD67E0)
#define CLASS_2_CADE1E13EE177768_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x11BD6310)
#define CLASS_2_CADE1E13EE177768_GET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x11BD63A0)
#define CLASS_2_CADE1E13EE177768_METHOD_2_07BC9364424C5A6B_OFFSET UNITYSDK_OFFSET(0x11BD63C0)
#define CLASS_2_CADE1E13EE177768_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x11BD6320)
#define CLASS_2_CADE1E13EE177768_METHOD_2_42536886DEA0945F_OFFSET UNITYSDK_OFFSET(0x11BD6890)
#define CLASS_2_CADE1E13EE177768_METHOD_2_6D5F59BCE8B4A09A_OFFSET UNITYSDK_OFFSET(0x11BD66E0)
#define CLASS_2_CADE1E13EE177768_METHOD_2_6D7AB0182BF9DEE1_OFFSET UNITYSDK_OFFSET(0x11BD6AB0)
#define CLASS_2_CADE1E13EE177768_METHOD_2_87153E36C97827E0_OFFSET UNITYSDK_OFFSET(0x11BD6E00)
#define CLASS_2_CADE1E13EE177768_METHOD_2_DCC4D428269185A7_OFFSET UNITYSDK_OFFSET(0x11BD6500)
#define CLASS_2_CADE1E13EE177768_SET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x11BD63B0)
#define CLASS_2_CADE1E13EE177768__CTOR_OFFSET UNITYSDK_OFFSET(0x11BD6630)
#define CLASS_2_CADE1E13EE177768___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BD7090)

inline static constexpr unsigned int Class_2_CADE1E13EE177768_TypeDefinitionIndex = 71508;

class Class_2_CADE1E13EE177768 : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_15E317187C4E8254*>
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_2_0()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CADE1E13EE177768_TypeDefinitionIndex)->GetStaticField(0x2F380);
	}
	::UnityEngine::Transform* _ViewRoot_k__BackingField; // 0x30
	::Class_3_626F93E2306641CC* _Services_k__BackingField; // 0x38

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_626F93E2306641CC* get_Services()
	{
		return ((::Class_3_626F93E2306641CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_GET_SERVICES_OFFSET))(this);
	}

	::Class_2_C8461ACA8308A704_1* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_C8461ACA8308A704_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}

	::UnityEngine::Transform* get_ViewRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_GET_VIEWROOT_OFFSET))(this);
	}

	::System::Void set_ViewRoot(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_SET_VIEWROOT_OFFSET))(this, value);
	}

	static ::Class_2_CADE1E13EE177768* Method_2_07BC9364424C5A6B(::Class_3_626F93E2306641CC* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_2_CADE1E13EE177768*(*)(::Class_3_626F93E2306641CC*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_07BC9364424C5A6B_OFFSET))(a1, a2);
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

	::UnityEngine::GameObject* Method_2_42536886DEA0945F(::RPG::GameCore::LittleGameEntityConfig* a1, ::Class_2_15E317187C4E8254* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_42536886DEA0945F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* Method_2_6D7AB0182BF9DEE1(::RPG::GameCore::CakeRaceCellConfig* a1, ::Class_2_15E317187C4E8254* a2)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellConfig*, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_6D7AB0182BF9DEE1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_87153E36C97827E0()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768_METHOD_2_87153E36C97827E0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CADE1E13EE177768___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
