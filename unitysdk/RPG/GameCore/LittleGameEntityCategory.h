#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY_METHOD_2_5CCA191067F76AAD_OFFSET UNITYSDK_OFFSET(0x1735CBF0)
#define RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1735CC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityCategory_TypeDefinitionIndex = 17352;

	class LittleGameEntityCategory : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5CCA191067F76AAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityCategory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityCategory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCATEGORY_METHOD_2_5CCA191067F76AAD_OFFSET))(a1, a2);
		}
	};
}
