#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_16A256D5A30981C7.h"

class Class_1_08ACCB48C394B420;
class Class_3_1A92845FAFA5EC77;
class Class_3_B942B51FF20C85B4;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_8500236A461133E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9231660)
#define CLASS_2_8500236A461133E1_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x92320D0)
#define CLASS_2_8500236A461133E1_METHOD_2_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x92319B0)
#define CLASS_2_8500236A461133E1_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x9231E70)
#define CLASS_2_8500236A461133E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92316B0)
#define CLASS_2_8500236A461133E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9231FD0)
#define CLASS_2_8500236A461133E1_TICK_OFFSET UNITYSDK_OFFSET(0x9232040)
#define CLASS_2_8500236A461133E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x9232340)
#define CLASS_2_8500236A461133E1__CTOR_OFFSET UNITYSDK_OFFSET(0x9231650)

inline static constexpr unsigned int Class_2_8500236A461133E1_TypeDefinitionIndex = 48767;

class Class_2_8500236A461133E1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::Class_1_08ACCB48C394B420** StaticGet_Field_2_0()
	{
		return (::Class_1_08ACCB48C394B420**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8500236A461133E1_TypeDefinitionIndex)->GetStaticField(0x69D70);
	}
	// static const ::System::Single Field_2_9; // 0x0
	::Class_3_B942B51FF20C85B4* Field_2_2; // 0x18
	::Il2CppArray<::Struct_2_16A256D5A30981C7>* Field_2_8; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::Client::FiveDimTrainModeDisplayInfos* Field_2_11; // 0x30
	::System::String* Field_2_5; // 0x38
	::RPG::Client::FiveDimGameInstance* Field_2_3; // 0x40
	::Class_3_1A92845FAFA5EC77* Field_2_4; // 0x48
	::System::Single Field_2_10; // 0x50
	::System::Int16 Field_2_6; // 0x54
	::System::Int16 Field_2_7; // 0x56

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B942B51FF20C85B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B942B51FF20C85B4*))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_METHOD_2_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8500236A461133E1_METHOD_2_1F130271093617A5_OFFSET))(this);
	}
};
