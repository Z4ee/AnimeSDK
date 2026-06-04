#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectPathList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BUILDEFFECTPRELOADITEM_METHOD_2_63DC685939189540_OFFSET UNITYSDK_OFFSET(0x194EF6D0)
#define RPG_GAMECORE_BUILDEFFECTPRELOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x194EF7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuildEffectPreloadItem_TypeDefinitionIndex = 15532;

	class BuildEffectPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EffectPathList*>* PrelodConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_63DC685939189540(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BuildEffectPreloadItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BuildEffectPreloadItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADITEM_METHOD_2_63DC685939189540_OFFSET))(a1, a2);
		}
	};
}
