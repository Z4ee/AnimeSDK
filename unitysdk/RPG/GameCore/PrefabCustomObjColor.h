#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PREFABCUSTOMOBJCOLOR_METHOD_2_FB5609609EBCDDE3_OFFSET UNITYSDK_OFFSET(0x17510F60)
#define RPG_GAMECORE_PREFABCUSTOMOBJCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17511090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrefabCustomObjColor_TypeDefinitionIndex = 17502;

	class PrefabCustomObjColor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 RGB; // 0x10
		::System::Single Opacity; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCUSTOMOBJCOLOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB5609609EBCDDE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PrefabCustomObjColor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PrefabCustomObjColor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCUSTOMOBJCOLOR_METHOD_2_FB5609609EBCDDE3_OFFSET))(a1, a2);
		}
	};
}
