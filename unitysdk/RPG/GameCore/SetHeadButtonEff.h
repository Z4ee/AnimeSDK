#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETHEADBUTTONEFF_METHOD_3_10E55575C347375D_OFFSET UNITYSDK_OFFSET(0x1D501B40)
#define RPG_GAMECORE_SETHEADBUTTONEFF_METHOD_3_3FC2025C12863CA8_OFFSET UNITYSDK_OFFSET(0x1D501BE0)
#define RPG_GAMECORE_SETHEADBUTTONEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D501BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHeadButtonEff_TypeDefinitionIndex = 22488;

	class SetHeadButtonEff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SelectEffPath; // 0x20
		::System::String* NormalEffPath; // 0x28
		::System::Boolean Active; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHEADBUTTONEFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10E55575C347375D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHeadButtonEff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHeadButtonEff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHEADBUTTONEFF_METHOD_3_10E55575C347375D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FC2025C12863CA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHeadButtonEff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHeadButtonEff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHEADBUTTONEFF_METHOD_3_3FC2025C12863CA8_OFFSET))(a1, a2);
		}
	};
}
