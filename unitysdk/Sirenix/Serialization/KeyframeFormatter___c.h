#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace Sirenix::Serialization { class IDataReader; }

#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C95A0)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C95E0)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F8C95F0)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1F8C9690)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x1F8C9730)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_3_OFFSET UNITYSDK_OFFSET(0x1F8C97D0)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_4_OFFSET UNITYSDK_OFFSET(0x1F8C9870)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_5_OFFSET UNITYSDK_OFFSET(0x1F8C9910)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_6_OFFSET UNITYSDK_OFFSET(0x1F8C99B0)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_7_OFFSET UNITYSDK_OFFSET(0x1F8C9A50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyframeFormatter___c_TypeDefinitionIndex = 7589;

	class KeyframeFormatter___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::KeyframeFormatter___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::KeyframeFormatter___c**)Il2CppClass::FromTypeDefinitionIndex(KeyframeFormatter___c_TypeDefinitionIndex)->GetStaticField(0x6180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__6_0(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_0_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_1(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_1_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_2(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_2_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_3(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_3_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_4(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_4_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_5(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_5_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_6(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_6_OFFSET))(this, value, reader);
		}

		::System::Void __cctor_b__6_7(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER___C___CCTOR_B__6_7_OFFSET))(this, value, reader);
		}
	};
}
