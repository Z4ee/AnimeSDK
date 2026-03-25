#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginCharaEffectDataTransfer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_12774294CF6D0F2F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1143F550)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_16A23CF7EDF4D607_OFFSET UNITYSDK_OFFSET(0x1143F310)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_7B9BA9105FBB49A2_OFFSET UNITYSDK_OFFSET(0x1143F620)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1143F990)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_A0B822F08B34B978_OFFSET UNITYSDK_OFFSET(0x1143F5C0)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1143F390)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_C7F2CE2141D9DCDA_OFFSET UNITYSDK_OFFSET(0x1143F910)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1143F8D0)
#define CLASS_2_12774294CF6D0F2F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1143F890)
#define CLASS_2_12774294CF6D0F2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1143F980)
#define CLASS_2_12774294CF6D0F2F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1143FA00)

inline static constexpr unsigned int Class_2_12774294CF6D0F2F_TypeDefinitionIndex = 57151;

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

	::System::Void Method_2_A0B822F08B34B978(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_A0B822F08B34B978_OFFSET))(this, a1);
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

	::RPG::Client::MonoEffectPluginCharaEffectDataTransfer* Method_2_C7F2CE2141D9DCDA()
	{
		return ((::RPG::Client::MonoEffectPluginCharaEffectDataTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_C7F2CE2141D9DCDA_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12774294CF6D0F2F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
