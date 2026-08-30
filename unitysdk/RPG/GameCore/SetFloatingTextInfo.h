#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_45567AAC6FC42F23_OFFSET UNITYSDK_OFFSET(0x1D4FF110)
#define RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_D90BFFAC9ED84F22_OFFSET UNITYSDK_OFFSET(0x1D4FF150)
#define RPG_GAMECORE_SETFLOATINGTEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FF140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloatingTextInfo_TypeDefinitionIndex = 20228;

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

		static ::System::Void Method_3_45567AAC6FC42F23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloatingTextInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloatingTextInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_45567AAC6FC42F23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D90BFFAC9ED84F22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloatingTextInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_METHOD_3_D90BFFAC9ED84F22_OFFSET))(a1, a2);
		}
	};
}
