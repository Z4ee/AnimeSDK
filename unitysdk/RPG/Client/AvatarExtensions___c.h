#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATAREXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x913FB50)
#define RPG_CLIENT_AVATAREXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x913FB90)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__310_0_OFFSET UNITYSDK_OFFSET(0x913FBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c_TypeDefinitionIndex = 50853;

	class AvatarExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x36CE0);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__310_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x36CE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecommendTraceNodeRowDataList_b__310_0(::RPG::GameCore::AvatarSkillTreeRow* a, ::RPG::GameCore::AvatarSkillTreeRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__310_0_OFFSET))(this, a, b);
		}
	};
}
