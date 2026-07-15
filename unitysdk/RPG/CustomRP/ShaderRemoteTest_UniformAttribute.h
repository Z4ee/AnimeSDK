#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define RPG_CUSTOMRP_SHADERREMOTETEST_UNIFORMATTRIBUTE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D134AD0)
#define RPG_CUSTOMRP_SHADERREMOTETEST_UNIFORMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D134AE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderRemoteTest_UniformAttribute_TypeDefinitionIndex = 36208;

	class ShaderRemoteTest_UniformAttribute : public ::System::Attribute
	{
	public:
		::System::String* _DisplayName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERREMOTETEST_UNIFORMATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERREMOTETEST_UNIFORMATTRIBUTE_GET_DISPLAYNAME_OFFSET))(this);
		}
	};
}
