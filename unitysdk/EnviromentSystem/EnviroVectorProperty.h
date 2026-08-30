#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15332ED0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x15332A20)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x15332F70)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_5A94CFCFB167E3E2_OFFSET UNITYSDK_OFFSET(0x15333060)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x15333340)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1531E890)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1531EA40)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x153060E0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x153328C0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x15332980)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1531EAE0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroVectorProperty_TypeDefinitionIndex = 50052;

	class EnviroVectorProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::UnityEngine::Vector4 m_Value; // 0x48
		::System::Int32 m_VectorN; // 0x58
		::System::Single m_Min; // 0x5C
		::System::Single m_Max; // 0x60

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::UnityEngine::Color a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_4(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_5(::EnviromentSystem::EnviroVectorProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroVectorProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_5_OFFSET))(this, a1);
		}

		::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_2_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_2_5A94CFCFB167E3E2(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_5A94CFCFB167E3E2_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET))(this);
		}
	};
}
