#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelEntityStateActionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_METHOD_3_2D7F45CD66CF8A38_OFFSET UNITYSDK_OFFSET(0x19768980)
#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_METHOD_3_38127E644AB1C265_OFFSET UNITYSDK_OFFSET(0x19768910)
#define RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19768960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEntityStateConfig_TypeDefinitionIndex = 15937;

	class FourRotateVoxelEntityStateConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEntityState; // 0x10
		::System::String* BindLevelVarName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FourRotateVoxelEntityStateActionConfig*>* EntityStateActionConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38127E644AB1C265(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelEntityStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelEntityStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_METHOD_3_38127E644AB1C265_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D7F45CD66CF8A38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelEntityStateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelEntityStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTITYSTATECONFIG_METHOD_3_2D7F45CD66CF8A38_OFFSET))(a1, a2);
		}
	};
}
