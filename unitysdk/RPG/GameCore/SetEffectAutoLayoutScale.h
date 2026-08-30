#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_METHOD_3_04C116B25ECFCA20_OFFSET UNITYSDK_OFFSET(0x1D4FB010)
#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_METHOD_3_94D2E3FE6B285F0F_OFFSET UNITYSDK_OFFSET(0x1D4FAFC0)
#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FB000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAutoLayoutScale_TypeDefinitionIndex = 22865;

	class SetEffectAutoLayoutScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Single Scale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94D2E3FE6B285F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAutoLayoutScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAutoLayoutScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_METHOD_3_94D2E3FE6B285F0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04C116B25ECFCA20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_METHOD_3_04C116B25ECFCA20_OFFSET))(a1, a2);
		}
	};
}
