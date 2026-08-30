#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_METHOD_3_06B0706ABE7125D4_OFFSET UNITYSDK_OFFSET(0x1D5DCAB0)
#define RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_METHOD_3_E9A5F062D89F5484_OFFSET UNITYSDK_OFFSET(0x1D5DCB40)
#define RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DCB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCreateManikinEntity_TypeDefinitionIndex = 22118;

	class TrainPartyCreateManikinEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::String* ManikinJsonPath; // 0x20
		::System::String* EntityUniqueName; // 0x28
		::RPG::MVector3 Position; // 0x30
		::RPG::MVector3 Rotation; // 0x3C
		::RPG::MVector3 Scale; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06B0706ABE7125D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreateManikinEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreateManikinEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_METHOD_3_06B0706ABE7125D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9A5F062D89F5484(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreateManikinEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreateManikinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEMANIKINENTITY_METHOD_3_E9A5F062D89F5484_OFFSET))(a1, a2);
		}
	};
}
