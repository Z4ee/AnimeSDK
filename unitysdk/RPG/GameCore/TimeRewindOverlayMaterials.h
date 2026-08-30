#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS_METHOD_2_902843E092F03706_OFFSET UNITYSDK_OFFSET(0x1D528BA0)
#define RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D528CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindOverlayMaterials_TypeDefinitionIndex = 17356;

	class TimeRewindOverlayMaterials : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RendererPath; // 0x10
		::Il2CppArray<::System::String*>* MaterialNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_902843E092F03706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindOverlayMaterials*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindOverlayMaterials*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERLAYMATERIALS_METHOD_2_902843E092F03706_OFFSET))(a1, a2);
		}
	};
}
