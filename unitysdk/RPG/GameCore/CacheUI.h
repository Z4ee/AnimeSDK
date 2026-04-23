#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CACHEUI_METHOD_3_A07D049D2797AC3B_OFFSET UNITYSDK_OFFSET(0x18765C30)
#define RPG_GAMECORE_CACHEUI_METHOD_3_BEC4C889168D9E92_OFFSET UNITYSDK_OFFSET(0x18765CB0)
#define RPG_GAMECORE_CACHEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18765C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CacheUI_TypeDefinitionIndex = 20549;

	class CacheUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PrefabPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A07D049D2797AC3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CacheUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CacheUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHEUI_METHOD_3_A07D049D2797AC3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC4C889168D9E92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CacheUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CacheUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHEUI_METHOD_3_BEC4C889168D9E92_OFFSET))(a1, a2);
		}
	};
}
