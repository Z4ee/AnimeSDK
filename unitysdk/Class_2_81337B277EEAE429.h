#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_81337B277EEAE429_Evaluator;
class Class_2_81337B277EEAE429_FloatEvaluator;
namespace RPG::Client { class MonoValueEvaluateConfigure; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_81337B277EEAE429_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142CFB10)
#define CLASS_2_81337B277EEAE429_METHOD_2_04869EF5C6E7E040_OFFSET UNITYSDK_OFFSET(0x142CF600)
#define CLASS_2_81337B277EEAE429_METHOD_2_055B57D0803DA902_OFFSET UNITYSDK_OFFSET(0x142D05D0)
#define CLASS_2_81337B277EEAE429_METHOD_2_29A459CF728F120F_OFFSET UNITYSDK_OFFSET(0x142D0250)
#define CLASS_2_81337B277EEAE429_METHOD_2_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x142D03B0)
#define CLASS_2_81337B277EEAE429_METHOD_2_99AE5714D06716BB_OFFSET UNITYSDK_OFFSET(0x142CF780)
#define CLASS_2_81337B277EEAE429_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x142CFA60)
#define CLASS_2_81337B277EEAE429_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x142D0200)
#define CLASS_2_81337B277EEAE429_TICK_OFFSET UNITYSDK_OFFSET(0x142CFCA0)
#define CLASS_2_81337B277EEAE429__CTOR_OFFSET UNITYSDK_OFFSET(0x142D0640)
#define CLASS_2_81337B277EEAE429__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x142CF9A0)
#define CLASS_2_81337B277EEAE429___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x142D0710)
#define CLASS_2_81337B277EEAE429___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x142D06B0)

inline static constexpr unsigned int Class_2_81337B277EEAE429_TypeDefinitionIndex = 53639;

class Class_2_81337B277EEAE429 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_2_81337B277EEAE429_Evaluator*>* Field_2_0; // 0x18
	::RPG::Client::MonoValueEvaluateConfigure* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_81337B277EEAE429_Evaluator*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_04869EF5C6E7E040(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_METHOD_2_04869EF5C6E7E040_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_TICK_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_29A459CF728F120F(::Class_2_81337B277EEAE429_Evaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_81337B277EEAE429_Evaluator*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_METHOD_2_29A459CF728F120F_OFFSET))(this, a1);
	}

	::System::Void Method_2_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_METHOD_2_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_055B57D0803DA902(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_METHOD_2_055B57D0803DA902_OFFSET))(this, a1, a2);
	}

	::Class_2_81337B277EEAE429_Evaluator* Method_2_99AE5714D06716BB(::System::String* a1)
	{
		return ((::Class_2_81337B277EEAE429_Evaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_METHOD_2_99AE5714D06716BB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
