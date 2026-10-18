#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF86480F2E4E6546;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DF0E90)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_METHOD_1_B58984781C172663_OFFSET UNITYSDK_OFFSET(0x15DF1090)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_METHOD_1_C576345BA9F3B38E_OFFSET UNITYSDK_OFFSET(0x15DF1110)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15DF0B70)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15DF0B20)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5__CTOR_OFFSET UNITYSDK_OFFSET(0x15DEFB70)

inline static constexpr unsigned int Class_1_CF86480F2E4E6546_Class_1_2E28923533AC81B5_TypeDefinitionIndex = 80164;

class Class_1_CF86480F2E4E6546_Class_1_2E28923533AC81B5 : public ::System::Object
{
public:
	::Class_1_CF86480F2E4E6546* ADJNOFMEIKM; // 0x10
	::System::Action_1<::RPG::GameCore::GameEntity*>* GIOPCBHBLJD; // 0x18
	::System::Action_1<::RPG::GameCore::GameEntity*>* ANPIJLKMNMB; // 0x20
	::RPG::GameCore::CharacterModelComponent* KELCJDKACJF; // 0x28
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x30
	::System::IDisposable* BOCCOCLAMAK; // 0x38

	::System::Void _ctor(::Class_1_CF86480F2E4E6546* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::CharacterModelComponent* a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF86480F2E4E6546*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterModelComponent*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B58984781C172663(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_METHOD_1_B58984781C172663_OFFSET))(this, a1);
	}

	::System::Void Method_1_C576345BA9F3B38E(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_2E28923533AC81B5_METHOD_1_C576345BA9F3B38E_OFFSET))(this, a1, a2);
	}
};
