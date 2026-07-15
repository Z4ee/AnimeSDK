#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_METHOD_3_0CD5BB03DAC11192_OFFSET UNITYSDK_OFFSET(0x1A051700)
#define RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_METHOD_3_52A5D82A7D61670B_OFFSET UNITYSDK_OFFSET(0x1A051740)
#define RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A051730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyTutorialGridItemData_TypeDefinitionIndex = 15070;

	class AlleyTutorialGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CD5BB03DAC11192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyTutorialGridItemData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyTutorialGridItemData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_METHOD_3_0CD5BB03DAC11192_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52A5D82A7D61670B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyTutorialGridItemData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyTutorialGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTUTORIALGRIDITEMDATA_METHOD_3_52A5D82A7D61670B_OFFSET))(a1, a2);
		}
	};
}
