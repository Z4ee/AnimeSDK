#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xFB8BE30)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xFB8BDD0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xFB8BD60)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xFB8B780)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xFB8BAF0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0xFB8B680)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xFB8BA40)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB8BED0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F18927F2B6DBB806_OFFSET UNITYSDK_OFFSET(0xFB8BC40)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB8B5D0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8B520)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBoolProperty_TypeDefinitionIndex = 40282;

	class EnviroBoolProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Boolean m_Value; // 0x48
		::System::String* m_KeyWord; // 0x50
		::System::Boolean m_DisableWhenTransitionDifferent; // 0x58

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroBoolProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroBoolProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_8F059A365E90744C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_8F059A365E90744C_OFFSET))(this);
		}

		::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_2_F18927F2B6DBB806(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F18927F2B6DBB806_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_2_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_2_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
