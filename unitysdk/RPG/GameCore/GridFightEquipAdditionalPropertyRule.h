#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_METHOD_2_91A150FAD420B5D4_OFFSET UNITYSDK_OFFSET(0x197E1890)
#define RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x197E18D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipAdditionalPropertyRule_TypeDefinitionIndex = 18382;

	class GridFightEquipAdditionalPropertyRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_91A150FAD420B5D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEquipAdditionalPropertyRule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipAdditionalPropertyRule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_METHOD_2_91A150FAD420B5D4_OFFSET))(a1, a2);
		}
	};
}
