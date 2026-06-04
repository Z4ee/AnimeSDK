#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class DisplayAvatarDetailInfo; }

#define PROTO_DISPLAYAVATARDETAILINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E7760)
#define PROTO_DISPLAYAVATARDETAILINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E77A0)
#define PROTO_DISPLAYAVATARDETAILINFO___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1A0E77B0)

namespace Proto
{
	inline static constexpr unsigned int DisplayAvatarDetailInfo___c_TypeDefinitionIndex = 27146;

	class DisplayAvatarDetailInfo___c : public ::System::Object
	{
	public:
		static ::Proto::DisplayAvatarDetailInfo___c** StaticGet___9()
		{
			return (::Proto::DisplayAvatarDetailInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DisplayAvatarDetailInfo___c_TypeDefinitionIndex)->GetStaticField(0x42DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C__CTOR_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* __cctor_b__78_0()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C___CCTOR_B__78_0_OFFSET))(this);
		}
	};
}
