#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/System/Object.h"

class Class_1_18B5C63655A4A803;
namespace MoleMole::HollowChessboard { class IEffectExpressionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG_CREATEEFFECTROLEENTRY_OFFSET UNITYSDK_OFFSET(0x16858890)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16858B20)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectRoleEntryConfig_TypeDefinitionIndex = 56186;

	class EffectRoleEntryConfig : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::EffectResult Result; // 0x10
		::System::String* Description; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IEffectExpressionConfig*>* EffectExpressionArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_18B5C63655A4A803* CreateEffectRoleEntry()
		{
			return ((::Class_1_18B5C63655A4A803*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTROLEENTRYCONFIG_CREATEEFFECTROLEENTRY_OFFSET))(this);
		}
	};
}
