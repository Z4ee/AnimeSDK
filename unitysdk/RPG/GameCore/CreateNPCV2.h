#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class NpcEntityInfo; }

#define RPG_GAMECORE_CREATENPCV2_METHOD_3_E8FD5175F42673EF_OFFSET UNITYSDK_OFFSET(0x1D9BF330)
#define RPG_GAMECORE_CREATENPCV2_METHOD_3_EE10AA246B5B377E_OFFSET UNITYSDK_OFFSET(0x1D9BF2F0)
#define RPG_GAMECORE_CREATENPCV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BF320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateNPCV2_TypeDefinitionIndex = 21697;

	class CreateNPCV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::RPG::GameCore::DynamicString* NPCUniqueName; // 0x28
		::RPG::GameCore::DynamicString* DefaultIdleStateName; // 0x30
		::Il2CppArray<::RPG::GameCore::NpcEntityInfo*>* CreateList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE10AA246B5B377E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPCV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPCV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCV2_METHOD_3_EE10AA246B5B377E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8FD5175F42673EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPCV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPCV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCV2_METHOD_3_E8FD5175F42673EF_OFFSET))(a1, a2);
		}
	};
}
