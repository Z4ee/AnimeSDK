#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorUsage.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelAnchorParameter; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELANCHORINFO_METHOD_4_87169FB2EBAD4F5C_OFFSET UNITYSDK_OFFSET(0x1B02CD70)
#define RPG_GAMECORE_LEVELANCHORINFO_METHOD_4_CC434A7BC86FFFD1_OFFSET UNITYSDK_OFFSET(0x1B02CD30)
#define RPG_GAMECORE_LEVELANCHORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02CD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorInfo_TypeDefinitionIndex = 16559;

	class LevelAnchorInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Single RotX; // 0x38
		::System::Single RotZ; // 0x3C
		::RPG::GameCore::LevelAnchorUsage Usage; // 0x40
		::System::String* LookAtCameraTemplate; // 0x48
		::RPG::GameCore::LevelAnchorParameter* CustomParameter; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC434A7BC86FFFD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORINFO_METHOD_4_CC434A7BC86FFFD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87169FB2EBAD4F5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORINFO_METHOD_4_87169FB2EBAD4F5C_OFFSET))(a1, a2);
		}
	};
}
