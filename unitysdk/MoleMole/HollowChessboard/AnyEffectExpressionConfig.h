#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;
namespace MoleMole::HollowChessboard { class IEffectExpressionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1821C620)
#define MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1821C6A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int AnyEffectExpressionConfig_TypeDefinitionIndex = 58893;

	class AnyEffectExpressionConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IEffectExpressionConfig*>* EffectExpressionConfigArray; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_161* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_161*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_ANYEFFECTEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
