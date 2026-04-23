#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6DA6DDD878F74995;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1711B0)
#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA171520)
#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA1714D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatOutOfBattleDiceModel_TypeDefinitionIndex = 58558;

	class DiceCombatOutOfBattleDiceModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_6DA6DDD878F74995*>* _Faces; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombatOutOfBattleDiceModel* Create(::System::UInt32 diceID, ::UnityEngine::Transform* trans)
		{
			return ((::RPG::Client::DiceCombatOutOfBattleDiceModel*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CREATE_OFFSET))(diceID, trans);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_ONDESTROY_OFFSET))(this);
		}
	};
}
