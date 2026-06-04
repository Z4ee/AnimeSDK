#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_0EA1DF95F7482BD7_Class_1_15F432B740DBD622;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupProcess; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0EA1DF95F7482BD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13682570)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x13682C30)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x13682850)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x136827D0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x13683A00)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13683730)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x13682A50)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_68E1ED295509CE71_OFFSET UNITYSDK_OFFSET(0x13682F60)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_6FECEF220D41E8B2_OFFSET UNITYSDK_OFFSET(0x13683170)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x13682940)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x13683820)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_9F5F82931219A5DF_OFFSET UNITYSDK_OFFSET(0x136825C0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x13683380)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136828E0)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13682F10)
#define CLASS_2_0EA1DF95F7482BD7_TICK_OFFSET UNITYSDK_OFFSET(0x136826D0)
#define CLASS_2_0EA1DF95F7482BD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x13683E90)
#define CLASS_2_0EA1DF95F7482BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x136824E0)

inline static constexpr unsigned int Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex = 54597;

class Class_2_0EA1DF95F7482BD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex)->GetStaticField(0x9D10);
	}
	::System::Collections::Generic::List_1<::Class_2_0EA1DF95F7482BD7_Class_1_15F432B740DBD622*>* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x30
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* Field_2_5; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_7; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_2_9F5F82931219A5DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_9F5F82931219A5DF_OFFSET))(this);
	}

	::System::Void Method_2_68E1ED295509CE71(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_68E1ED295509CE71_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FECEF220D41E8B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_6FECEF220D41E8B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_937F8473216A3162_OFFSET))(this);
	}
};
