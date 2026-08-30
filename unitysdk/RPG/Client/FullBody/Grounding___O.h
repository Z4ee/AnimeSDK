#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FullBody { class Grounding_Class_3_25BFA3B13C8F2459; }
namespace RPG::Client::FullBody { class Grounding_Class_3_443CA02E4E068003; }
namespace RPG::Client::FullBody { class Grounding_Class_3_594C4D3848A7A3AB; }
namespace RPG::Client::FullBody { class Grounding_Class_3_6D36CA8DB48257A4; }

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding___O_TypeDefinitionIndex = 74146;

	class Grounding___O : public ::System::Object
	{
	public:
		static ::RPG::Client::FullBody::Grounding_Class_3_594C4D3848A7A3AB** StaticGet__1___CapsuleCast()
		{
			return (::RPG::Client::FullBody::Grounding_Class_3_594C4D3848A7A3AB**)Il2CppClass::FromTypeDefinitionIndex(Grounding___O_TypeDefinitionIndex)->GetStaticField(0x17EB0);
		}
		static ::RPG::Client::FullBody::Grounding_Class_3_443CA02E4E068003** StaticGet__0___Raycast()
		{
			return (::RPG::Client::FullBody::Grounding_Class_3_443CA02E4E068003**)Il2CppClass::FromTypeDefinitionIndex(Grounding___O_TypeDefinitionIndex)->GetStaticField(0x17EB8);
		}
		static ::RPG::Client::FullBody::Grounding_Class_3_6D36CA8DB48257A4** StaticGet__3___BoxCast()
		{
			return (::RPG::Client::FullBody::Grounding_Class_3_6D36CA8DB48257A4**)Il2CppClass::FromTypeDefinitionIndex(Grounding___O_TypeDefinitionIndex)->GetStaticField(0x17EC0);
		}
		static ::RPG::Client::FullBody::Grounding_Class_3_25BFA3B13C8F2459** StaticGet__2___SphereCast()
		{
			return (::RPG::Client::FullBody::Grounding_Class_3_25BFA3B13C8F2459**)Il2CppClass::FromTypeDefinitionIndex(Grounding___O_TypeDefinitionIndex)->GetStaticField(0x17EC8);
		}
	};
}
