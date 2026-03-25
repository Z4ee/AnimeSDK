#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_181A7F9409C60DBC;
namespace System { class Action; }

#define CLASS_1_F00A2AD88C7AE323_METHOD_1_929FA7D48F492FAD_OFFSET UNITYSDK_OFFSET(0xA435E50)
#define CLASS_1_F00A2AD88C7AE323_METHOD_1_9DE95244218C4A67_OFFSET UNITYSDK_OFFSET(0xA436050)
#define CLASS_1_F00A2AD88C7AE323_METHOD_1_FA7AA6C79D4E23B0_OFFSET UNITYSDK_OFFSET(0xA436230)
#define CLASS_1_F00A2AD88C7AE323__CTOR_OFFSET UNITYSDK_OFFSET(0xA436500)

inline static constexpr unsigned int Class_1_F00A2AD88C7AE323_TypeDefinitionIndex = 63271;

class Class_1_F00A2AD88C7AE323 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00A2AD88C7AE323__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_929FA7D48F492FAD(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F00A2AD88C7AE323_METHOD_1_929FA7D48F492FAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9DE95244218C4A67(::Class_2_181A7F9409C60DBC* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F00A2AD88C7AE323_METHOD_1_9DE95244218C4A67_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA7AA6C79D4E23B0(::Class_2_181A7F9409C60DBC* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::Vector3, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F00A2AD88C7AE323_METHOD_1_FA7AA6C79D4E23B0_OFFSET))(this, a1, a2, a3, a4);
	}
};
