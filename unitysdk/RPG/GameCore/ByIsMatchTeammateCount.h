#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeammateCountType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_5EE233099D404824_OFFSET UNITYSDK_OFFSET(0x18755640)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_CAE5975D32B7A390_OFFSET UNITYSDK_OFFSET(0x18755560)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x187555E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMatchTeammateCount_TypeDefinitionIndex = 21957;

	class ByIsMatchTeammateCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x20
		::RPG::GameCore::TeammateCountType CountType; // 0x24
		::System::Boolean IgnoreServant; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CAE5975D32B7A390(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMatchTeammateCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMatchTeammateCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_CAE5975D32B7A390_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EE233099D404824(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_METHOD_4_5EE233099D404824_OFFSET))(a1, a2);
		}
	};
}
