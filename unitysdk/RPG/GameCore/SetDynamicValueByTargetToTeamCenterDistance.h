#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F7D20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_METHOD_4_769A5433D3535B91_OFFSET UNITYSDK_OFFSET(0x1D4F7AC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_METHOD_4_A592F69768087CF0_OFFSET UNITYSDK_OFFSET(0x1D4F7B10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTargetToTeamCenterDistance_TypeDefinitionIndex = 22518;

	class SetDynamicValueByTargetToTeamCenterDistance : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean AliveOnly; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_769A5433D3535B91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_METHOD_4_769A5433D3535B91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A592F69768087CF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTargetToTeamCenterDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_METHOD_4_A592F69768087CF0_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTARGETTOTEAMCENTERDISTANCE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
