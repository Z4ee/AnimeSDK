#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x15F1CB50)
#define MIHOYO_SDK_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F1CAA0)
#define MIHOYO_SDK_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15F1CCC0)
#define MIHOYO_SDK_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x15F1CA90)
#define MIHOYO_SDK_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0x15F1CA80)
#define MIHOYO_SDK_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15F1CAC0)
#define MIHOYO_SDK_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15F1CAD0)
#define MIHOYO_SDK_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x15F1CAE0)
#define MIHOYO_SDK_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x15F186B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 7133;

	class JSONString : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING__CTOR_OFFSET))(this, aData);
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

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
