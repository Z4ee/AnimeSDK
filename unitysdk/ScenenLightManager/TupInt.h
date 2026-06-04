#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENENLIGHTMANAGER_TUPINT__CTOR_OFFSET UNITYSDK_OFFSET(0xD07DC30)

namespace ScenenLightManager
{
	inline static constexpr unsigned int TupInt_TypeDefinitionIndex = 46347;

	class TupInt : public ::System::Object
	{
	public:
		::System::Int32 sid; // 0x10
		::System::Int32 id; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUPINT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
