#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class HeliobusSNSQuickPost; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_CCD9932409DC8C95_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE46EB00)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xE46F370)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xE46F450)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0xE46F4F0)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_BFB7535D462E0EB4_OFFSET UNITYSDK_OFFSET(0xE46F130)
#define CLASS_2_CCD9932409DC8C95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE46EC00)
#define CLASS_2_CCD9932409DC8C95_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE46F710)
#define CLASS_2_CCD9932409DC8C95_TICK_OFFSET UNITYSDK_OFFSET(0xE46F760)
#define CLASS_2_CCD9932409DC8C95__CTOR_OFFSET UNITYSDK_OFFSET(0xE46EA10)

inline static constexpr unsigned int Class_2_CCD9932409DC8C95_TypeDefinitionIndex = 42829;

class Class_2_CCD9932409DC8C95 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x20
	::RPG::GameCore::HeliobusSNSQuickPost* Field_2_0; // 0x28
	::RPG::GameCore::LevelGraphComponent* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Boolean Method_2_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Void Method_2_BFB7535D462E0EB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_BFB7535D462E0EB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
