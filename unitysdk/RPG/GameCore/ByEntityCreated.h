#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_01173AA443286B0E_OFFSET UNITYSDK_OFFSET(0x1CF195B0)
#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_11612723C649E99F_OFFSET UNITYSDK_OFFSET(0x1CF19570)
#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_96A6C328835FC39A_OFFSET UNITYSDK_OFFSET(0x1CF19740)
#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_E283ECEA894AC17D_OFFSET UNITYSDK_OFFSET(0x1CF19770)
#define RPG_GAMECORE_BYENTITYCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF195A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityCreated_TypeDefinitionIndex = 20488;

	class ByEntityCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_11612723C649E99F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_11612723C649E99F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01173AA443286B0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_01173AA443286B0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96A6C328835FC39A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_96A6C328835FC39A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E283ECEA894AC17D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_E283ECEA894AC17D_OFFSET))(a1, a2);
		}
	};
}
