#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B327610)
#define MIHOYO_SDK_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3272B0)
#define MIHOYO_SDK_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3278A0)
#define MIHOYO_SDK_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B327390)
#define MIHOYO_SDK_JSONNUMBER_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1B3273B0)
#define MIHOYO_SDK_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1B3272A0)
#define MIHOYO_SDK_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B327290)
#define MIHOYO_SDK_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3272D0)
#define MIHOYO_SDK_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x1B327560)
#define MIHOYO_SDK_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B3273A0)
#define MIHOYO_SDK_JSONNUMBER_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1B3273C0)
#define MIHOYO_SDK_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B327310)
#define MIHOYO_SDK_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1B327500)
#define MIHOYO_SDK_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B327440)
#define MIHOYO_SDK_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3273D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 19900;

	class JSONNumber : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER__CTOR_1_OFFSET))(this, aData);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_ISNUMBER_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_SET_ASLONG_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		static ::System::Boolean IsNumeric(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_ISNUMERIC_OFFSET))(value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
