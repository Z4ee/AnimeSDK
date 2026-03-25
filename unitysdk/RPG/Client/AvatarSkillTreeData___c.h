#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATARSKILLTREEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x915CEB0)
#define RPG_CLIENT_AVATARSKILLTREEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x915CEF0)
#define RPG_CLIENT_AVATARSKILLTREEDATA___C__GETRECOMMENDPOINTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x915CF00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkillTreeData___c_TypeDefinitionIndex = 50776;

	class AvatarSkillTreeData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarSkillTreeData___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarSkillTreeData___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeData___c_TypeDefinitionIndex)->GetStaticField(0x37410);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillTreeData___c_TypeDefinitionIndex)->GetStaticField(0x37418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecommendPoints_b__16_0(::RPG::GameCore::AvatarSkillTreeRow* a, ::RPG::GameCore::AvatarSkillTreeRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKILLTREEDATA___C__GETRECOMMENDPOINTS_B__16_0_OFFSET))(this, a, b);
		}
	};
}
