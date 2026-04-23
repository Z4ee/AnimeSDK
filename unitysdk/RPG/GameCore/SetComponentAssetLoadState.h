#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_METHOD_3_98D242F9951D9DCD_OFFSET UNITYSDK_OFFSET(0x18E12E70)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_METHOD_3_C13BB6FF481F2F85_OFFSET UNITYSDK_OFFSET(0x18E12F50)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E12EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetLoadState_TypeDefinitionIndex = 21716;

	class SetComponentAssetLoadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Load; // 0x20
		::System::Int32 LoadIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98D242F9951D9DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComponentAssetLoadState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComponentAssetLoadState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_METHOD_3_98D242F9951D9DCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C13BB6FF481F2F85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComponentAssetLoadState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComponentAssetLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_METHOD_3_C13BB6FF481F2F85_OFFSET))(a1, a2);
		}
	};
}
