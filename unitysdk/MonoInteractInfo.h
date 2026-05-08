#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_7B8672D4F89E3D96;
class Class_1_8F791B6D1CAFC248;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONOINTERACTINFO_GET_INTERACTSINFO_OFFSET UNITYSDK_OFFSET(0xE491CE0)
#define MONOINTERACTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE491C50)
#define MONOINTERACTINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xE491CD0)
#define MONOINTERACTINFO_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xE491CB0)
#define MONOINTERACTINFO_SETINTERACTCONFIG_OFFSET UNITYSDK_OFFSET(0xE491CF0)
#define MONOINTERACTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE4921D0)

inline static constexpr unsigned int MonoInteractInfo_TypeDefinitionIndex = 66119;

class MonoInteractInfo : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* _scale; // 0x18
	::Class_1_7B8672D4F89E3D96* _interactConfig; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8F791B6D1CAFC248*>* _interactsInfo; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO__CTOR_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_NAME_OFFSET))(this);
	}

	::System::Int32 get_Shape()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_SHAPE_OFFSET))(this);
	}

	::System::String* get_Scale()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_SCALE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8F791B6D1CAFC248*>* get_InteractsInfo()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8F791B6D1CAFC248*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_INTERACTSINFO_OFFSET))(this);
	}

	::System::Void SetInteractConfig(::MoleMole::Battle::Entity* owner, ::Class_1_7B8672D4F89E3D96* interactConfig)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_7B8672D4F89E3D96*))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_SETINTERACTCONFIG_OFFSET))(this, owner, interactConfig);
	}
};
