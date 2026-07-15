#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_32C8BD2F7A4A9D61_OFFSET UNITYSDK_OFFSET(0x1A8D4870)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_58AF3567F4A899AE_OFFSET UNITYSDK_OFFSET(0x1A8D48B0)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_7D8344CAE46B1B04_OFFSET UNITYSDK_OFFSET(0x1A8D4690)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_C4EB45136157ADBD_OFFSET UNITYSDK_OFFSET(0x1A8D46E0)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D46D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInfiniteMonsterWaveLeft_TypeDefinitionIndex = 21758;

	class ByInfiniteMonsterWaveLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 TotalRank; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7D8344CAE46B1B04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_7D8344CAE46B1B04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4EB45136157ADBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_C4EB45136157ADBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32C8BD2F7A4A9D61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_32C8BD2F7A4A9D61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_58AF3567F4A899AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_58AF3567F4A899AE_OFFSET))(a1, a2);
		}
	};
}
