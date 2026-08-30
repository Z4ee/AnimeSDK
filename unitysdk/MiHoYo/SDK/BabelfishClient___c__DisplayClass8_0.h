#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A82F80)
#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS8_0__TRANSLATE_B__0_OFFSET UNITYSDK_OFFSET(0x16A83DF0)
#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS8_0__TRANSLATE_B__1_OFFSET UNITYSDK_OFFSET(0x16A84270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BabelfishClient___c__DisplayClass8_0_TypeDefinitionIndex = 47036;

	class BabelfishClient___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::String*>* onError; // 0x10
		::System::Action_1<::MiHoYo::SDK::JSONNode*>* onSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _Translate_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS8_0__TRANSLATE_B__0_OFFSET))(this, a1);
		}

		::System::Void _Translate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS8_0__TRANSLATE_B__1_OFFSET))(this);
		}
	};
}
