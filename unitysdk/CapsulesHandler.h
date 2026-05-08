#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Capsule.h"
#include "unitysdk/Character.h"
#include "unitysdk/System/Object.h"

class MonoRenderEntity;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }

#define CAPSULESHANDLER_ADDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B35E2A0)
#define CAPSULESHANDLER_CONTAINSCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B35E3B0)
#define CAPSULESHANDLER_DISPOSEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B35ED20)
#define CAPSULESHANDLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B35E140)
#define CAPSULESHANDLER_INITIALIZEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B35EAC0)
#define CAPSULESHANDLER_REMOVECHARACTER_OFFSET UNITYSDK_OFFSET(0x1B35E8F0)
#define CAPSULESHANDLER_RESET_OFFSET UNITYSDK_OFFSET(0x1B35EA20)
#define CAPSULESHANDLER_UPDATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B35ED90)
#define CAPSULESHANDLER_UPDATECHARACTERSHADOWS_OFFSET UNITYSDK_OFFSET(0x1B35EE00)
#define CAPSULESHANDLER_UPDATELISTS_OFFSET UNITYSDK_OFFSET(0x1B35E440)
#define CAPSULESHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B35EFA0)
#define CAPSULESHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35E1C0)

inline static constexpr unsigned int CapsulesHandler_TypeDefinitionIndex = 29611;

class CapsulesHandler : public ::System::Object
{
public:
	static ::CapsulesHandler** StaticGet_instance()
	{
		return (::CapsulesHandler**)Il2CppClass::FromTypeDefinitionIndex(CapsulesHandler_TypeDefinitionIndex)->GetStaticField(0x247A0);
	}
	static ::System::Boolean* StaticGet_capsuleAOCharacterExists()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CapsulesHandler_TypeDefinitionIndex)->GetStaticField(0x72A0);
	}
	::System::Collections::Generic::List_1<::Character>* Characters; // 0x10
	::System::Collections::Generic::List_1<::Capsule>* Capsules; // 0x18
	::UnityEngine::ComputeBuffer* charactersBuffer; // 0x20
	::System::Collections::Generic::List_1<::MonoRenderEntity*>* CharacterShadows; // 0x28
	::UnityEngine::ComputeBuffer* capsulesBuffer; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAPSULESHANDLER__CCTOR_OFFSET))();
	}

	static ::CapsulesHandler* get_Instance()
	{
		return ((::CapsulesHandler*(*)())((::PBYTE)hIl2Cpp + CAPSULESHANDLER_GET_INSTANCE_OFFSET))();
	}

	::System::Void AddCharacter(::MonoRenderEntity* character)
	{
		return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_ADDCHARACTER_OFFSET))(this, character);
	}

	::System::Void RemoveCharacter(::MonoRenderEntity* character)
	{
		return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_REMOVECHARACTER_OFFSET))(this, character);
	}

	::System::Boolean ContainsCharacter(::MonoRenderEntity* character)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_CONTAINSCHARACTER_OFFSET))(this, character);
	}

	::System::Void UpdateLists()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_UPDATELISTS_OFFSET))(this);
	}

	::System::Void InitializeBuffers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_INITIALIZEBUFFERS_OFFSET))(this);
	}

	::System::Void UpdateBuffers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_UPDATEBUFFERS_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_RESET_OFFSET))(this);
	}

	::System::Void UpdateCharacterShadows()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_UPDATECHARACTERSHADOWS_OFFSET))(this);
	}

	::System::Void DisposeBuffers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPSULESHANDLER_DISPOSEBUFFERS_OFFSET))(this);
	}
};
