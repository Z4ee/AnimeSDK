#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETMARBLEBUFFTEXT_METHOD_3_95CF9036148CA671_OFFSET UNITYSDK_OFFSET(0x1D8DB3D0)
#define RPG_GAMECORE_PETMARBLEBUFFTEXT_METHOD_3_FA6D61F8FB924D77_OFFSET UNITYSDK_OFFSET(0x1D8DB370)
#define RPG_GAMECORE_PETMARBLEBUFFTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DB3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetMarbleBuffText_TypeDefinitionIndex = 16841;

	class PetMarbleBuffText : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 TextId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEBUFFTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA6D61F8FB924D77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetMarbleBuffText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetMarbleBuffText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEBUFFTEXT_METHOD_3_FA6D61F8FB924D77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95CF9036148CA671(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetMarbleBuffText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetMarbleBuffText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEBUFFTEXT_METHOD_3_95CF9036148CA671_OFFSET))(a1, a2);
		}
	};
}
