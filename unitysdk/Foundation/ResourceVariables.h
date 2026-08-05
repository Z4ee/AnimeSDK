#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_RESOURCEVARIABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DFB4A0)

namespace Foundation
{
	inline static constexpr unsigned int ResourceVariables_TypeDefinitionIndex = 40753;

	class ResourceVariables : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Scene_Level_Zero_Loop_Path()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceVariables_TypeDefinitionIndex)->GetStaticField(0x3E8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_RESOURCEVARIABLES__CCTOR_OFFSET))();
		}
	};
}
