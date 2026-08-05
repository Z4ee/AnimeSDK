#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/SpecialEffectRoleType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRESULT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x752A50)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x118D9D60)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectResult_TypeDefinitionIndex = 81901;

	struct alignas(8) EffectResult
	{
		static ::MoleMole::HollowChessboard::EffectResult* StaticGet_Empty()
		{
			return (::MoleMole::HollowChessboard::EffectResult*)Il2CppClass::FromTypeDefinitionIndex(EffectResult_TypeDefinitionIndex)->GetStaticField(0x3C1D0);
		}
		::System::String* effectPath; // 0x10
		::MoleMole::HollowChessboard::SpecialEffectRoleType RoleType; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRESULT__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTRESULT_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
