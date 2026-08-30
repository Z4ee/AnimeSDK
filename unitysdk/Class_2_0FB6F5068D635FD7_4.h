#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginShape; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB481F50)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0xB481FC0)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_4C2310ED22A12D4F_OFFSET UNITYSDK_OFFSET(0xB4820A0)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xB482110)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_92CDC81783DABA21_OFFSET UNITYSDK_OFFSET(0xB4827F0)
#define CLASS_2_0FB6F5068D635FD7_4_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB481EE0)
#define CLASS_2_0FB6F5068D635FD7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB482F60)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_4_TypeDefinitionIndex = 69865;

class Class_2_0FB6F5068D635FD7_4 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_92CDC81783DABA21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_92CDC81783DABA21_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginShape* Method_2_4C2310ED22A12D4F()
	{
		return ((::RPG::Client::MonoEffectPluginShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_4_METHOD_2_4C2310ED22A12D4F_OFFSET))(this);
	}
};
