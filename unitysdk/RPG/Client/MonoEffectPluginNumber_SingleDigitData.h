#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginNumber_RendererDigitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_SINGLEDIGITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38DE50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginNumber_SingleDigitData_TypeDefinitionIndex = 70050;

	class MonoEffectPluginNumber_SingleDigitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginNumber_RendererDigitData*>* RendererDigits; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_SINGLEDIGITDATA__CTOR_OFFSET))(this);
		}
	};
}
