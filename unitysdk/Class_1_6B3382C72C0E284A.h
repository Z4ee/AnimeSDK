#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_777F514A924455D9;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B3382C72C0E284A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137C69C0)
#define CLASS_1_6B3382C72C0E284A_METHOD_1_1D551B3CB46ADB7E_OFFSET UNITYSDK_OFFSET(0x137C7000)
#define CLASS_1_6B3382C72C0E284A_METHOD_1_4038EDBE7EF463EC_OFFSET UNITYSDK_OFFSET(0x137C6C10)
#define CLASS_1_6B3382C72C0E284A_METHOD_1_E3741EDB20CE7180_OFFSET UNITYSDK_OFFSET(0x137C7320)
#define CLASS_1_6B3382C72C0E284A__CTOR_OFFSET UNITYSDK_OFFSET(0x137C6920)

inline static constexpr unsigned int Class_1_6B3382C72C0E284A_TypeDefinitionIndex = 57013;

class Class_1_6B3382C72C0E284A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B3382C72C0E284A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B3382C72C0E284A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4038EDBE7EF463EC(::RPG::Client::MapDef* a1, ::Class_1_777F514A924455D9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::Class_1_777F514A924455D9*))((::PBYTE)hIl2Cpp + CLASS_1_6B3382C72C0E284A_METHOD_1_4038EDBE7EF463EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1D551B3CB46ADB7E(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_6B3382C72C0E284A_METHOD_1_1D551B3CB46ADB7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3741EDB20CE7180(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6B3382C72C0E284A_METHOD_1_E3741EDB20CE7180_OFFSET))(this, a1);
	}
};
