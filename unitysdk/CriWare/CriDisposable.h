#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIDISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1ABF0)

namespace CriWare
{
	inline static constexpr unsigned int CriDisposable_TypeDefinitionIndex = 31213;

	class CriDisposable : public ::System::Object
	{
	public:
		::System::Guid guid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLE__CTOR_OFFSET))(this);
		}
	};
}
