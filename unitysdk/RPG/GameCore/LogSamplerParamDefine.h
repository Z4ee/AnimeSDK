#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogSamplerParamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOGSAMPLERPARAMDEFINE_METHOD_2_84D35F3508CE728D_OFFSET UNITYSDK_OFFSET(0x18A7B8A0)
#define RPG_GAMECORE_LOGSAMPLERPARAMDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7BA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogSamplerParamDefine_TypeDefinitionIndex = 17253;

	class LogSamplerParamDefine : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Desc; // 0x18
		::RPG::GameCore::LogSamplerParamType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERPARAMDEFINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_84D35F3508CE728D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LogSamplerParamDefine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LogSamplerParamDefine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERPARAMDEFINE_METHOD_2_84D35F3508CE728D_OFFSET))(a1, a2);
		}
	};
}
