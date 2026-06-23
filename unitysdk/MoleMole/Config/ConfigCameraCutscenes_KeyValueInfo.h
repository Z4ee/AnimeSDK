#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CameraShotData; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33F1D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraCutscenes_KeyValueInfo_TypeDefinitionIndex = 49796;

	class ConfigCameraCutscenes_KeyValueInfo : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::CameraShotData* valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::CameraShotData* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_KEYVALUEINFO__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
