#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_93BCF57104C1002F_OFFSET UNITYSDK_OFFSET(0x18DEB330)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_F1546C9832841F45_OFFSET UNITYSDK_OFFSET(0x18DEB400)
#define RPG_GAMECORE_ST_BYAIHANGUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAIHangUp_TypeDefinitionIndex = 19000;

	class ST_ByAIHangUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_93BCF57104C1002F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_93BCF57104C1002F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1546C9832841F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_F1546C9832841F45_OFFSET))(a1, a2);
		}
	};
}
