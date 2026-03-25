#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x7D680)
#define RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_1FDE3BA9363A99B1_OFFSET UNITYSDK_OFFSET(0x7D7E0)
#define RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_497ABE3D3E0AFA2F_OFFSET UNITYSDK_OFFSET(0x7D6A0)
#define RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_AEF8EF4742A53CD8_OFFSET UNITYSDK_OFFSET(0x7D860)
#define RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7D790)
#define RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x7D690)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoEyeCtrl_Struct_2_6E184C49E97E83A7_TypeDefinitionIndex = 58270;

	struct alignas(8) EmoEyeCtrl_Struct_2_6E184C49E97E83A7
	{
		::System::Single Field_2_0; // 0x10
		::System::Single Field_2_1; // 0x14
		::UnityEngine::AnimationCurve* Field_2_2; // 0x18
		::UnityEngine::Vector3 Field_2_3; // 0x20
		::UnityEngine::Vector3 Field_2_4; // 0x2C
		::System::Boolean _Initialized_k__BackingField; // 0x38

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_GET_INITIALIZED_OFFSET))(this);
		}

		::System::Void set_Initialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_SET_INITIALIZED_OFFSET))(this, value);
		}

		::System::Void Method_2_497ABE3D3E0AFA2F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_497ABE3D3E0AFA2F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Single Method_2_1FDE3BA9363A99B1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_1FDE3BA9363A99B1_OFFSET))(this);
		}

		::System::Void Method_2_AEF8EF4742A53CD8(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STRUCT_2_6E184C49E97E83A7_METHOD_2_AEF8EF4742A53CD8_OFFSET))(this, a1, a2, a3);
		}
	};
}
