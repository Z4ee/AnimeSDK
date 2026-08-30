#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define RPG_CUSTOMRP_SHADERREMOTETEST_ACTIONATTRIBUTE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1C6F0C90)
#define RPG_CUSTOMRP_SHADERREMOTETEST_ACTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F0CA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderRemoteTest_ActionAttribute_TypeDefinitionIndex = 37068;

	class ShaderRemoteTest_ActionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _DisplayName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERREMOTETEST_ACTIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERREMOTETEST_ACTIONATTRIBUTE_GET_DISPLAYNAME_OFFSET))(this);
		}
	};
}
