#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETMARBLESETFACEEMOTION_METHOD_3_3B5CD4DCAB322481_OFFSET UNITYSDK_OFFSET(0x1D909150)
#define RPG_GAMECORE_PETMARBLESETFACEEMOTION_METHOD_3_BA656B7BE21451C7_OFFSET UNITYSDK_OFFSET(0x1D9090F0)
#define RPG_GAMECORE_PETMARBLESETFACEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D909140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetMarbleSetFaceEmotion_TypeDefinitionIndex = 16839;

	class PetMarbleSetFaceEmotion : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 EmotionIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESETFACEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA656B7BE21451C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetMarbleSetFaceEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetMarbleSetFaceEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESETFACEEMOTION_METHOD_3_BA656B7BE21451C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B5CD4DCAB322481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetMarbleSetFaceEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetMarbleSetFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLESETFACEEMOTION_METHOD_3_3B5CD4DCAB322481_OFFSET))(a1, a2);
		}
	};
}
