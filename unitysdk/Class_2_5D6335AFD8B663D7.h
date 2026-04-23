#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_5D6335AFD8B663D7_Evaluator;
class Class_2_5D6335AFD8B663D7_FloatEvaluator;
namespace RPG::Client { class MonoValueEvaluateConfigure; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5D6335AFD8B663D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3BE6D0)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_055B57D0803DA902_OFFSET UNITYSDK_OFFSET(0xD3BF0C0)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_265409AA794AF95C_OFFSET UNITYSDK_OFFSET(0xD3BEDE0)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_62C11C9D8C14A72E_OFFSET UNITYSDK_OFFSET(0xD3BE430)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_A595E9781321355B_OFFSET UNITYSDK_OFFSET(0xD3BE2C0)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_B09A41B6E3B92A5B_OFFSET UNITYSDK_OFFSET(0xD3BEEE0)
#define CLASS_2_5D6335AFD8B663D7_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xD3BE620)
#define CLASS_2_5D6335AFD8B663D7_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xD3BED90)
#define CLASS_2_5D6335AFD8B663D7_TICK_OFFSET UNITYSDK_OFFSET(0xD3BE890)
#define CLASS_2_5D6335AFD8B663D7__CTOR_OFFSET UNITYSDK_OFFSET(0xD3BF130)
#define CLASS_2_5D6335AFD8B663D7__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xD3BE560)
#define CLASS_2_5D6335AFD8B663D7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD3BF200)
#define CLASS_2_5D6335AFD8B663D7___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xD3BF1A0)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_TypeDefinitionIndex = 52930;

class Class_2_5D6335AFD8B663D7 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_2_5D6335AFD8B663D7_Evaluator*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_5D6335AFD8B663D7_Evaluator*>* Field_2_2; // 0x20
	::RPG::Client::MonoValueEvaluateConfigure* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A595E9781321355B(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_A595E9781321355B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_265409AA794AF95C(::Class_2_5D6335AFD8B663D7_Evaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D6335AFD8B663D7_Evaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_265409AA794AF95C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09A41B6E3B92A5B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_B09A41B6E3B92A5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_055B57D0803DA902(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_055B57D0803DA902_OFFSET))(this, a1, a2);
	}

	::Class_2_5D6335AFD8B663D7_Evaluator* Method_2_62C11C9D8C14A72E(::System::String* a1)
	{
		return ((::Class_2_5D6335AFD8B663D7_Evaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_62C11C9D8C14A72E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
