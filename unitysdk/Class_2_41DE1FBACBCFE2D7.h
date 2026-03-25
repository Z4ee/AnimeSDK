#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ObserveMaterialSubmission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_41DE1FBACBCFE2D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BF5D70)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_015EED32BD477392_1_OFFSET UNITYSDK_OFFSET(0x10BF6210)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_015EED32BD477392_2_OFFSET UNITYSDK_OFFSET(0x10BF6340)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_015EED32BD477392_OFFSET UNITYSDK_OFFSET(0x10BF60E0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x10BF5DC0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x10BF5F20)
#define CLASS_2_41DE1FBACBCFE2D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BF5ED0)
#define CLASS_2_41DE1FBACBCFE2D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BF6030)
#define CLASS_2_41DE1FBACBCFE2D7_TICK_OFFSET UNITYSDK_OFFSET(0x10BF6080)
#define CLASS_2_41DE1FBACBCFE2D7__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF5C00)

inline static constexpr unsigned int Class_2_41DE1FBACBCFE2D7_TypeDefinitionIndex = 42925;

class Class_2_41DE1FBACBCFE2D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_1; // 0x28
	::System::UInt32 Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_2_015EED32BD477392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_015EED32BD477392_OFFSET))(this, a1);
	}

	::System::Void Method_2_015EED32BD477392_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_015EED32BD477392_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_015EED32BD477392_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_015EED32BD477392_2_OFFSET))(this, a1);
	}
};
