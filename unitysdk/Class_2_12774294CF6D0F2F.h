#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginCharaEffectDataTransfer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_12774294CF6D0F2F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164645B0)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_16A23CF7EDF4D607_OFFSET UNITYSDK_OFFSET(0x16464390)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_1A9B32C6455CCA3F_OFFSET UNITYSDK_OFFSET(0x16464910)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_7B6578CAB197798E_OFFSET UNITYSDK_OFFSET(0x16464620)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_7B9BA9105FBB49A2_OFFSET UNITYSDK_OFFSET(0x16464680)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x16464410)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x164648D0)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16464890)
#define CLASS_2_12774294CF6D0F2F__CTOR_OFFSET UNITYSDK_OFFSET(0x16464960)

inline static constexpr unsigned int Class_2_12774294CF6D0F2F_TypeDefinitionIndex = 66733;

class Class_2_12774294CF6D0F2F : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::CharacterEffect* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_16A23CF7EDF4D607(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_16A23CF7EDF4D607_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7B6578CAB197798E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_7B6578CAB197798E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_7B9BA9105FBB49A2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_7B9BA9105FBB49A2_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginCharaEffectDataTransfer* Method_2_1A9B32C6455CCA3F()
	{
		return ((::RPG::Client::MonoEffectPluginCharaEffectDataTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_1A9B32C6455CCA3F_OFFSET))(this);
	}
};
