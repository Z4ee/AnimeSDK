#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TWEENTEXTCOUNT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x12FD3170)
#define MOLEMOLE_TWEENTEXTCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x12FD3340)
#define MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_1E1DF25023616168_OFFSET UNITYSDK_OFFSET(0x12FD3500)
#define MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_8B7AE99A932B2193_OFFSET UNITYSDK_OFFSET(0x12FD33B0)
#define MOLEMOLE_TWEENTEXTCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x12FD3350)
#define MOLEMOLE_TWEENTEXTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD3670)
#define MOLEMOLE_TWEENTEXTCOUNT___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x12FD3690)

namespace MoleMole
{
	inline static constexpr unsigned int TweenTextCount_TypeDefinitionIndex = 77963;

	class TweenTextCount : public ::MoleMole::Tween_1<::System::Int32>
	{
	public:
		::UnityEngine::UI::Text* Field_7_0; // 0x88
		::System::String* mes; // 0x90
		::System::Int32 Field_7_2; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_GET_TEXT_OFFSET))(this);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_1E1DF25023616168(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_1E1DF25023616168_OFFSET))(this, a1, a2);
		}

		::System::Void __base_set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_8B7AE99A932B2193(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENTEXTCOUNT_METHOD_7_8B7AE99A932B2193_OFFSET))(this, a1);
		}
	};
}
