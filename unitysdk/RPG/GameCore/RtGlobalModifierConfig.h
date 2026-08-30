#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTGLOBALMODIFIERCONFIG_METHOD_2_F34DB2E40E7D3CFA_OFFSET UNITYSDK_OFFSET(0x1D4AA0A0)
#define RPG_GAMECORE_RTGLOBALMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AA180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtGlobalModifierConfig_TypeDefinitionIndex = 17452;

	class RtGlobalModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>* ModifierMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGLOBALMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F34DB2E40E7D3CFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtGlobalModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtGlobalModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGLOBALMODIFIERCONFIG_METHOD_2_F34DB2E40E7D3CFA_OFFSET))(a1, a2);
		}
	};
}
