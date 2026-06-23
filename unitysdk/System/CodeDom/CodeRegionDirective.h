#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeDirective.h"
#include "unitysdk/System/CodeDom/CodeRegionMode.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_GET_REGIONMODE_OFFSET UNITYSDK_OFFSET(0x1B3E7800)
#define SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_GET_REGIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E7880)
#define SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_SET_REGIONMODE_OFFSET UNITYSDK_OFFSET(0x1B3E7840)
#define SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_SET_REGIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E78C0)
#define SYSTEM_CODEDOM_CODEREGIONDIRECTIVE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3E77C0)
#define SYSTEM_CODEDOM_CODEREGIONDIRECTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E7780)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeRegionDirective_TypeDefinitionIndex = 4272;

	class CodeRegionDirective : public ::System::CodeDom::CodeDirective
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREGIONDIRECTIVE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeRegionMode regionMode, ::System::String* regionText)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeRegionMode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREGIONDIRECTIVE__CTOR_1_OFFSET))(this, regionMode, regionText);
		}

		::System::CodeDom::CodeRegionMode get_RegionMode()
		{
			return ((::System::CodeDom::CodeRegionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_GET_REGIONMODE_OFFSET))(this);
		}

		::System::Void set_RegionMode(::System::CodeDom::CodeRegionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeRegionMode))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_SET_REGIONMODE_OFFSET))(this, value);
		}

		::System::String* get_RegionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_GET_REGIONTEXT_OFFSET))(this);
		}

		::System::Void set_RegionText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEREGIONDIRECTIVE_SET_REGIONTEXT_OFFSET))(this, value);
		}
	};
}
