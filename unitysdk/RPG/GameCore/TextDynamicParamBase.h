#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTDYNAMICPARAMBASE_METHOD_2_11983C0DBACCDDAF_OFFSET UNITYSDK_OFFSET(0x190955E0)
#define RPG_GAMECORE_TEXTDYNAMICPARAMBASE_METHOD_2_7C3F7BBE76C0E431_OFFSET UNITYSDK_OFFSET(0x190952E0)
#define RPG_GAMECORE_TEXTDYNAMICPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190955D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDynamicParamBase_TypeDefinitionIndex = 16094;

	class TextDynamicParamBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7C3F7BBE76C0E431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDynamicParamBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDynamicParamBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMBASE_METHOD_2_7C3F7BBE76C0E431_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_11983C0DBACCDDAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDynamicParamBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMBASE_METHOD_2_11983C0DBACCDDAF_OFFSET))(a1, a2);
		}
	};
}
