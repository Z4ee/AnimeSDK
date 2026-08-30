#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleSkill; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MARBLEBALL_GETSKILLS_OFFSET UNITYSDK_OFFSET(0x1B568AA0)
#define RPG_CLIENT_MARBLEBALL_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x1B568A00)
#define RPG_CLIENT_MARBLEBALL_GET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0x1B5688C0)
#define RPG_CLIENT_MARBLEBALL_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1B5689B0)
#define RPG_CLIENT_MARBLEBALL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B568870)
#define RPG_CLIENT_MARBLEBALL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B5687D0)
#define RPG_CLIENT_MARBLEBALL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B568820)
#define RPG_CLIENT_MARBLEBALL_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x1B568A50)
#define RPG_CLIENT_MARBLEBALL_GET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0x1B568960)
#define RPG_CLIENT_MARBLEBALL_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1B568910)
#define RPG_CLIENT_MARBLEBALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5687C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBall_TypeDefinitionIndex = 65862;

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
