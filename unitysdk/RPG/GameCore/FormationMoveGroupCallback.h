#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_METHOD_3_10CC7EC0EA5A30F4_OFFSET UNITYSDK_OFFSET(0x1DCB2930)
#define RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_METHOD_3_370B6673F6A0DA59_OFFSET UNITYSDK_OFFSET(0x1DCB2970)
#define RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB2960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveGroupCallback_TypeDefinitionIndex = 21016;

	class FormationMoveGroupCallback : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupId; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReachCurveEnd; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCurveEndTeleport; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10CC7EC0EA5A30F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveGroupCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveGroupCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_METHOD_3_10CC7EC0EA5A30F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_370B6673F6A0DA59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveGroupCallback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveGroupCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEGROUPCALLBACK_METHOD_3_370B6673F6A0DA59_OFFSET))(a1, a2);
		}
	};
}
