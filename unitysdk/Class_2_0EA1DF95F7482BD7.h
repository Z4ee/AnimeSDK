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

#define CLASS_2_0EA1DF95F7482BD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9654FC0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x9655260)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x96551E0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x96563F0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9656110)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x9655420)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_66746A96792CE392_OFFSET UNITYSDK_OFFSET(0x9655B10)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x9655D30)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_6C19D4BE6FF4BC99_OFFSET UNITYSDK_OFFSET(0x9655010)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x9655350)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x9655620)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_D59E94A34D44907D_OFFSET UNITYSDK_OFFSET(0x9655900)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_D95535B895BF708F_OFFSET UNITYSDK_OFFSET(0x9656200)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96552F0)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96558B0)
#define CLASS_2_0EA1DF95F7482BD7_TICK_OFFSET UNITYSDK_OFFSET(0x96550E0)
#define CLASS_2_0EA1DF95F7482BD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x9656890)
#define CLASS_2_0EA1DF95F7482BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x9654F30)

inline static constexpr unsigned int Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex = 53872;

class Class_2_0EA1DF95F7482BD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex)->GetStaticField(0x11560);
	}
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* Field_2_0; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0EA1DF95F7482BD7_Class_1_15F432B740DBD622*>* Field_2_2; // 0x28
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::System::Single Field_2_5; // 0x40
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

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_6C19D4BE6FF4BC99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_6C19D4BE6FF4BC99_OFFSET))(this);
	}

	::System::Void Method_2_D59E94A34D44907D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_D59E94A34D44907D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66746A96792CE392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_66746A96792CE392_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_6747250BC2D13457_OFFSET))(this);
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

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_D95535B895BF708F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_D95535B895BF708F_OFFSET))(this);
	}
};
