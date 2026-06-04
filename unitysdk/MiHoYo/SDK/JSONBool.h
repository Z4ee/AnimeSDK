#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x183488C0)
#define MIHOYO_SDK_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18348720)
#define MIHOYO_SDK_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x183488E0)
#define MIHOYO_SDK_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x183487B0)
#define MIHOYO_SDK_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18348710)
#define MIHOYO_SDK_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x18348700)
#define MIHOYO_SDK_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18348740)
#define MIHOYO_SDK_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x183487C0)
#define MIHOYO_SDK_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18348760)
#define MIHOYO_SDK_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x18348880)
#define MIHOYO_SDK_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18348800)
#define MIHOYO_SDK_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x183487D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 8081;

	class JSONBool : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL__CTOR_1_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
