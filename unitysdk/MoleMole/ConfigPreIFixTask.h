#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGPREIFIXTASK_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x161AEBA0)
#define MOLEMOLE_CONFIGPREIFIXTASK_METHOD_1_D331A55A8A344B8B_OFFSET UNITYSDK_OFFSET(0x161AEB00)
#define MOLEMOLE_CONFIGPREIFIXTASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x161AEA00)
#define MOLEMOLE_CONFIGPREIFIXTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x161AEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPreIFixTask_TypeDefinitionIndex = 54729;

	class ConfigPreIFixTask : public ::System::Object
	{
	public:
		static ::MoleMole::ConfigPreIFixTask** StaticGet__config()
		{
			return (::MoleMole::ConfigPreIFixTask**)Il2CppClass::FromTypeDefinitionIndex(ConfigPreIFixTask_TypeDefinitionIndex)->GetStaticField(0x374E0);
		}
		::System::Int32 urlRequestCount; // 0x10
		::System::Single urlRetryDelay; // 0x14
		::System::Single urlConnectTimeout; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK_TOSTRING_OFFSET))(this);
		}

		static ::MoleMole::ConfigPreIFixTask* Method_1_D331A55A8A344B8B()
		{
			return ((::MoleMole::ConfigPreIFixTask*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK_METHOD_1_D331A55A8A344B8B_OFFSET))();
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPREIFIXTASK_METHOD_1_128774387667156B_OFFSET))(this);
		}
	};
}
