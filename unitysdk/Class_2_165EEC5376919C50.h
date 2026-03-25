#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_16A256D5A30981C7.h"

class Class_1_08ACCB48C394B420;
class Class_3_1A92845FAFA5EC77;
class Class_3_F9B1A966737DB03F;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_165EEC5376919C50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9796F50)
#define CLASS_2_165EEC5376919C50_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x97978F0)
#define CLASS_2_165EEC5376919C50_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x9797260)
#define CLASS_2_165EEC5376919C50_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x97976C0)
#define CLASS_2_165EEC5376919C50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9796FA0)
#define CLASS_2_165EEC5376919C50_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9797800)
#define CLASS_2_165EEC5376919C50_TICK_OFFSET UNITYSDK_OFFSET(0x9797860)
#define CLASS_2_165EEC5376919C50__CCTOR_OFFSET UNITYSDK_OFFSET(0x9797B60)
#define CLASS_2_165EEC5376919C50__CTOR_OFFSET UNITYSDK_OFFSET(0x9796F40)

inline static constexpr unsigned int Class_2_165EEC5376919C50_TypeDefinitionIndex = 42785;

class Class_2_165EEC5376919C50 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::Class_1_08ACCB48C394B420** StaticGet_Field_2_0()
	{
		return (::Class_1_08ACCB48C394B420**)Il2CppClass::FromTypeDefinitionIndex(Class_2_165EEC5376919C50_TypeDefinitionIndex)->GetStaticField(0x459A0);
	}
	// static const ::System::Single Field_2_9; // 0x0
	::RPG::Client::FiveDimTrainModeDisplayInfos* Field_2_11; // 0x18
	::Il2CppArray<::Struct_2_16A256D5A30981C7>* Field_2_8; // 0x20
	::RPG::Client::FiveDimGameInstance* Field_2_3; // 0x28
	::Class_3_1A92845FAFA5EC77* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::Class_3_F9B1A966737DB03F* Field_2_2; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::System::Int16 Field_2_6; // 0x50
	::System::Int16 Field_2_7; // 0x52
	::System::Single Field_2_10; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F9B1A966737DB03F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F9B1A966737DB03F*))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_165EEC5376919C50_METHOD_2_1F130271093617A5_OFFSET))(this);
	}
};
