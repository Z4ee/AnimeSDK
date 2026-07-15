#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_141739E85EA33FDD_OFFSET UNITYSDK_OFFSET(0x1B77F370)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_DEE5E09538606C79_OFFSET UNITYSDK_OFFSET(0x1B77F520)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDE8AD51B505A71E_OFFSET UNITYSDK_OFFSET(0x1B77F3B0)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_F881F35ABBC406D8_OFFSET UNITYSDK_OFFSET(0x1B77F4F0)
#define RPG_GAMECORE_ST_BYONHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77F3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByOnHit_TypeDefinitionIndex = 19314;

	class ST_ByOnHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_141739E85EA33FDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_141739E85EA33FDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDE8AD51B505A71E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDE8AD51B505A71E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F881F35ABBC406D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_F881F35ABBC406D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DEE5E09538606C79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_DEE5E09538606C79_OFFSET))(a1, a2);
		}
	};
}
