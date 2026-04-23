#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D7B090)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CREATEFORHIGHLIGHT_B__0_0_OFFSET UNITYSDK_OFFSET(0x9D7B0D0)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D7B0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEducationComparerFactory___c_TypeDefinitionIndex = 57625;

	class AvatarEducationComparerFactory___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarEducationComparerFactory___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarEducationComparerFactory___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarEducationComparerFactory___c_TypeDefinitionIndex)->GetStaticField(0x33850);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEducationComparerFactory___c_TypeDefinitionIndex)->GetStaticField(0x33858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateForHighlight_b__0_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CREATEFORHIGHLIGHT_B__0_0_OFFSET))(this, avatar);
		}
	};
}
