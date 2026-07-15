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

#define CLASS_2_ECFE369993AEEF11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152378B0)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_39A444F69D3AA07E_OFFSET UNITYSDK_OFFSET(0x15235E60)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_55304E8C404EC03A_OFFSET UNITYSDK_OFFSET(0x15237930)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_6E98250C115AC456_OFFSET UNITYSDK_OFFSET(0x15237F70)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x15235EE0)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_E824431C22EF9361_1_OFFSET UNITYSDK_OFFSET(0x15238800)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x15238490)
#define CLASS_2_ECFE369993AEEF11_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0x15237BD0)
#define CLASS_2_ECFE369993AEEF11__CCTOR_OFFSET UNITYSDK_OFFSET(0x152391E0)
#define CLASS_2_ECFE369993AEEF11__CTOR_OFFSET UNITYSDK_OFFSET(0x152391D0)

inline static constexpr unsigned int Class_2_ECFE369993AEEF11_TypeDefinitionIndex = 66729;

class Class_2_ECFE369993AEEF11 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ECFE369993AEEF11_TypeDefinitionIndex)->GetStaticField(0x13260);
	}
	::System::Collections::Generic::List_1<::Class_2_ECFE369993AEEF11_Class_1_64797359E139FAEF*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_ECFE369993AEEF11_Class_1_DC1725B707DAACCF*>* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::RPG::Client::CharacterEffect* Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38

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
