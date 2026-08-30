#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETFACEDIRECTIONLOCKED_METHOD_3_65565061BF5D6C0C_OFFSET UNITYSDK_OFFSET(0x1E82A5B0)
#define RPG_GAMECORE_SETFACEDIRECTIONLOCKED_METHOD_3_A6DE2B1D9A690559_OFFSET UNITYSDK_OFFSET(0x1E82A560)
#define RPG_GAMECORE_SETFACEDIRECTIONLOCKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82A5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFaceDirectionLocked_TypeDefinitionIndex = 22450;

	class SetFaceDirectionLocked : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* LockTarget; // 0x20
		::System::Boolean Lock; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFACEDIRECTIONLOCKED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6DE2B1D9A690559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFaceDirectionLocked*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFaceDirectionLocked*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFACEDIRECTIONLOCKED_METHOD_3_A6DE2B1D9A690559_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_65565061BF5D6C0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFaceDirectionLocked* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFaceDirectionLocked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFACEDIRECTIONLOCKED_METHOD_3_65565061BF5D6C0C_OFFSET))(a1, a2);
		}
	};
}
