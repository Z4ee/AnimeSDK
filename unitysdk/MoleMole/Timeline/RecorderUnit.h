#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_RECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DEBC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RecorderUnit_TypeDefinitionIndex = 32182;

	class RecorderUnit : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RECORDERUNIT__CTOR_OFFSET))(this);
		}
	};
}
