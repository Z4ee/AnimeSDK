#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_EDITOR_CUBEMAPGENERATORUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xE463430)

namespace RPG::Editor
{
	inline static constexpr unsigned int CubemapGeneratorUtils_TypeDefinitionIndex = 52302;

	class CubemapGeneratorUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_CUBEMAPGENERATORUTILS__CTOR_OFFSET))(this);
		}
	};
}
