#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF97E750)
#define MOLEMOLE_CONFIG_CONFIGINTERACTINFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF97E220)
#define MOLEMOLE_CONFIG_CONFIGINTERACTINFO_METHOD_1_723D4849983651D2_OFFSET UNITYSDK_OFFSET(0xF97E7B0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTINFO_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xF97E2A0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF97EB10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractInfo_TypeDefinitionIndex = 80821;

	class ConfigInteractInfo : public ::System::Object
	{
	public:
		::System::String* InteractName; // 0x10
		::Foundation::AssetPath ConfigDataPath; // 0x18
		::System::Int32 CoopInteractMaxCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTINFO_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTINFO_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_723D4849983651D2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTINFO_METHOD_1_723D4849983651D2_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTINFO_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
