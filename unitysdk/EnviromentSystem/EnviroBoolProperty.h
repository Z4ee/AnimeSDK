#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x152FE200)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x152FDF90)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x152FE2A0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0x152FDE70)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F18927F2B6DBB806_OFFSET UNITYSDK_OFFSET(0x152FE400)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x152FDDC0)
#define ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x152FDD10)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBoolProperty_TypeDefinitionIndex = 50020;

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

		::System::Boolean Method_2_7A9EE6E4B8F1006C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_7A9EE6E4B8F1006C_OFFSET))(this);
		}

		::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_2_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_2_F18927F2B6DBB806(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_F18927F2B6DBB806_OFFSET))(this, a1);
		}

		::System::Void Method_2_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBOOLPROPERTY_METHOD_2_10054BB010E03EDD_OFFSET))(this);
		}
	};
}
