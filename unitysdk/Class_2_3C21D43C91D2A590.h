#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginFiveDimFeature; }
namespace RPG::Client { class TriggerEffectParams; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_3C21D43C91D2A590_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC10620)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_11BD81FCD50BB44E_OFFSET UNITYSDK_OFFSET(0xAC10790)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAC106D0)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_45030DA3EF3AEF01_OFFSET UNITYSDK_OFFSET(0xAC10890)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xAC108F0)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xAC105B0)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAC10800)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xAC10850)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC10690)
#define CLASS_2_3C21D43C91D2A590_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xAC10EC0)
#define CLASS_2_3C21D43C91D2A590__CTOR_OFFSET UNITYSDK_OFFSET(0xAC10EB0)
#define CLASS_2_3C21D43C91D2A590___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC10F20)

inline static constexpr unsigned int Class_2_3C21D43C91D2A590_TypeDefinitionIndex = 65330;

class Class_2_3C21D43C91D2A590 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::TriggerEffectParams* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_45030DA3EF3AEF01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_45030DA3EF3AEF01_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginFiveDimFeature* Method_2_11BD81FCD50BB44E()
	{
		return ((::RPG::Client::MonoEffectPluginFiveDimFeature*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_11BD81FCD50BB44E_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C21D43C91D2A590___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
