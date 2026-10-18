#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BPCHARACTERMOVECONFIG_METHOD_2_3B9B41A156348D8F_OFFSET UNITYSDK_OFFSET(0x1D437200)
#define RPG_GAMECORE_BPCHARACTERMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D437300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BPCharacterMoveConfig_TypeDefinitionIndex = 18146;

	class BPCharacterMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BodySize>* AvatarBodySizeMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BPCHARACTERMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3B9B41A156348D8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BPCharacterMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BPCharacterMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BPCHARACTERMOVECONFIG_METHOD_2_3B9B41A156348D8F_OFFSET))(a1, a2);
		}
	};
}
