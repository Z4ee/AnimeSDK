#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLELAYERLIST_METHOD_2_3AADCAA69D633B88_OFFSET UNITYSDK_OFFSET(0x18932630)
#define RPG_GAMECORE_FREESTYLELAYERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18932670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleLayerList_TypeDefinitionIndex = 15443;

	class FreeStyleLayerList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLELAYERLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3AADCAA69D633B88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleLayerList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleLayerList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLELAYERLIST_METHOD_2_3AADCAA69D633B88_OFFSET))(a1, a2);
		}
	};
}
