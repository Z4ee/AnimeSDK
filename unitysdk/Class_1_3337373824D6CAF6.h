#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_2116C04D3AB94F59;
class Class_3_6974676991F6AE7F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3337373824D6CAF6_METHOD_1_7B59FB73E31FD2ED_OFFSET UNITYSDK_OFFSET(0xCF960E0)
#define CLASS_1_3337373824D6CAF6_METHOD_1_8CA41DD48E89C14D_OFFSET UNITYSDK_OFFSET(0xCF96580)
#define CLASS_1_3337373824D6CAF6_METHOD_1_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0xCF96690)
#define CLASS_1_3337373824D6CAF6_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCF96770)
#define CLASS_1_3337373824D6CAF6_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xCF96040)
#define CLASS_1_3337373824D6CAF6_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xCF96090)
#define CLASS_1_3337373824D6CAF6__CTOR_OFFSET UNITYSDK_OFFSET(0xCF96A10)

inline static constexpr unsigned int Class_1_3337373824D6CAF6_TypeDefinitionIndex = 54319;

class Class_1_3337373824D6CAF6 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
	::System::Collections::Generic::List_1<::Class_1_2116C04D3AB94F59*>* CGFBEPNJODL; // 0x18
	::System::Collections::Generic::List_1<::Class_3_6974676991F6AE7F*>* KMABDJAHOEH; // 0x20
	::Il2CppArray<::Class_1_2116C04D3AB94F59*>* HKJLICHEBEO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_7B59FB73E31FD2ED(::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6_METHOD_1_7B59FB73E31FD2ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA41DD48E89C14D(::Class_3_6974676991F6AE7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6974676991F6AE7F*))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6_METHOD_1_8CA41DD48E89C14D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EAE2CFA3709229(::Class_3_6974676991F6AE7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6974676991F6AE7F*))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6_METHOD_1_D9EAE2CFA3709229_OFFSET))(this, a1);
	}

	::System::Void OnFlagStateChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBehaviorFlag a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBehaviorFlag, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3337373824D6CAF6_ONFLAGSTATECHANGE_OFFSET))(this, a1, a2, a3, a4);
	}
};
