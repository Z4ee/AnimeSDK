#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO_METHOD_2_A6F9B2CEA25F2B36_OFFSET UNITYSDK_OFFSET(0x18A6D870)
#define RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6D8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavAutoGenExitInfo_TypeDefinitionIndex = 16445;

	class LittleGameNavAutoGenExitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6F9B2CEA25F2B36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameNavAutoGenExitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameNavAutoGenExitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVAUTOGENEXITINFO_METHOD_2_A6F9B2CEA25F2B36_OFFSET))(a1, a2);
		}
	};
}
