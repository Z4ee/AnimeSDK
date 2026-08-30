#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_ENVLAYOUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x106D0AB0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvLayoutInfo_TypeDefinitionIndex = 49830;

	class EnvLayoutInfo : public ::System::Object
	{
	public:
		::System::String* category; // 0x10
		::System::String* subversion; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVLAYOUTINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
