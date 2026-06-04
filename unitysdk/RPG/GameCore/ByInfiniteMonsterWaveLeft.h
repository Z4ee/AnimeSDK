#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_04838D9FB0FF0B8F_OFFSET UNITYSDK_OFFSET(0x19558160)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_6D250800DA8C47E8_OFFSET UNITYSDK_OFFSET(0x195583D0)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_8B9D3E4440814470_OFFSET UNITYSDK_OFFSET(0x19558450)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_C4EB45136157ADBD_OFFSET UNITYSDK_OFFSET(0x19558240)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x195581E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInfiniteMonsterWaveLeft_TypeDefinitionIndex = 21340;

	class ByInfiniteMonsterWaveLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 TotalRank; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_04838D9FB0FF0B8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_04838D9FB0FF0B8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4EB45136157ADBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_C4EB45136157ADBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D250800DA8C47E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_6D250800DA8C47E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B9D3E4440814470(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_8B9D3E4440814470_OFFSET))(a1, a2);
		}
	};
}
