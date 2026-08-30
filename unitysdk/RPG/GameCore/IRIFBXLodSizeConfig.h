#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_IRIFBXLODSIZECONFIG_METHOD_2_5B6492929B8F1D76_OFFSET UNITYSDK_OFFSET(0x1D20CE20)
#define RPG_GAMECORE_IRIFBXLODSIZECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IRIFBXLodSizeConfig_TypeDefinitionIndex = 18976;

	class IRIFBXLodSizeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* LodSizeMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IRIFBXLODSIZECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5B6492929B8F1D76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IRIFBXLodSizeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IRIFBXLodSizeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IRIFBXLODSIZECONFIG_METHOD_2_5B6492929B8F1D76_OFFSET))(a1, a2);
		}
	};
}
