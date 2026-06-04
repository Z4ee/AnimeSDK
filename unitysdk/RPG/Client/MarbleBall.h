#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleSkill; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MARBLEBALL_GETSKILLS_OFFSET UNITYSDK_OFFSET(0xBEF1DD0)
#define RPG_CLIENT_MARBLEBALL_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xBEF1D90)
#define RPG_CLIENT_MARBLEBALL_GET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xBEF1D10)
#define RPG_CLIENT_MARBLEBALL_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0xBEF1D70)
#define RPG_CLIENT_MARBLEBALL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBEF1CF0)
#define RPG_CLIENT_MARBLEBALL_GET_ID_OFFSET UNITYSDK_OFFSET(0xBEF1CB0)
#define RPG_CLIENT_MARBLEBALL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBEF1CD0)
#define RPG_CLIENT_MARBLEBALL_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xBEF1DB0)
#define RPG_CLIENT_MARBLEBALL_GET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xBEF1D50)
#define RPG_CLIENT_MARBLEBALL_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xBEF1D30)
#define RPG_CLIENT_MARBLEBALL__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF1CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBall_TypeDefinitionIndex = 61515;

	class MarbleBall : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_LEVEL = 0x3; // 0x0
		::RPG::GameCore::MarbleSealRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::MarbleSealRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_EnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ENEMYICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallEnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_SMALLENEMYICONPATH_OFFSET))(this);
		}

		::System::Int32 get_Health()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_HEALTH_OFFSET))(this);
		}

		::System::Int32 get_Attack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ATTACK_OFFSET))(this);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleSkill*>* GetSkills(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleSkill*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GETSKILLS_OFFSET))(this, a1);
		}
	};
}
