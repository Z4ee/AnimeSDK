#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HandleParamBinding_HEU_HandleParamType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x167FE2A0)
#define HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x167FD150)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HandleParamBinding_TypeDefinitionIndex = 39231;

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

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_HandleParamBinding*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
