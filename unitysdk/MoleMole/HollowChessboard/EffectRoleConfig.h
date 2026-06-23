#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9518B5776748B41E;
namespace MoleMole::HollowChessboard { class EffectRoleEntryConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG_CREATEEFFECTROLE_OFFSET UNITYSDK_OFFSET(0x12BC57C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC5990)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRoleConfig_TypeDefinitionIndex = 43348;

	class EffectRoleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::EffectRoleEntryConfig*>* EffectExpressionArray; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_9518B5776748B41E* CreateEffectRole()
		{
			return ((::Class_1_9518B5776748B41E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLECONFIG_CREATEEFFECTROLE_OFFSET))(this);
		}
	};
}
