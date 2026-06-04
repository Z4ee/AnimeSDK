#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PlayerSimpleInfo; }

#define PROTO_PLAYERSIMPLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A122200)
#define PROTO_PLAYERSIMPLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A122240)
#define PROTO_PLAYERSIMPLEINFO___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1A122250)

namespace Proto
{
	inline static constexpr unsigned int PlayerSimpleInfo___c_TypeDefinitionIndex = 27140;

	class PlayerSimpleInfo___c : public ::System::Object
	{
	public:
		static ::Proto::PlayerSimpleInfo___c** StaticGet___9()
		{
			return (::Proto::PlayerSimpleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerSimpleInfo___c_TypeDefinitionIndex)->GetStaticField(0x45590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO___C__CTOR_OFFSET))(this);
		}

		::Proto::PlayerSimpleInfo* __cctor_b__108_0()
		{
			return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSIMPLEINFO___C___CCTOR_B__108_0_OFFSET))(this);
		}
	};
}
