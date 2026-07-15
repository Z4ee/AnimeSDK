#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18209960)
#define MIHOYO_SDK_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18209710)
#define MIHOYO_SDK_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18209AA0)
#define MIHOYO_SDK_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x182097D0)
#define MIHOYO_SDK_JSONNUMBER_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x182097F0)
#define MIHOYO_SDK_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x18209700)
#define MIHOYO_SDK_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0x182096F0)
#define MIHOYO_SDK_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18209730)
#define MIHOYO_SDK_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x182098E0)
#define MIHOYO_SDK_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x182097E0)
#define MIHOYO_SDK_JSONNUMBER_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x18209800)
#define MIHOYO_SDK_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18209770)
#define MIHOYO_SDK_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x18209880)
#define MIHOYO_SDK_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18209810)
#define MIHOYO_SDK_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x18205D30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 8090;

	class JSONNumber : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_SET_ASLONG_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean IsNumeric(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_ISNUMERIC_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
