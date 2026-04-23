#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginAnim; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_219C6B7EFA362B5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98DED20)
#define CLASS_2_219C6B7EFA362B5C_METHOD_2_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x98DED90)
#define CLASS_2_219C6B7EFA362B5C_METHOD_2_784E294A8B3F080C_OFFSET UNITYSDK_OFFSET(0x98DF2A0)
#define CLASS_2_219C6B7EFA362B5C_METHOD_2_8E1B1C285587B17C_OFFSET UNITYSDK_OFFSET(0x98DF230)
#define CLASS_2_219C6B7EFA362B5C_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x98DF4D0)
#define CLASS_2_219C6B7EFA362B5C_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x98DECB0)
#define CLASS_2_219C6B7EFA362B5C__CTOR_OFFSET UNITYSDK_OFFSET(0x98DF4C0)
#define CLASS_2_219C6B7EFA362B5C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98DF540)

inline static constexpr unsigned int Class_2_219C6B7EFA362B5C_TypeDefinitionIndex = 64391;

class Class_2_219C6B7EFA362B5C : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C_METHOD_2_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_2_784E294A8B3F080C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C_METHOD_2_784E294A8B3F080C_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginAnim* Method_2_8E1B1C285587B17C()
	{
		return ((::RPG::Client::MonoEffectPluginAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C_METHOD_2_8E1B1C285587B17C_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_219C6B7EFA362B5C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
