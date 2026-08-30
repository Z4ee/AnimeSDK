#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A61A440)
#define MIHOYO_SDK_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A61A270)
#define MIHOYO_SDK_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A61A580)
#define MIHOYO_SDK_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1A61A260)
#define MIHOYO_SDK_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A61A250)
#define MIHOYO_SDK_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A61A290)
#define MIHOYO_SDK_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A61A2A0)
#define MIHOYO_SDK_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1A61A2E0)
#define MIHOYO_SDK_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A61A2B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 8094;

	class JSONString : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING__CTOR_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_GET_ISSTRING_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
