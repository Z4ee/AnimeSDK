#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEOBJECTCAPTURE_METHOD_2_842C42BE89DCA78E_OFFSET UNITYSDK_OFFSET(0x18E8EDB0)
#define RPG_GAMECORE_STAGEOBJECTCAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8EFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageObjectCapture_TypeDefinitionIndex = 16346;

	class StageObjectCapture : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::System::Boolean UseOverridePos; // 0x20
		::System::Boolean ResetAnimatorWhenReload; // 0x21
		::System::Boolean IsLightWeight; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEOBJECTCAPTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_842C42BE89DCA78E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageObjectCapture*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageObjectCapture*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEOBJECTCAPTURE_METHOD_2_842C42BE89DCA78E_OFFSET))(a1, a2);
		}
	};
}
