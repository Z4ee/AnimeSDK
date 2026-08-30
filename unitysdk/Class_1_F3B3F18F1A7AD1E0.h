#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class InflatableFighterPuzzleBoard; }

#define CLASS_1_F3B3F18F1A7AD1E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B446580)
#define CLASS_1_F3B3F18F1A7AD1E0_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B446540)
#define CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B4465D0)
#define CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1B4466B0)
#define CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B446620)
#define CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x1B446720)
#define CLASS_1_F3B3F18F1A7AD1E0_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B446550)
#define CLASS_1_F3B3F18F1A7AD1E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B446560)

inline static constexpr unsigned int Class_1_F3B3F18F1A7AD1E0_TypeDefinitionIndex = 68638;

class Class_1_F3B3F18F1A7AD1E0 : public ::System::Object
{
public:
	static ::Class_1_F3B3F18F1A7AD1E0** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_F3B3F18F1A7AD1E0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3B3F18F1A7AD1E0_TypeDefinitionIndex)->GetStaticField(0x62D60);
	}
	::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x10
	::System::Single PGMIOKKLHIE; // 0x18

	::System::Void _ctor(::RPG::Client::InflatableFighterPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::InflatableFighterPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_F3B3F18F1A7AD1E0* get_Instance()
	{
		return ((::Class_1_F3B3F18F1A7AD1E0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_F3B3F18F1A7AD1E0* a1)
	{
		return ((::System::Void(*)(::Class_1_F3B3F18F1A7AD1E0*))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3B3F18F1A7AD1E0_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}
};
