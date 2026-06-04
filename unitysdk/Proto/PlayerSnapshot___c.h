#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PlayerSnapshot; }

#define PROTO_PLAYERSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A122A50)
#define PROTO_PLAYERSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A122A90)
#define PROTO_PLAYERSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A122AA0)

namespace Proto
{
	inline static constexpr unsigned int PlayerSnapshot___c_TypeDefinitionIndex = 24395;

	class PlayerSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::PlayerSnapshot___c** StaticGet___9()
		{
			return (::Proto::PlayerSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x456C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::PlayerSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::PlayerSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
