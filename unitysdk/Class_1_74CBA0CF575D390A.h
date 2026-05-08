#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_74CBA0CF575D390A_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0xFDC1D80)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_5237057794E21C7D_OFFSET UNITYSDK_OFFSET(0xFDC1E90)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_BCC281DC419BB5B6_OFFSET UNITYSDK_OFFSET(0xFDC1D90)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_C26A52FC112F9826_OFFSET UNITYSDK_OFFSET(0xFDC1E00)
#define CLASS_1_74CBA0CF575D390A_METHOD_1_D875411579E4701F_OFFSET UNITYSDK_OFFSET(0xFDC1D70)
#define CLASS_1_74CBA0CF575D390A__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC1D60)

inline static constexpr unsigned int Class_1_74CBA0CF575D390A_TypeDefinitionIndex = 72462;

class Class_1_74CBA0CF575D390A : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowChessboard* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::ConfigHollowChessboard* Method_1_D875411579E4701F()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_D875411579E4701F_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::String* Method_1_BCC281DC419BB5B6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_BCC281DC419BB5B6_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_C26A52FC112F9826(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_C26A52FC112F9826_OFFSET))(this, a1);
	}

	::System::Void Method_1_5237057794E21C7D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_74CBA0CF575D390A_METHOD_1_5237057794E21C7D_OFFSET))(this, a1, a2);
	}
};
