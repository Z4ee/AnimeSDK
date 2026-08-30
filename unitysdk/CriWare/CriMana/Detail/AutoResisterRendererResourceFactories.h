#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_INVOKEAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x164F40C0)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_TypeDefinitionIndex = 38932;

	class AutoResisterRendererResourceFactories : public ::System::Object
	{
	public:
		static ::System::Void InvokeAutoRegister()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_INVOKEAUTOREGISTER_OFFSET))();
		}
	};
}
