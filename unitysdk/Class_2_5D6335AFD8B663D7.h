#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_5D6335AFD8B663D7_Evaluator;
class Class_2_5D6335AFD8B663D7_FloatEvaluator;
namespace RPG::Client { class MonoValueEvaluateConfigure; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5D6335AFD8B663D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16263E10)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_055B57D0803DA902_OFFSET UNITYSDK_OFFSET(0x16264930)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_5A5AA8632A690799_OFFSET UNITYSDK_OFFSET(0x16264600)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_99AE5714D06716BB_OFFSET UNITYSDK_OFFSET(0x16263A40)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_A595E9781321355B_OFFSET UNITYSDK_OFFSET(0x16263960)
#define CLASS_2_5D6335AFD8B663D7_METHOD_2_FD805D0DD73EB169_OFFSET UNITYSDK_OFFSET(0x162646D0)
#define CLASS_2_5D6335AFD8B663D7_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x16263D80)
#define CLASS_2_5D6335AFD8B663D7_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x162645B0)
#define CLASS_2_5D6335AFD8B663D7_TICK_OFFSET UNITYSDK_OFFSET(0x16264010)
#define CLASS_2_5D6335AFD8B663D7__CTOR_OFFSET UNITYSDK_OFFSET(0x162649A0)
#define CLASS_2_5D6335AFD8B663D7__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16263CC0)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_TypeDefinitionIndex = 57579;

class Class_2_5D6335AFD8B663D7 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_2_5D6335AFD8B663D7_Evaluator*>* PEANBBFBKHA; // 0x18
	::RPG::Client::MonoValueEvaluateConfigure* CEPGFGIOMDB; // 0x20
	::System::Collections::Generic::List_1<::Class_2_5D6335AFD8B663D7_Evaluator*>* FJKHBIMOACG; // 0x28

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

	::System::Void Method_2_5A5AA8632A690799(::Class_2_5D6335AFD8B663D7_Evaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D6335AFD8B663D7_Evaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_5A5AA8632A690799_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD805D0DD73EB169(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_FD805D0DD73EB169_OFFSET))(this, a1);
	}

	::System::Void Method_2_055B57D0803DA902(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_055B57D0803DA902_OFFSET))(this, a1, a2);
	}

	::Class_2_5D6335AFD8B663D7_Evaluator* Method_2_99AE5714D06716BB(::System::String* a1)
	{
		return ((::Class_2_5D6335AFD8B663D7_Evaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_METHOD_2_99AE5714D06716BB_OFFSET))(this, a1);
	}
};
