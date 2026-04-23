#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_265;
class Class_1_004034A1FAAF468A;
class Class_1_072464205E5547B5;
class Class_1_180D5F47839854B4;
class Class_1_6B41D5D37BA0605F;
class Class_1_EAB32D6999AE04E3;
namespace RPG::Client { class AdventureMapTestInitParams; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class FirstViewCamera; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_DF7D8C3C7D64A6EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x937AE90)
#define CLASS_1_DF7D8C3C7D64A6EC_ENTER_OFFSET UNITYSDK_OFFSET(0x937AA10)
#define CLASS_1_DF7D8C3C7D64A6EC_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x937AFB0)
#define CLASS_1_DF7D8C3C7D64A6EC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x937ACF0)
#define CLASS_1_DF7D8C3C7D64A6EC_LEAVE_OFFSET UNITYSDK_OFFSET(0x937AE40)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x937B230)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x937AC10)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x937B590)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x937B0C0)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_5F763FD57D51C81C_OFFSET UNITYSDK_OFFSET(0x937B000)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x937B190)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x937B790)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x937B080)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x937B040)
#define CLASS_1_DF7D8C3C7D64A6EC_TICK_OFFSET UNITYSDK_OFFSET(0x937AC90)
#define CLASS_1_DF7D8C3C7D64A6EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x937B980)
#define CLASS_1_DF7D8C3C7D64A6EC__CTOR_OFFSET UNITYSDK_OFFSET(0x937A9E0)

inline static constexpr unsigned int Class_1_DF7D8C3C7D64A6EC_TypeDefinitionIndex = 56214;

class Class_1_DF7D8C3C7D64A6EC : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF7D8C3C7D64A6EC_TypeDefinitionIndex)->GetStaticField(0x6ADF0);
	}
	::Class_1_072464205E5547B5* Field_1_6; // 0x10
	::RPG::Client::AdventureMapTestInitParams* Field_1_4; // 0x18
	::RPG::GameCore::GameWorld* Field_1_1; // 0x20
	::Class_1_180D5F47839854B4* Field_1_2; // 0x28
	::UnityEngine::Camera* Field_1_5; // 0x30
	::Class_1_004034A1FAAF468A* Field_1_9; // 0x38
	::RPG::Client::FirstViewCamera* Field_1_8; // 0x40
	::RPG::Client::EnvironmentSystem* Field_1_0; // 0x48
	::Class_1_EAB32D6999AE04E3* Field_1_7; // 0x50
	::System::Boolean Field_1_3; // 0x58

	::System::Void _ctor(::RPG::Client::AdventureMapTestInitParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventureMapTestInitParams*))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC__CCTOR_OFFSET))();
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_LEAVE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::RPG::Client::EnvironmentSystem* Method_1_5F763FD57D51C81C()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_5F763FD57D51C81C_OFFSET))(this);
	}

	::Class_1_072464205E5547B5* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_072464205E5547B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_EAB32D6999AE04E3* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_EAB32D6999AE04E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
