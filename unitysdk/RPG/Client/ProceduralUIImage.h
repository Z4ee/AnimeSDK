#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProceduralShape.h"

#define RPG_CLIENT_PROCEDURALUIIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xDBC0EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ProceduralUIImage_TypeDefinitionIndex = 72632;

	class ProceduralUIImage : public ::RPG::Client::UIProceduralShape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROCEDURALUIIMAGE__CTOR_OFFSET))(this);
		}
	};
}
