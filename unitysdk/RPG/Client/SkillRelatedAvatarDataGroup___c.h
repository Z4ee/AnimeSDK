#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SkillRelatedAvatarData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FFBC0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188FFC00)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C___INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x188FFC10)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillRelatedAvatarDataGroup___c_TypeDefinitionIndex = 59713;

	class SkillRelatedAvatarDataGroup___c : public ::System::Object
	{
	public:
		static ::RPG::Client::SkillRelatedAvatarDataGroup___c** StaticGet___9()
		{
			return (::RPG::Client::SkillRelatedAvatarDataGroup___c**)Il2CppClass::FromTypeDefinitionIndex(SkillRelatedAvatarDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x34D10);
		}
		static ::System::Comparison_1<::RPG::Client::SkillRelatedAvatarData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::SkillRelatedAvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(SkillRelatedAvatarDataGroup___c_TypeDefinitionIndex)->GetStaticField(0x34D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __Init_b__4_0(::RPG::Client::SkillRelatedAvatarData* a1, ::RPG::Client::SkillRelatedAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SkillRelatedAvatarData*, ::RPG::Client::SkillRelatedAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C___INIT_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
