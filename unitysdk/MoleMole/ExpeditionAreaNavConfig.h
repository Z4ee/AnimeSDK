#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_EXPEDITIONAREANAVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170F7480)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionAreaNavConfig_TypeDefinitionIndex = 53462;

	class ExpeditionAreaNavConfig : public ::System::Object
	{
	public:
		::System::Int32 Left; // 0x10
		::System::Int32 Right; // 0x14
		::System::Int32 Up; // 0x18
		::System::Int32 Down; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONAREANAVCONFIG__CTOR_OFFSET))(this);
		}
	};
}
