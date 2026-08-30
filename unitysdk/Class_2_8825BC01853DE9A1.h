#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_2_0748E0E1B406181B;
namespace RPG::GameCore { class AdvPassByValueClientServer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8825BC01853DE9A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180A88B0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_2AFD6FA7434A0B79_OFFSET UNITYSDK_OFFSET(0x180A8C50)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_6F016C535FE4E4D5_OFFSET UNITYSDK_OFFSET(0x180A9CF0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET UNITYSDK_OFFSET(0x180A8B00)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET UNITYSDK_OFFSET(0x180A9AF0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_8A2ED1AADCEE2815_OFFSET UNITYSDK_OFFSET(0x180A8F10)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_C710FBC03021BE64_OFFSET UNITYSDK_OFFSET(0x180A9080)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_CD9438B5B1578E78_OFFSET UNITYSDK_OFFSET(0x180A93A0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_F67D2D6DDFA2FBEA_OFFSET UNITYSDK_OFFSET(0x180A8D70)
#define CLASS_2_8825BC01853DE9A1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180A8A30)
#define CLASS_2_8825BC01853DE9A1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x180A8900)
#define CLASS_2_8825BC01853DE9A1_TICK_OFFSET UNITYSDK_OFFSET(0x180A8D10)
#define CLASS_2_8825BC01853DE9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x180A88A0)

inline static constexpr unsigned int Class_2_8825BC01853DE9A1_TypeDefinitionIndex = 52739;

class Class_2_8825BC01853DE9A1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_0748E0E1B406181B* NMCGNBHEBCL; // 0x18
	::System::String* OMKJJDMNMGJ; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::AdvPassByValueClientServer* OFKGLJOAMLD; // 0x30
	::System::Int16 GMPIIDAOPCA; // 0x38

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

	::System::Object* Method_2_F67D2D6DDFA2FBEA(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_F67D2D6DDFA2FBEA_OFFSET))(this, a1);
	}

	::System::Object* Method_2_8A2ED1AADCEE2815(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_8A2ED1AADCEE2815_OFFSET))(this, a1);
	}

	::System::Object* Method_2_C710FBC03021BE64(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_C710FBC03021BE64_OFFSET))(this, a1);
	}

	::System::Object* Method_2_CD9438B5B1578E78(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_CD9438B5B1578E78_OFFSET))(this, a1, a2);
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
