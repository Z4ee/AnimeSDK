#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_0FDE67E8BCF7203D_OFFSET UNITYSDK_OFFSET(0xC9C24C0)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC9C2840)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_9D28E30D3F31147B_OFFSET UNITYSDK_OFFSET(0xC9C4B40)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_BEFE6ADDA38A85A9_1_OFFSET UNITYSDK_OFFSET(0xC9C4D10)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_BEFE6ADDA38A85A9_OFFSET UNITYSDK_OFFSET(0xC9C4C30)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9C4DF0)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9C4C20)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int Vector3AnimationCurve_TypeDefinitionIndex = 68736;

	class Vector3AnimationCurve : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector3AnimationCurve*>** StaticGet_presets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector3AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Vector3AnimationCurve_TypeDefinitionIndex)->GetStaticField(0x4EF80);
		}
		::UnityEngine::AnimationCurve* x; // 0x10
		::UnityEngine::AnimationCurve* y; // 0x18
		::UnityEngine::AnimationCurve* z; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 Method_1_0FDE67E8BCF7203D(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_0FDE67E8BCF7203D_OFFSET))(this, a1);
		}

		static ::RPG::Client::TAUtils::Vector3AnimationCurve* Method_1_9D28E30D3F31147B(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::Client::TAUtils::Vector3AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_9D28E30D3F31147B_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TAUtils::Vector3AnimationCurve* Method_1_BEFE6ADDA38A85A9(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector3AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_BEFE6ADDA38A85A9_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TAUtils::Vector3AnimationCurve* Method_1_BEFE6ADDA38A85A9_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector3AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_BEFE6ADDA38A85A9_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_1_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_METHOD_1_1808E1CF7A125519_OFFSET))(this);
		}
	};
}
