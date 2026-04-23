#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LogSamplerTypeDefine; }

#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST_METHOD_2_78727830B1D1A950_OFFSET UNITYSDK_OFFSET(0x18A7BC40)
#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7BD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogSamplerTypeDefineList_TypeDefinitionIndex = 17251;

	class LogSamplerTypeDefineList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LogSamplerTypeDefine*>* TypeDefines; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_78727830B1D1A950(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LogSamplerTypeDefineList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LogSamplerTypeDefineList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST_METHOD_2_78727830B1D1A950_OFFSET))(a1, a2);
		}
	};
}
