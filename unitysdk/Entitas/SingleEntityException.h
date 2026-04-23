#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

#define ENTITAS_SINGLEENTITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50330)

namespace Entitas
{
	inline static constexpr unsigned int SingleEntityException_TypeDefinitionIndex = 9846;

	class SingleEntityException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_SINGLEENTITYEXCEPTION__CTOR_OFFSET))(this, count);
		}
	};
}
