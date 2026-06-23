#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_INVOKEAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1E67AE90)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int AutoResisterRendererResourceFactories_TypeDefinitionIndex = 34414;

	class AutoResisterRendererResourceFactories : public ::System::Object
	{
	public:
		static ::System::Void InvokeAutoRegister()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_AUTORESISTERRENDERERRESOURCEFACTORIES_INVOKEAUTOREGISTER_OFFSET))();
		}
	};
}
