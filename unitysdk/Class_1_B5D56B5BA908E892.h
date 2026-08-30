#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class SceneShaderPropertyTransition; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5D56B5BA908E892_METHOD_1_00E04EDDAFD16C79_OFFSET UNITYSDK_OFFSET(0xBACBB00)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xBACBDA0)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_B06A36F2C931D41D_OFFSET UNITYSDK_OFFSET(0xBACBB40)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_B69A793A1891CE2E_1_OFFSET UNITYSDK_OFFSET(0xBACBFC0)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_B69A793A1891CE2E_OFFSET UNITYSDK_OFFSET(0xBACBD50)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xBACBB80)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0xBACB9A0)
#define CLASS_1_B5D56B5BA908E892__CTOR_OFFSET UNITYSDK_OFFSET(0xBACB940)

inline static constexpr unsigned int Class_1_B5D56B5BA908E892_TypeDefinitionIndex = 68851;

class Class_1_B5D56B5BA908E892 : public ::System::Object
{
public:
	::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>* IINHNOLAPHH; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* JFCDMEMJAGA; // 0x20
	::RPG::GameCore::EntityManager* OKLBOLCBGAF; // 0x28

	::System::Void _ctor(::RPG::GameCore::EventManager* a1, ::RPG::GameCore::EntityManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* Method_1_00E04EDDAFD16C79()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_00E04EDDAFD16C79_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>* Method_1_B06A36F2C931D41D()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_B06A36F2C931D41D_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_B69A793A1891CE2E(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_B69A793A1891CE2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B69A793A1891CE2E_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_B69A793A1891CE2E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}
};
