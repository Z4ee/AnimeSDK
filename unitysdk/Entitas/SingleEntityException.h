#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/EntitasException.h"

#define ENTITAS_SINGLEENTITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC8450)

namespace Entitas
{
	inline static constexpr unsigned int SingleEntityException_TypeDefinitionIndex = 9966;

	class SingleEntityException : public ::Entitas::EntitasException
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_SINGLEENTITYEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
