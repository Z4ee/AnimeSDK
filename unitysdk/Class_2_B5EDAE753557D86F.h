#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_B5EDAE753557D86F_Evaluator;
class Class_2_B5EDAE753557D86F_FloatEvaluator;
namespace RPG::Client { class MonoValueEvaluateConfigure; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B5EDAE753557D86F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8951150)
#define CLASS_2_B5EDAE753557D86F_METHOD_2_055B57D0803DA902_OFFSET UNITYSDK_OFFSET(0x8951B10)
#define CLASS_2_B5EDAE753557D86F_METHOD_2_50F3FC3D8DC37135_OFFSET UNITYSDK_OFFSET(0x8950DB0)
#define CLASS_2_B5EDAE753557D86F_METHOD_2_6FCEFC8CCF37FB13_OFFSET UNITYSDK_OFFSET(0x8951890)
#define CLASS_2_B5EDAE753557D86F_METHOD_2_F58F2AAE70892658_OFFSET UNITYSDK_OFFSET(0x8951960)
#define CLASS_2_B5EDAE753557D86F_METHOD_2_F695BE559F63FA52_OFFSET UNITYSDK_OFFSET(0x8950C70)
#define CLASS_2_B5EDAE753557D86F_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x89510C0)
#define CLASS_2_B5EDAE753557D86F_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x8951840)
#define CLASS_2_B5EDAE753557D86F_TICK_OFFSET UNITYSDK_OFFSET(0x89512E0)
#define CLASS_2_B5EDAE753557D86F__CTOR_OFFSET UNITYSDK_OFFSET(0x8951B80)
#define CLASS_2_B5EDAE753557D86F__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8950F80)
#define CLASS_2_B5EDAE753557D86F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8951C40)
#define CLASS_2_B5EDAE753557D86F___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8951BE0)

inline static constexpr unsigned int Class_2_B5EDAE753557D86F_TypeDefinitionIndex = 46264;

class Class_2_B5EDAE753557D86F : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_2_B5EDAE753557D86F_Evaluator*>* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_B5EDAE753557D86F_Evaluator*>* Field_2_1; // 0x20
	::RPG::Client::MonoValueEvaluateConfigure* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F695BE559F63FA52(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_METHOD_2_F695BE559F63FA52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_6FCEFC8CCF37FB13(::Class_2_B5EDAE753557D86F_Evaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B5EDAE753557D86F_Evaluator*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_METHOD_2_6FCEFC8CCF37FB13_OFFSET))(this, a1);
	}

	::System::Void Method_2_F58F2AAE70892658(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_METHOD_2_F58F2AAE70892658_OFFSET))(this, a1);
	}

	::System::Void Method_2_055B57D0803DA902(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_METHOD_2_055B57D0803DA902_OFFSET))(this, a1, a2);
	}

	::Class_2_B5EDAE753557D86F_Evaluator* Method_2_50F3FC3D8DC37135(::System::String* a1)
	{
		return ((::Class_2_B5EDAE753557D86F_Evaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_METHOD_2_50F3FC3D8DC37135_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
