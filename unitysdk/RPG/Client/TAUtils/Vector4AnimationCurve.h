#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_0C019665D0CC67CB_OFFSET UNITYSDK_OFFSET(0xA53A4C0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_1DE6310FB0FDE57C_OFFSET UNITYSDK_OFFSET(0xA53A5A0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_9037F1E5607EA334_OFFSET UNITYSDK_OFFSET(0xA53A390)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_97D3CF39CEBC3FD8_OFFSET UNITYSDK_OFFSET(0xA53A850)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA537BC0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_AD3AC8692C6030B9_OFFSET UNITYSDK_OFFSET(0xA5378D0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_D27E6346B87373D4_1_OFFSET UNITYSDK_OFFSET(0xA53AA60)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_D27E6346B87373D4_OFFSET UNITYSDK_OFFSET(0xA53A960)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_E963C7803068697A_OFFSET UNITYSDK_OFFSET(0xA53A780)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xA53A6E0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA53AB60)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA53A950)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int Vector4AnimationCurve_TypeDefinitionIndex = 60361;

	class Vector4AnimationCurve : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector4AnimationCurve*>** StaticGet_presets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector4AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Vector4AnimationCurve_TypeDefinitionIndex)->GetStaticField(0x2A770);
		}
		::UnityEngine::AnimationCurve* x; // 0x10
		::UnityEngine::AnimationCurve* y; // 0x18
		::UnityEngine::AnimationCurve* z; // 0x20
		::UnityEngine::AnimationCurve* w; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector4 Method_1_AD3AC8692C6030B9(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_AD3AC8692C6030B9_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_9037F1E5607EA334(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_9037F1E5607EA334_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C019665D0CC67CB(::System::Single a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_0C019665D0CC67CB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1DE6310FB0FDE57C(::System::Int32 a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_1DE6310FB0FDE57C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
		}

		::System::Void Method_1_E963C7803068697A(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_E963C7803068697A_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::TAUtils::Vector4AnimationCurve* Method_1_97D3CF39CEBC3FD8(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::Client::TAUtils::Vector4AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_97D3CF39CEBC3FD8_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TAUtils::Vector4AnimationCurve* Method_1_D27E6346B87373D4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector4AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_D27E6346B87373D4_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TAUtils::Vector4AnimationCurve* Method_1_D27E6346B87373D4_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector4AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_D27E6346B87373D4_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
