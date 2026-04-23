#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PlayerAssistInfo; }

#define PROTO_PLAYERASSISTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193513B0)
#define PROTO_PLAYERASSISTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193513E0)
#define PROTO_PLAYERASSISTINFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x193513F0)

namespace Proto
{
	inline static constexpr unsigned int PlayerAssistInfo___c_TypeDefinitionIndex = 27191;

	class PlayerAssistInfo___c : public ::System::Object
	{
	public:
		static ::Proto::PlayerAssistInfo___c** StaticGet___9()
		{
			return (::Proto::PlayerAssistInfo___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerAssistInfo___c_TypeDefinitionIndex)->GetStaticField(0x650E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO___C__CTOR_OFFSET))(this);
		}

		::Proto::PlayerAssistInfo* __cctor_b__28_0()
		{
			return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERASSISTINFO___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
