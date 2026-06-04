#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_4A59BCFEBF653E43_OFFSET UNITYSDK_OFFSET(0x19C4E5B0)
#define RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_D90BFFAC9ED84F22_OFFSET UNITYSDK_OFFSET(0x19C4E630)
#define RPG_GAMECORE_SETFLOATINGTEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4E600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloatingTextInfo_TypeDefinitionIndex = 19326;

	class SetFloatingTextInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType TargetEntityType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A59BCFEBF653E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloatingTextInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloatingTextInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_4A59BCFEBF653E43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D90BFFAC9ED84F22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloatingTextInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_D90BFFAC9ED84F22_OFFSET))(a1, a2);
		}
	};
}
