#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF68C50)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF68C90)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BF68CA0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1BF68D40)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions___c_TypeDefinitionIndex = 32652;

	class UnityQuaternionExtensions___c : public ::System::Object
	{
	public:
		static ::Cinemachine::Utility::UnityQuaternionExtensions___c** StaticGet___9()
		{
			return (::Cinemachine::Utility::UnityQuaternionExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(UnityQuaternionExtensions___c_TypeDefinitionIndex)->GetStaticField(0x25D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Single __cctor_b__9_0(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_0_OFFSET))(this, a, b, t);
		}

		::System::Single __cctor_b__9_1(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_1_OFFSET))(this, a, b, t);
		}
	};
}
