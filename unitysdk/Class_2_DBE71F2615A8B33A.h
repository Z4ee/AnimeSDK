#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_16A256D5A30981C7.h"

class Class_1_08ACCB48C394B420;
class Class_3_1E4F9B0ED3BF21DE;
class Class_3_B942B51FF20C85B4;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_DBE71F2615A8B33A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6FFB50)
#define CLASS_2_DBE71F2615A8B33A_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xA700550)
#define CLASS_2_DBE71F2615A8B33A_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xA6FFEA0)
#define CLASS_2_DBE71F2615A8B33A_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA7002F0)
#define CLASS_2_DBE71F2615A8B33A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6FFBA0)
#define CLASS_2_DBE71F2615A8B33A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA700450)
#define CLASS_2_DBE71F2615A8B33A_TICK_OFFSET UNITYSDK_OFFSET(0xA7004C0)
#define CLASS_2_DBE71F2615A8B33A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA700790)
#define CLASS_2_DBE71F2615A8B33A__CTOR_OFFSET UNITYSDK_OFFSET(0xA6FFB40)

inline static constexpr unsigned int Class_2_DBE71F2615A8B33A_TypeDefinitionIndex = 49433;

class Class_2_DBE71F2615A8B33A : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::Class_1_08ACCB48C394B420** StaticGet_Field_2_0()
	{
		return (::Class_1_08ACCB48C394B420**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DBE71F2615A8B33A_TypeDefinitionIndex)->GetStaticField(0x5B0B0);
	}
	// static const ::System::Single Field_2_1; // 0x0
	::System::String* Field_2_2; // 0x18
	::Il2CppArray<::Struct_2_16A256D5A30981C7>* Field_2_3; // 0x20
	::RPG::Client::FiveDimGameInstance* Field_2_4; // 0x28
	::Class_3_B942B51FF20C85B4* Field_2_5; // 0x30
	::Class_3_1E4F9B0ED3BF21DE* Field_2_6; // 0x38
	::RPG::Client::FiveDimTrainModeDisplayInfos* Field_2_7; // 0x40
	::RPG::GameCore::TaskContext* Field_2_8; // 0x48
	::System::Single Field_2_9; // 0x50
	::System::Int16 Field_2_10; // 0x54
	::System::Int16 Field_2_11; // 0x56

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B942B51FF20C85B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B942B51FF20C85B4*))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_METHOD_2_1F130271093617A5_OFFSET))(this);
	}
};
