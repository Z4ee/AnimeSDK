#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_777F514A924455D9;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BF0EF699B86CAEE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FFF9A0)
#define CLASS_1_BF0EF699B86CAEE8_METHOD_1_4252AFE228533807_OFFSET UNITYSDK_OFFSET(0x16000310)
#define CLASS_1_BF0EF699B86CAEE8_METHOD_1_94E44A04FC44BA65_OFFSET UNITYSDK_OFFSET(0x15FFFC90)
#define CLASS_1_BF0EF699B86CAEE8_METHOD_1_E3741EDB20CE7180_OFFSET UNITYSDK_OFFSET(0x160006C0)
#define CLASS_1_BF0EF699B86CAEE8__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFF900)

inline static constexpr unsigned int Class_1_BF0EF699B86CAEE8_TypeDefinitionIndex = 58260;

class Class_1_BF0EF699B86CAEE8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF0EF699B86CAEE8__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF0EF699B86CAEE8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_94E44A04FC44BA65(::RPG::Client::MapDef* a1, ::Class_1_777F514A924455D9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::Class_1_777F514A924455D9*))((::PBYTE)hIl2Cpp + CLASS_1_BF0EF699B86CAEE8_METHOD_1_94E44A04FC44BA65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4252AFE228533807(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BF0EF699B86CAEE8_METHOD_1_4252AFE228533807_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3741EDB20CE7180(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF0EF699B86CAEE8_METHOD_1_E3741EDB20CE7180_OFFSET))(this, a1);
	}
};
