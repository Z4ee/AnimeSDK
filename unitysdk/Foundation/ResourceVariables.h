#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_RESOURCEVARIABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x12584480)

namespace Foundation
{
	inline static constexpr unsigned int ResourceVariables_TypeDefinitionIndex = 54957;

	class ResourceVariables : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Scene_Level_Zero_Loop_Path()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceVariables_TypeDefinitionIndex)->GetStaticField(0x36C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_RESOURCEVARIABLES__CCTOR_OFFSET))();
		}
	};
}
