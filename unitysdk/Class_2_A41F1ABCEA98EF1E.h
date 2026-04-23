#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/Struct_2_06297BD58B1627CC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C2963602F383E66F;
namespace UnityEngine { class Transform; }

#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x17EFDEA0)
#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17EFD7F0)
#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_4B6AA1876D3FDD44_OFFSET UNITYSDK_OFFSET(0x17EFDB00)
#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_803936375AA88C87_OFFSET UNITYSDK_OFFSET(0x17EFD860)
#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_B64C60973842FE45_1_OFFSET UNITYSDK_OFFSET(0x17EFDDF0)
#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x17EFD740)
#define CLASS_2_A41F1ABCEA98EF1E_METHOD_2_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x17EFDDA0)
#define CLASS_2_A41F1ABCEA98EF1E__CTOR_OFFSET UNITYSDK_OFFSET(0x17EFDF10)

inline static constexpr unsigned int Class_2_A41F1ABCEA98EF1E_TypeDefinitionIndex = 38371;

class Class_2_A41F1ABCEA98EF1E : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E__CTOR_OFFSET))(this);
	}

	::Class_1_C2963602F383E66F* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_C2963602F383E66F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_803936375AA88C87(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::Struct_2_06297BD58B1627CC> a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_06297BD58B1627CC>))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_803936375AA88C87_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_4B6AA1876D3FDD44(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::Struct_2_06297BD58B1627CC> a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_06297BD58B1627CC>))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_4B6AA1876D3FDD44_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_D20F759FC2EC43FB_OFFSET))(this);
	}

	::Class_1_C2963602F383E66F* Method_2_B64C60973842FE45_1()
	{
		return ((::Class_1_C2963602F383E66F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_B64C60973842FE45_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41F1ABCEA98EF1E_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}
};
