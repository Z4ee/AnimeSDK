#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETMARBLESPECIALTALK_METHOD_3_77F5ECE1699A07F0_OFFSET UNITYSDK_OFFSET(0x1D8DB9B0)
#define RPG_GAMECORE_PETMARBLESPECIALTALK_METHOD_3_928943CE717754FC_OFFSET UNITYSDK_OFFSET(0x1D8DB8E0)
#define RPG_GAMECORE_PETMARBLESPECIALTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DB9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetMarbleSpecialTalk_TypeDefinitionIndex = 16842;

	class PetMarbleSpecialTalk : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 TalkId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESPECIALTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_928943CE717754FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetMarbleSpecialTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetMarbleSpecialTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESPECIALTALK_METHOD_3_928943CE717754FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77F5ECE1699A07F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetMarbleSpecialTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetMarbleSpecialTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESPECIALTALK_METHOD_3_77F5ECE1699A07F0_OFFSET))(a1, a2);
		}
	};
}
