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

#define CLASS_2_0EA1DF95F7482BD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FCB7E0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x19FCB830)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x19FCBAC0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x19FCBA40)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x19FCCD70)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x19FCCAA0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x19FCBCC0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_68E1ED295509CE71_OFFSET UNITYSDK_OFFSET(0x19FCC250)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_6FECEF220D41E8B2_OFFSET UNITYSDK_OFFSET(0x19FCC460)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x19FCBBB0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x19FCBEA0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x19FCCB90)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x19FCC670)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19FCBB50)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19FCC200)
#define CLASS_2_0EA1DF95F7482BD7_TICK_OFFSET UNITYSDK_OFFSET(0x19FCB940)
#define CLASS_2_0EA1DF95F7482BD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FCD200)
#define CLASS_2_0EA1DF95F7482BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCB750)

inline static constexpr unsigned int Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex = 58588;

class Class_2_0EA1DF95F7482BD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_HOEBEBCBIBM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex)->GetStaticField(0x9630);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* DCKMBGHLHEH; // 0x18
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* OFKGLJOAMLD; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0EA1DF95F7482BD7_Class_1_15F432B740DBD622*>* LFCDPCNECEL; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate* JILGFHGMAAC; // 0x38
	::System::Single JPMHMKAMPBA; // 0x40
	::System::Single ILENDFMOAAF; // 0x44

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

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
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

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_FD647A48096EB173_OFFSET))(this);
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

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_937F8473216A3162_OFFSET))(this);
	}
};
