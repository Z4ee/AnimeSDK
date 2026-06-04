#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"

#define RPG_CLIENT_TEMPLATEMONOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA13590)

namespace RPG::Client
{
	inline static constexpr unsigned int TemplateMonoBase_TypeDefinitionIndex = 66193;

	class TemplateMonoBase : public ::RPG::Client::TAMonoBase
	{
	public:
		::System::Int32 ExampleProperty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEMONOBASE__CTOR_OFFSET))(this);
		}
	};
}
