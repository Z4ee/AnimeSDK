#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools { class StoryDurationTimeConfig_StoryDurationTime; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_STORYDURATIONTIMECONFIG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCFD2540)
#define RPGTOOLS_STORYDURATIONTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD2590)

namespace RPGTools
{
	inline static constexpr unsigned int StoryDurationTimeConfig_TypeDefinitionIndex = 45098;

	class StoryDurationTimeConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::RPGTools::StoryDurationTimeConfig** StaticGet__Instance()
		{
			return (::RPGTools::StoryDurationTimeConfig**)Il2CppClass::FromTypeDefinitionIndex(StoryDurationTimeConfig_TypeDefinitionIndex)->GetStaticField(0x6800);
		}
		// static const ::System::String* ConfigPath; // 0x0
		::System::Collections::Generic::List_1<::RPGTools::StoryDurationTimeConfig_StoryDurationTime*>* Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORYDURATIONTIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::RPGTools::StoryDurationTimeConfig* get_Instance()
		{
			return ((::RPGTools::StoryDurationTimeConfig*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_STORYDURATIONTIMECONFIG_GET_INSTANCE_OFFSET))();
		}
	};
}
