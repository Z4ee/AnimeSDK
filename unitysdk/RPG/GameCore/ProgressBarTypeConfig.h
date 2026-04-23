#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROGRESSBARTYPECONFIG_METHOD_2_6BFB2FC4070AB802_OFFSET UNITYSDK_OFFSET(0x18C62DA0)
#define RPG_GAMECORE_PROGRESSBARTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C62E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProgressBarTypeConfig_TypeDefinitionIndex = 21636;

	class ProgressBarTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ProgressColor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROGRESSBARTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6BFB2FC4070AB802(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProgressBarTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProgressBarTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROGRESSBARTYPECONFIG_METHOD_2_6BFB2FC4070AB802_OFFSET))(a1, a2);
		}
	};
}
