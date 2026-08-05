#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ADF86247CBD519E1.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/Struct_2_5484AFE9F8343CB3.h"
#include "unitysdk/Struct_2_7239AA5D4DEA6E08.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0A48C0117A1B22E8;
class Class_1_885547C50DA072F4;
namespace MoleMole { class UIAvatarGraphics; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_2_D3A848D30F852ED2_METHOD_2_66250AE59BBB9BD4_OFFSET UNITYSDK_OFFSET(0x113F4FB0)
#define CLASS_2_D3A848D30F852ED2_METHOD_2_70D5A3BC73206FC4_OFFSET UNITYSDK_OFFSET(0x113F4490)
#define CLASS_2_D3A848D30F852ED2_METHOD_2_A20C52B34FEE8520_OFFSET UNITYSDK_OFFSET(0x113F4690)
#define CLASS_2_D3A848D30F852ED2_METHOD_2_B86A94B602895922_OFFSET UNITYSDK_OFFSET(0x113F46E0)
#define CLASS_2_D3A848D30F852ED2__CTOR_OFFSET UNITYSDK_OFFSET(0x113F4480)

inline static constexpr unsigned int Class_2_D3A848D30F852ED2_TypeDefinitionIndex = 51368;

class Class_2_D3A848D30F852ED2 : public ::Class_1_ADF86247CBD519E1
{
public:
	::Struct_2_5484AFE9F8343CB3 Field_2_0; // 0x40
	::Struct_2_7239AA5D4DEA6E08 Field_2_1; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3A848D30F852ED2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_70D5A3BC73206FC4(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::EAvatarLightChangeType a2, ::System::Single a3, ::System::String* a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2& a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_2_D3A848D30F852ED2_METHOD_2_70D5A3BC73206FC4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_A20C52B34FEE8520(::MoleMole::UIAvatarGraphics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + CLASS_2_D3A848D30F852ED2_METHOD_2_A20C52B34FEE8520_OFFSET))(this, a1);
	}

	::System::Void Method_2_B86A94B602895922(::Class_1_0A48C0117A1B22E8* a1, ::MoleMole::UIAvatarGraphics* a2, ::Class_1_885547C50DA072F4* a3, ::MoleMole::EAvatarLightChangeType a4, ::System::Single a5, ::System::String* a6, ::UnityEngine::Vector4 a7, ::UnityEngine::Quaternion& a8, ::UnityEngine::Quaternion& a9)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::MoleMole::UIAvatarGraphics*, ::Class_1_885547C50DA072F4*, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_D3A848D30F852ED2_METHOD_2_B86A94B602895922_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_66250AE59BBB9BD4(::System::Single a1, ::Class_1_0A48C0117A1B22E8* a2, ::Class_1_885547C50DA072F4* a3, ::UnityEngine::Vector2& a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Quaternion& a6, ::UnityEngine::Camera* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_0A48C0117A1B22E8*, ::Class_1_885547C50DA072F4*, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_2_D3A848D30F852ED2_METHOD_2_66250AE59BBB9BD4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
