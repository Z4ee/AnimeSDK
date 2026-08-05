#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ADF86247CBD519E1.h"
#include "unitysdk/Struct_2_146B801758087363.h"
#include "unitysdk/Struct_2_5484AFE9F8343CB3.h"
#include "unitysdk/Struct_2_7239AA5D4DEA6E08.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0A48C0117A1B22E8;
class Class_1_885547C50DA072F4;
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CE1D38169180A5FA_METHOD_2_325E269D0B0F782D_OFFSET UNITYSDK_OFFSET(0x18E9AB40)
#define CLASS_2_CE1D38169180A5FA_METHOD_2_7E8AA854EF0CC485_OFFSET UNITYSDK_OFFSET(0x18E9ABF0)
#define CLASS_2_CE1D38169180A5FA_METHOD_2_D1320314F08910FE_OFFSET UNITYSDK_OFFSET(0x18E9BDE0)
#define CLASS_2_CE1D38169180A5FA_METHOD_2_E586E6D17D79E55D_OFFSET UNITYSDK_OFFSET(0x18E9B550)
#define CLASS_2_CE1D38169180A5FA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9AB30)

inline static constexpr unsigned int Class_2_CE1D38169180A5FA_TypeDefinitionIndex = 57968;

class Class_2_CE1D38169180A5FA : public ::Class_1_ADF86247CBD519E1
{
public:
	::Struct_2_146B801758087363 Field_2_7; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x78
	::Struct_2_7239AA5D4DEA6E08 Field_2_2; // 0x80
	::Struct_2_5484AFE9F8343CB3 Field_2_1; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1D38169180A5FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_325E269D0B0F782D(::MoleMole::UIAvatarGraphics* a1, ::UnityEngine::Light* a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::UnityEngine::Light*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_2_CE1D38169180A5FA_METHOD_2_325E269D0B0F782D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7E8AA854EF0CC485(::System::Single a1, ::Class_1_0A48C0117A1B22E8* a2, ::Class_1_885547C50DA072F4* a3, ::UnityEngine::Vector2& a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Quaternion& a6, ::UnityEngine::Camera* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_0A48C0117A1B22E8*, ::Class_1_885547C50DA072F4*, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_2_CE1D38169180A5FA_METHOD_2_7E8AA854EF0CC485_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_E586E6D17D79E55D(::Class_1_0A48C0117A1B22E8* a1, ::MoleMole::UIAvatarGraphics* a2, ::Class_1_885547C50DA072F4* a3, ::MoleMole::UIAvatarLightSetting* a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Quaternion& a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::MoleMole::UIAvatarGraphics*, ::Class_1_885547C50DA072F4*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_CE1D38169180A5FA_METHOD_2_E586E6D17D79E55D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_D1320314F08910FE(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_2_CE1D38169180A5FA_METHOD_2_D1320314F08910FE_OFFSET))(this, a1, a2, a3);
	}
};
