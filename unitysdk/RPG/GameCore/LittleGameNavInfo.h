#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameNavConnectInfo; }

#define RPG_GAMECORE_LITTLEGAMENAVINFO_METHOD_2_C7028958CB5BB1CE_OFFSET UNITYSDK_OFFSET(0x198A12D0)
#define RPG_GAMECORE_LITTLEGAMENAVINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x198A1390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavInfo_TypeDefinitionIndex = 16480;

	class LittleGameNavInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameNavConnectInfo*>* LittleGameConnectList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C7028958CB5BB1CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameNavInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameNavInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVINFO_METHOD_2_C7028958CB5BB1CE_OFFSET))(a1, a2);
		}
	};
}
