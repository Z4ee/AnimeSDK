#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EASYPBD_EASYPBDHASH_HASH01_OFFSET UNITYSDK_OFFSET(0x1CAFE8D0)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDHash_TypeDefinitionIndex = 26903;

	class EasyPBDHash : public ::System::Object
	{
	public:
		static ::System::Single Hash01(::System::Int32 seed, ::System::Int32 salt)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDHASH_HASH01_OFFSET))(seed, salt);
		}
	};
}
