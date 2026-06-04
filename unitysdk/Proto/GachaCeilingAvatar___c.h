#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GachaCeilingAvatar; }

#define PROTO_GACHACEILINGAVATAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0ED220)
#define PROTO_GACHACEILINGAVATAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0ED250)
#define PROTO_GACHACEILINGAVATAR___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A0ED260)

namespace Proto
{
	inline static constexpr unsigned int GachaCeilingAvatar___c_TypeDefinitionIndex = 27344;

	class GachaCeilingAvatar___c : public ::System::Object
	{
	public:
		static ::Proto::GachaCeilingAvatar___c** StaticGet___9()
		{
			return (::Proto::GachaCeilingAvatar___c**)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingAvatar___c_TypeDefinitionIndex)->GetStaticField(0x43230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR___C__CTOR_OFFSET))(this);
		}

		::Proto::GachaCeilingAvatar* __cctor_b__28_0()
		{
			return ((::Proto::GachaCeilingAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
