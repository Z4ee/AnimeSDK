#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Effect_LiquidPerInsData;
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13865EE0)
#define CLASS_2_0FB6F5068D635FD7_METHOD_2_737EA4D49493CE83_OFFSET UNITYSDK_OFFSET(0x13865E70)
#define CLASS_2_0FB6F5068D635FD7_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x138656E0)
#define CLASS_2_0FB6F5068D635FD7_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x13865670)
#define CLASS_2_0FB6F5068D635FD7_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13865F60)
#define CLASS_2_0FB6F5068D635FD7__CTOR_OFFSET UNITYSDK_OFFSET(0x13865F50)
#define CLASS_2_0FB6F5068D635FD7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13865FC0)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_TypeDefinitionIndex = 44739;

class Class_2_0FB6F5068D635FD7 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_DISPOSE_OFFSET))(this);
	}

	::Effect_LiquidPerInsData* Method_2_737EA4D49493CE83()
	{
		return ((::Effect_LiquidPerInsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_METHOD_2_737EA4D49493CE83_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
