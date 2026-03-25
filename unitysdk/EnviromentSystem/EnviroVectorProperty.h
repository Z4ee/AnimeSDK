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

#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xFBB7600)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xFBB75B0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xFBB7550)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xFBB74E0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xFBB6AF0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xFBB70A0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_5A94CFCFB167E3E2_OFFSET UNITYSDK_OFFSET(0xFBB7190)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xFBB6FF0)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFBB7660)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xFBB7470)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFBA4A40)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0xFBA4B30)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_3_OFFSET UNITYSDK_OFFSET(0xFB92220)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_4_OFFSET UNITYSDK_OFFSET(0xFBB6990)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_5_OFFSET UNITYSDK_OFFSET(0xFBB6A50)
#define ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFBA4BD0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroVectorProperty_TypeDefinitionIndex = 40314;

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

		::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_2_5A94CFCFB167E3E2(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_5A94CFCFB167E3E2_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_2_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_2_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROVECTORPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
