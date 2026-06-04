#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class DiceCombatAvatar; }

#define PROTO_DICECOMBATAVATAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E60B0)
#define PROTO_DICECOMBATAVATAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E60E0)
#define PROTO_DICECOMBATAVATAR___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A0E60F0)

namespace Proto
{
	inline static constexpr unsigned int DiceCombatAvatar___c_TypeDefinitionIndex = 24333;

	class DiceCombatAvatar___c : public ::System::Object
	{
	public:
		static ::Proto::DiceCombatAvatar___c** StaticGet___9()
		{
			return (::Proto::DiceCombatAvatar___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatAvatar___c_TypeDefinitionIndex)->GetStaticField(0x42CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR___C__CTOR_OFFSET))(this);
		}

		::Proto::DiceCombatAvatar* __cctor_b__38_0()
		{
			return ((::Proto::DiceCombatAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DICECOMBATAVATAR___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
