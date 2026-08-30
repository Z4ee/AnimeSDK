#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class NpcEntityInfo; }

#define RPG_GAMECORE_CREATENPC_METHOD_3_283642EFAAAE8C92_OFFSET UNITYSDK_OFFSET(0x1D0083D0)
#define RPG_GAMECORE_CREATENPC_METHOD_3_D243C2FC950007EB_OFFSET UNITYSDK_OFFSET(0x1D008410)
#define RPG_GAMECORE_CREATENPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D008400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateNPC_TypeDefinitionIndex = 21696;

	class CreateNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::RPG::GameCore::DynamicString* NPCUniqueName; // 0x28
		::RPG::GameCore::DynamicString* DefaultIdleStateName; // 0x30
		::Il2CppArray<::RPG::GameCore::NpcEntityInfo*>* CreateList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_283642EFAAAE8C92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPC_METHOD_3_283642EFAAAE8C92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D243C2FC950007EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPC_METHOD_3_D243C2FC950007EB_OFFSET))(a1, a2);
		}
	};
}
