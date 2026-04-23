#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoBackDynamicControl; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_DD4A8FEB158CD861_METHOD_2_18B2DEFFBF2A6F7C_OFFSET UNITYSDK_OFFSET(0x124A42B0)
#define CLASS_2_DD4A8FEB158CD861_METHOD_2_222E4FFAEAAFF5F7_OFFSET UNITYSDK_OFFSET(0x124A5DF0)
#define CLASS_2_DD4A8FEB158CD861_METHOD_2_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0x124A5E60)
#define CLASS_2_DD4A8FEB158CD861_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x124A4CC0)
#define CLASS_2_DD4A8FEB158CD861_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x124A5EA0)
#define CLASS_2_DD4A8FEB158CD861_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124A4C80)
#define CLASS_2_DD4A8FEB158CD861_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x124A4330)
#define CLASS_2_DD4A8FEB158CD861__CTOR_OFFSET UNITYSDK_OFFSET(0x124A5E90)

inline static constexpr unsigned int Class_2_DD4A8FEB158CD861_TypeDefinitionIndex = 64869;

class Class_2_DD4A8FEB158CD861 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_3; // 0x18
	::System::Single Field_2_0; // 0x1C
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_18B2DEFFBF2A6F7C(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_18B2DEFFBF2A6F7C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Single Method_2_431B41F82025C3EE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_431B41F82025C3EE_OFFSET))(this);
	}

	::RPG::Client::MonoBackDynamicControl* Method_2_222E4FFAEAAFF5F7()
	{
		return ((::RPG::Client::MonoBackDynamicControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_222E4FFAEAAFF5F7_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DD4A8FEB158CD861_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
