#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_2_D8257A310CAD757C;
namespace RPG::GameCore { class AdvPassByValueClientServer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8825BC01853DE9A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x872AE80)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_44A2B4746E36CD5D_OFFSET UNITYSDK_OFFSET(0x872B200)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_5550820E72BB3B13_OFFSET UNITYSDK_OFFSET(0x872C0A0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_57218037E49F4670_OFFSET UNITYSDK_OFFSET(0x872B940)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET UNITYSDK_OFFSET(0x872B0C0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET UNITYSDK_OFFSET(0x872BEB0)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_C8E0FC6555E62AED_OFFSET UNITYSDK_OFFSET(0x872B690)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_CD803B639C5DF028_OFFSET UNITYSDK_OFFSET(0x872B320)
#define CLASS_2_8825BC01853DE9A1_METHOD_2_DF5CE1528854494C_OFFSET UNITYSDK_OFFSET(0x872B4F0)
#define CLASS_2_8825BC01853DE9A1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x872AFF0)
#define CLASS_2_8825BC01853DE9A1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x872AED0)
#define CLASS_2_8825BC01853DE9A1_TICK_OFFSET UNITYSDK_OFFSET(0x872B2C0)
#define CLASS_2_8825BC01853DE9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x872AE70)

inline static constexpr unsigned int Class_2_8825BC01853DE9A1_TypeDefinitionIndex = 42477;

class Class_2_8825BC01853DE9A1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::String* Field_2_3; // 0x20
	::Class_2_D8257A310CAD757C* Field_2_2; // 0x28
	::RPG::GameCore::AdvPassByValueClientServer* Field_2_1; // 0x30
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

	::System::Object* Method_2_CD803B639C5DF028(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_CD803B639C5DF028_OFFSET))(this, a1);
	}

	::System::Object* Method_2_DF5CE1528854494C(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_DF5CE1528854494C_OFFSET))(this, a1);
	}

	::System::Object* Method_2_C8E0FC6555E62AED(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_C8E0FC6555E62AED_OFFSET))(this, a1);
	}

	::System::Object* Method_2_57218037E49F4670(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_57218037E49F4670_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_2_7E361E90E40EE74F(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_7E361E90E40EE74F_OFFSET))(this, a1);
	}

	::System::Void Method_2_85009DD6D248C787(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_85009DD6D248C787_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskState Method_2_5550820E72BB3B13(::System::String* a1, ::System::Object* a2)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_5550820E72BB3B13_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TaskState Method_2_44A2B4746E36CD5D(::System::String* a1, ::System::Object* a2)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8825BC01853DE9A1_METHOD_2_44A2B4746E36CD5D_OFFSET))(this, a1, a2);
	}
};
