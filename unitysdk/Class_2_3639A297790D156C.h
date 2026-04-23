#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class ConsumeOrigamiItem; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_3639A297790D156C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9830300)
#define CLASS_2_3639A297790D156C_METHOD_2_21AFFD96111DC5FA_OFFSET UNITYSDK_OFFSET(0x9830CC0)
#define CLASS_2_3639A297790D156C_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x98305C0)
#define CLASS_2_3639A297790D156C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x9830F70)
#define CLASS_2_3639A297790D156C_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x9830B20)
#define CLASS_2_3639A297790D156C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9830AD0)
#define CLASS_2_3639A297790D156C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9830440)
#define CLASS_2_3639A297790D156C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98308B0)
#define CLASS_2_3639A297790D156C_TICK_OFFSET UNITYSDK_OFFSET(0x9830990)
#define CLASS_2_3639A297790D156C__CTOR_OFFSET UNITYSDK_OFFSET(0x9830210)

inline static constexpr unsigned int Class_2_3639A297790D156C_TypeDefinitionIndex = 48633;

class Class_2_3639A297790D156C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* Field_2_5; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x30
	::RPG::GameCore::ConsumeOrigamiItem* Field_2_0; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x40
	::System::UInt32 Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_21AFFD96111DC5FA(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_21AFFD96111DC5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3639A297790D156C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
