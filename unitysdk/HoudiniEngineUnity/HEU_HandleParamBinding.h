#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HandleParamBinding_HEU_HandleParamType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x8C66300)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HandleParamBinding_TypeDefinitionIndex = 43620;

	class HEU_HandleParamBinding : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType _paramType; // 0x10
		::System::Int32 _parmID; // 0x14
		::System::String* _paramName; // 0x18
		::System::Boolean _bDisabled; // 0x20
		::Il2CppArray<::System::Boolean>* _boundChannels; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING__CTOR_OFFSET))(this);
		}
	};
}
