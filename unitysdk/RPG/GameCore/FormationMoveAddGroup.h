#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationMoveMemberInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATIONMOVEADDGROUP_METHOD_3_3FB73780301277BD_OFFSET UNITYSDK_OFFSET(0x1BEC0790)
#define RPG_GAMECORE_FORMATIONMOVEADDGROUP_METHOD_3_93509CD8352229F8_OFFSET UNITYSDK_OFFSET(0x1BEC0750)
#define RPG_GAMECORE_FORMATIONMOVEADDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC0780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveAddGroup_TypeDefinitionIndex = 20458;

	class FormationMoveAddGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::String* Pattern; // 0x20
		::Il2CppArray<::RPG::GameCore::FormationMoveMemberInfo*>* Members; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93509CD8352229F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveAddGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveAddGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDGROUP_METHOD_3_93509CD8352229F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FB73780301277BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveAddGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveAddGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVEADDGROUP_METHOD_3_3FB73780301277BD_OFFSET))(a1, a2);
		}
	};
}
