#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
namespace System { class String; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC34AD90)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0__ONSTREAMINGINSTANCECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xC34E100)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent___c__DisplayClass24_0_TypeDefinitionIndex = 68473;

	class PartialFlipDeviceComponent___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_1_8A6989C352B0F0F0* instance; // 0x10
		::Class_1_303D5A33D1401D59* block; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnStreamingInstanceChange_b__0(::System::ValueTuple_2<::System::String*, ::System::String*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__DISPLAYCLASS24_0__ONSTREAMINGINSTANCECHANGE_B__0_OFFSET))(this, a1);
		}
	};
}
