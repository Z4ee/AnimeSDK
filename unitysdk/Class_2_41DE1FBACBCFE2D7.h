#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ObserveMaterialSubmission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_41DE1FBACBCFE2D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB59C0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_1_OFFSET UNITYSDK_OFFSET(0xBEB5EE0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_2_OFFSET UNITYSDK_OFFSET(0xBEB6010)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_OFFSET UNITYSDK_OFFSET(0xBEB5DB0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0xBEB5BB0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0xBEB5A10)
#define CLASS_2_41DE1FBACBCFE2D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEB5B60)
#define CLASS_2_41DE1FBACBCFE2D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEB5D00)
#define CLASS_2_41DE1FBACBCFE2D7_TICK_OFFSET UNITYSDK_OFFSET(0xBEB5D50)
#define CLASS_2_41DE1FBACBCFE2D7__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB5850)

inline static constexpr unsigned int Class_2_41DE1FBACBCFE2D7_TypeDefinitionIndex = 53311;

class Class_2_41DE1FBACBCFE2D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* HPPEGNGGFIL; // 0x18
	::Class_3_07C3C4D2990C49EE* MHKDOBGEEPG; // 0x20
	::Class_3_07C3C4D2990C49EE* EGMGFMKIOHL; // 0x28
	::System::UInt32 NJFKHPIHDEF; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_1BDC75E4AECDDAAE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BDC75E4AECDDAAE_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BDC75E4AECDDAAE_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_2_OFFSET))(this, a1);
	}
};
