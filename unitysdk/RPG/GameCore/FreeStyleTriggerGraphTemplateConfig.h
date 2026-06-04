#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG_METHOD_2_EE0CCF5F8CAFCD6F_OFFSET UNITYSDK_OFFSET(0x1976E9C0)
#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerGraphTemplateConfig_TypeDefinitionIndex = 16082;

	class FreeStyleTriggerGraphTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphInfo*>* GraphTemplates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE0CCF5F8CAFCD6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG_METHOD_2_EE0CCF5F8CAFCD6F_OFFSET))(a1, a2);
		}
	};
}
