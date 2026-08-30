#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SetComponentAssetAnimParameterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG_METHOD_2_51BEBA6C9DBCC9CF_OFFSET UNITYSDK_OFFSET(0x1D4E8EF0)
#define RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E9050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetAnimStateConfig_TypeDefinitionIndex = 22556;

	class SetComponentAssetAnimStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FromStateName; // 0x10
		::System::String* ToStateName; // 0x18
		::Il2CppArray<::RPG::GameCore::SetComponentAssetAnimParameterConfig*>* Parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_51BEBA6C9DBCC9CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComponentAssetAnimStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComponentAssetAnimStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMSTATECONFIG_METHOD_2_51BEBA6C9DBCC9CF_OFFSET))(a1, a2);
		}
	};
}
