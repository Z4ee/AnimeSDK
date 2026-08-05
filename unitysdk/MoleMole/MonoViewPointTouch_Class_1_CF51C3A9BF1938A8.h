#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_MONOVIEWPOINTTOUCH_CLASS_1_CF51C3A9BF1938A8_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14A18870)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_CLASS_1_CF51C3A9BF1938A8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14A184E0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_CLASS_1_CF51C3A9BF1938A8__CTOR_OFFSET UNITYSDK_OFFSET(0x14A18860)

namespace MoleMole
{
	inline static constexpr unsigned int MonoViewPointTouch_Class_1_CF51C3A9BF1938A8_TypeDefinitionIndex = 90320;

	class MonoViewPointTouch_Class_1_CF51C3A9BF1938A8 : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 Field_1_6; // 0x10
		::UnityEngine::Vector2 Field_1_5; // 0x18
		::System::Int32 Field_1_1; // 0x20
		::System::Boolean Field_1_7; // 0x24
		::System::Boolean Field_1_0; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_CLASS_1_CF51C3A9BF1938A8__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_CLASS_1_CF51C3A9BF1938A8_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_CLASS_1_CF51C3A9BF1938A8_METHOD_1_128774387667156B_OFFSET))(this);
		}
	};
}
