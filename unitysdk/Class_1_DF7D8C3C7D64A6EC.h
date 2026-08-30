#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_305;
class Class_1_004034A1FAAF468A;
class Class_1_180D5F47839854B4;
class Class_1_6B41D5D37BA0605F;
class Class_1_72FF3C03F0F06A80;
class Class_1_AFC3C7A272BDF32C;
namespace RPG::Client { class AdventureMapTestInitParams; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class FirstViewCamera; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_DF7D8C3C7D64A6EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B0CBE0)
#define CLASS_1_DF7D8C3C7D64A6EC_ENTER_OFFSET UNITYSDK_OFFSET(0x15B0C6F0)
#define CLASS_1_DF7D8C3C7D64A6EC_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x15B0CDE0)
#define CLASS_1_DF7D8C3C7D64A6EC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15B0CA40)
#define CLASS_1_DF7D8C3C7D64A6EC_LEAVE_OFFSET UNITYSDK_OFFSET(0x15B0CB90)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x15B0D060)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x15B0C960)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x15B0CEF0)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_5F763FD57D51C81C_OFFSET UNITYSDK_OFFSET(0x15B0CE30)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x15B0CFC0)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15B0D540)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0x15B0D3C0)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x15B0CEB0)
#define CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x15B0CE70)
#define CLASS_1_DF7D8C3C7D64A6EC_TICK_OFFSET UNITYSDK_OFFSET(0x15B0C9E0)
#define CLASS_1_DF7D8C3C7D64A6EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0D730)
#define CLASS_1_DF7D8C3C7D64A6EC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0C6C0)

inline static constexpr unsigned int Class_1_DF7D8C3C7D64A6EC_TypeDefinitionIndex = 61050;

class Class_1_DF7D8C3C7D64A6EC : public ::System::Object
{
public:
	static ::System::String** StaticGet_CPMIACJKGHC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF7D8C3C7D64A6EC_TypeDefinitionIndex)->GetStaticField(0x626C0);
	}
	::RPG::Client::AdventureMapTestInitParams* JEMMHNHIJDA; // 0x10
	::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x18
	::Class_1_180D5F47839854B4* NIJOOBIAPGP; // 0x20
	::Class_1_72FF3C03F0F06A80* DKIIGEKCPFO; // 0x28
	::UnityEngine::Camera* IEMGKEFBPCG; // 0x30
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x38
	::Class_1_AFC3C7A272BDF32C* FNGCKDKAJMP; // 0x40
	::RPG::Client::FirstViewCamera* OPPFOJMDEJD; // 0x48
	::Class_1_004034A1FAAF468A* OHHPONLPIHE; // 0x50
	::System::Boolean JKBHAEBFPLO; // 0x58

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

	::Class_1_AFC3C7A272BDF32C* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_AFC3C7A272BDF32C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_72FF3C03F0F06A80* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_72FF3C03F0F06A80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_E092EFE670864887_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7D8C3C7D64A6EC_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
