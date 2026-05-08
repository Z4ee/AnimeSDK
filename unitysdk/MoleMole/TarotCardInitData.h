#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TAROTCARDINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6E00)

namespace MoleMole
{
	inline static constexpr unsigned int TarotCardInitData_TypeDefinitionIndex = 40855;

	class TarotCardInitData : public ::System::Object
	{
	public:
		::System::Int32 tarotCardID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TAROTCARDINITDATA__CTOR_OFFSET))(this);
		}
	};
}
