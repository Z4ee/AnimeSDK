#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LogSamplerParamDefine; }
namespace System { class String; }

#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINE_METHOD_2_928424D475F660BA_OFFSET UNITYSDK_OFFSET(0x18A7BA30)
#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7BC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogSamplerTypeDefine_TypeDefinitionIndex = 17252;

	class LogSamplerTypeDefine : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Type; // 0x10
		::System::String* TypeDesc; // 0x18
		::Il2CppArray<::RPG::GameCore::LogSamplerParamDefine*>* Params; // 0x20
		::System::Boolean HideOverrideField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_928424D475F660BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LogSamplerTypeDefine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LogSamplerTypeDefine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINE_METHOD_2_928424D475F660BA_OFFSET))(a1, a2);
		}
	};
}
