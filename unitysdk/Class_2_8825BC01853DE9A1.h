#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_2_0748E0E1B406181B;
namespace RPG::GameCore { class AdvPassByValueClientServer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8825BC01853DE9A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E99D0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_228BD3246DD480F3_OFFSET UNITYSDK_OFFSET(0x157E9E90)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_2AFD6FA7434A0B79_OFFSET UNITYSDK_OFFSET(0x157E9D70)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_6F016C535FE4E4D5_OFFSET UNITYSDK_OFFSET(0x157EAE10)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET UNITYSDK_OFFSET(0x157E9C20)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET UNITYSDK_OFFSET(0x157EAC10)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_C8E0FC6555E62AED_OFFSET UNITYSDK_OFFSET(0x157EA200)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_DF5CE1528854494C_OFFSET UNITYSDK_OFFSET(0x157EA060)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_FB06DA4123960821_OFFSET UNITYSDK_OFFSET(0x157EA4F0)
#define CLASS_2_8825BC01853DE9A1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E9B50)
#define CLASS_2_8825BC01853DE9A1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157E9A20)
#define CLASS_2_8825BC01853DE9A1_TICK_OFFSET UNITYSDK_OFFSET(0x157E9E30)
#define CLASS_2_8825BC01853DE9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x157E99C0)

inline static constexpr unsigned int Class_2_8825BC01853DE9A1_TypeDefinitionIndex = 50077;

class Class_2_8825BC01853DE9A1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvPassByValueClientServer* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::Class_2_0748E0E1B406181B* Field_2_3; // 0x30
	::System::Int16 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientServer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientServer*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_TICK_OFFSET))(this, a1);
	}

	::System::Object* Method_2_228BD3246DD480F3(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_228BD3246DD480F3_OFFSET))(this, a1);
	}

	::System::Object* Method_2_DF5CE1528854494C(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_DF5CE1528854494C_OFFSET))(this, a1);
	}

	::System::Object* Method_2_C8E0FC6555E62AED(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_C8E0FC6555E62AED_OFFSET))(this, a1);
	}

	::System::Object* Method_2_FB06DA4123960821(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_FB06DA4123960821_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_2_7E361E90E40EE74F(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET))(this, a1);
	}

	::System::Void Method_2_85009DD6D248C787(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskState Method_2_6F016C535FE4E4D5(::System::String* a1, ::System::Object* a2)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_6F016C535FE4E4D5_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskState Method_2_2AFD6FA7434A0B79(::System::String* a1, ::System::Object* a2)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_2AFD6FA7434A0B79_OFFSET))(this, a1, a2);
	}
};
