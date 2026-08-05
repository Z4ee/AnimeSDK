#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Method_CameraLogCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }

#define CLASS_2_868DB18818542281___C_METHOD_1_C181CC385FA98FC7_OFFSET UNITYSDK_OFFSET(0x18E8A990)
#define CLASS_2_868DB18818542281___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E8A940)
#define CLASS_2_868DB18818542281___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8A980)

inline static constexpr unsigned int Class_2_868DB18818542281___c_TypeDefinitionIndex = 71028;

class Class_2_868DB18818542281___c : public ::System::Object
{
public:
	static ::System::Action_5<::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>** StaticGet___9__26_0()
	{
		return (::System::Action_5<::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_868DB18818542281___c_TypeDefinitionIndex)->GetStaticField(0x41B00);
	}
	static ::Class_2_868DB18818542281___c** StaticGet___9()
	{
		return (::Class_2_868DB18818542281___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_868DB18818542281___c_TypeDefinitionIndex)->GetStaticField(0x41B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C181CC385FA98FC7(::PipelineCamera::Method_CameraLogCategory a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Color a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281___C_METHOD_1_C181CC385FA98FC7_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
