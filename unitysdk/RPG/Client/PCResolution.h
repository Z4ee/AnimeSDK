#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PCRESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CF890)

namespace RPG::Client
{
	inline static constexpr unsigned int PCResolution_TypeDefinitionIndex = 64916;

	class PCResolution : public ::System::Object
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14
		::System::Boolean isFullScreen; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PCRESOLUTION__CTOR_OFFSET))(this);
		}
	};
}
