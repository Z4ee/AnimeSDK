#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xF2FE9F0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET UNITYSDK_OFFSET(0xF2FEFF0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xF2FED60)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF2FF0E0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xF2FF070)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0xF2FE8F0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xF2FECB0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F18927F2B6DBB806_OFFSET UNITYSDK_OFFSET(0xF2FEE50)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F33D58546A03D87E_OFFSET UNITYSDK_OFFSET(0xF2FEF70)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF2FE840)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xF2FE790)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBoolProperty_TypeDefinitionIndex = 46191;

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

		::System::Void Method_2_F33D58546A03D87E(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F33D58546A03D87E_OFFSET))(this, P0);
		}

		::System::Void Method_2_438A9AA49EC7C989(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET))(this, P0);
		}

		::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}
