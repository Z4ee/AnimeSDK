#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameNavConnectInfo; }

#define RPG_GAMECORE_LITTLEGAMENAVINFO_METHOD_2_0C7FE26E3F0D21CB_OFFSET UNITYSDK_OFFSET(0x18A47D90)
#define RPG_GAMECORE_LITTLEGAMENAVINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6DAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavInfo_TypeDefinitionIndex = 16446;

	class LittleGameNavInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameNavConnectInfo*>* LittleGameConnectList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0C7FE26E3F0D21CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameNavInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameNavInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVINFO_METHOD_2_0C7FE26E3F0D21CB_OFFSET))(a1, a2);
		}
	};
}
