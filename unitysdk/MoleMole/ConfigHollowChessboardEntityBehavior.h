#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior_BehaviorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGHOLLOWCHESSBOARDENTITYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A077E90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowChessboardEntityBehavior_TypeDefinitionIndex = 45725;

	class ConfigHollowChessboardEntityBehavior : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigHollowChessboardEntityBehavior_BehaviorConfig*>* BehaviorConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWCHESSBOARDENTITYBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
