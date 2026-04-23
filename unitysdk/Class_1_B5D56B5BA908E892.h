#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class SceneShaderPropertyTransition; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5D56B5BA908E892_METHOD_1_00E04EDDAFD16C79_OFFSET UNITYSDK_OFFSET(0x119593F0)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x119592C0)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_34A86E3AEAC2AF97_1_OFFSET UNITYSDK_OFFSET(0x11959830)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_34A86E3AEAC2AF97_OFFSET UNITYSDK_OFFSET(0x11959610)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x11959470)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x11959660)
#define CLASS_1_B5D56B5BA908E892_METHOD_1_B06A36F2C931D41D_OFFSET UNITYSDK_OFFSET(0x11959430)
#define CLASS_1_B5D56B5BA908E892__CTOR_OFFSET UNITYSDK_OFFSET(0x11959260)

inline static constexpr unsigned int Class_1_B5D56B5BA908E892_TypeDefinitionIndex = 63522;

class Class_1_B5D56B5BA908E892 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* Field_1_2; // 0x10
	::RPG::GameCore::EntityManager* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>* Field_1_3; // 0x20
	::RPG::GameCore::EventManager* Field_1_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::EventManager* a1, ::RPG::GameCore::EntityManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* Method_1_00E04EDDAFD16C79()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_00E04EDDAFD16C79_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>* Method_1_B06A36F2C931D41D()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_B06A36F2C931D41D_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_34A86E3AEAC2AF97(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_34A86E3AEAC2AF97_OFFSET))(this, a1);
	}

	::System::Void Method_1_34A86E3AEAC2AF97_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_34A86E3AEAC2AF97_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5D56B5BA908E892_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}
};
