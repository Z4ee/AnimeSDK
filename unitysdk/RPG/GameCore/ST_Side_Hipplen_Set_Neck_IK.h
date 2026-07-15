#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenNeckIKType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_METHOD_4_845C245A6E96976A_OFFSET UNITYSDK_OFFSET(0x1B78A160)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_METHOD_4_B68F3EB8F899409F_OFFSET UNITYSDK_OFFSET(0x1B78A1A0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78A190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_Set_Neck_IK_TypeDefinitionIndex = 20517;

	class ST_Side_Hipplen_Set_Neck_IK : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::HipplenNeckIKType IKType; // 0x18
		::System::String* AttachPointName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_845C245A6E96976A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_METHOD_4_845C245A6E96976A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B68F3EB8F899409F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_Set_Neck_IK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SET_NECK_IK_METHOD_4_B68F3EB8F899409F_OFFSET))(a1, a2);
		}
	};
}
