#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85DAF0)
#define FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS9_0__TOSTRING_B__0_OFFSET UNITYSDK_OFFSET(0x1B85DB00)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo___c__DisplayClass9_0_TypeDefinitionIndex = 8239;

	class MultiVersionInfo___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* sb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToString_b__0(::System::String* path, ::Foundation::MultiVer type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO___C__DISPLAYCLASS9_0__TOSTRING_B__0_OFFSET))(this, path, type);
		}
	};
}
