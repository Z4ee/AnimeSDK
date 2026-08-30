#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_2_ECFE369993AEEF11_Class_1_64797359E139FAEF;
class Class_2_ECFE369993AEEF11_Class_1_DC1725B707DAACCF;
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginBodyAlchemize; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_ECFE369993AEEF11_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA39860)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_39A444F69D3AA07E_OFFSET UNITYSDK_OFFSET(0xBA37E70)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_55304E8C404EC03A_OFFSET UNITYSDK_OFFSET(0xBA398E0)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_6E98250C115AC456_OFFSET UNITYSDK_OFFSET(0xBA39F20)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xBA37EF0)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_E824431C22EF9361_1_OFFSET UNITYSDK_OFFSET(0xBA3A7B0)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0xBA3A440)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0xBA39B80)
#define CLASS_2_ECFE369993AEEF11__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA3B190)
#define CLASS_2_ECFE369993AEEF11__CTOR_OFFSET UNITYSDK_OFFSET(0xBA3B180)

inline static constexpr unsigned int Class_2_ECFE369993AEEF11_TypeDefinitionIndex = 69831;

class Class_2_ECFE369993AEEF11 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_BMMGDMANOFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ECFE369993AEEF11_TypeDefinitionIndex)->GetStaticField(0x10670);
	}
	::System::Collections::Generic::List_1<::Class_2_ECFE369993AEEF11_Class_1_64797359E139FAEF*>* AINDJAFODHB; // 0x18
	::System::Collections::Generic::List_1<::Class_2_ECFE369993AEEF11_Class_1_DC1725B707DAACCF*>* CFDDPCELHLG; // 0x20
	::RPG::Client::CharacterEffect* HAHKDGACPIL; // 0x28
	::UnityEngine::Transform* FLDGNOBDJOO; // 0x30
	::System::Boolean LBPLJDLJOEO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11__CCTOR_OFFSET))();
	}

	::System::Void Method_2_39A444F69D3AA07E(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_39A444F69D3AA07E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_2_E824431C22EF9361_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_E824431C22EF9361_1_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_55304E8C404EC03A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_55304E8C404EC03A_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginBodyAlchemize* Method_2_6E98250C115AC456()
	{
		return ((::RPG::Client::MonoEffectPluginBodyAlchemize*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFE369993AEEF11_METHOD_2_6E98250C115AC456_OFFSET))(this);
	}
};
