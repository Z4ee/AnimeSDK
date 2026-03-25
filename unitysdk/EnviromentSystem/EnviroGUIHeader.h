#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROGUIHEADER_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xFB923C0)
#define ENVIROMENTSYSTEM_ENVIROGUIHEADER_METHOD_2_42B2BB88AE2FB02E_OFFSET UNITYSDK_OFFSET(0xFB92340)
#define ENVIROMENTSYSTEM_ENVIROGUIHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB922D0)
#define ENVIROMENTSYSTEM_ENVIROGUIHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0xFB91E70)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGUIHeader_TypeDefinitionIndex = 40308;

	class EnviroGUIHeader : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGUIHeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGUIHeader*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_42B2BB88AE2FB02E(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER_METHOD_2_42B2BB88AE2FB02E_OFFSET))(this, a1);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIHEADER_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}
	};
}
