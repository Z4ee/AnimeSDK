#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_6.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8CB4807A460376C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C030C0)
#define CLASS_3_8CB4807A460376C3_METHOD_3_B8181FDB32704C35_OFFSET UNITYSDK_OFFSET(0x8C02F00)
#define CLASS_3_8CB4807A460376C3_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x8C03210)
#define CLASS_3_8CB4807A460376C3_METHOD_3_E240D159E3150659_1_OFFSET UNITYSDK_OFFSET(0x8C03500)
#define CLASS_3_8CB4807A460376C3_METHOD_3_E240D159E3150659_OFFSET UNITYSDK_OFFSET(0x8C035F0)
#define CLASS_3_8CB4807A460376C3_METHOD_3_E5E42B46DE6979AF_OFFSET UNITYSDK_OFFSET(0x8C036E0)
#define CLASS_3_8CB4807A460376C3_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x8C03C10)
#define CLASS_3_8CB4807A460376C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C03170)
#define CLASS_3_8CB4807A460376C3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C031C0)
#define CLASS_3_8CB4807A460376C3_TICK_OFFSET UNITYSDK_OFFSET(0x8C03450)
#define CLASS_3_8CB4807A460376C3__CTOR_OFFSET UNITYSDK_OFFSET(0x8C02EE0)

inline static constexpr unsigned int Class_3_8CB4807A460376C3_TypeDefinitionIndex = 43829;

class Class_3_8CB4807A460376C3 : public ::Class_2_A48F3719AA1CF200_6
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_1; // 0x18
	::RPG::GameCore::TaskContext* Field_3_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_B8181FDB32704C35(::RPG::GameCore::ParallelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_METHOD_3_B8181FDB32704C35_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5E42B46DE6979AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_METHOD_3_E5E42B46DE6979AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E240D159E3150659()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_METHOD_3_E240D159E3150659_OFFSET))(this);
	}

	::System::Boolean Method_3_E240D159E3150659_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_METHOD_3_E240D159E3150659_1_OFFSET))(this);
	}

	::System::Void Method_3_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CB4807A460376C3_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
	}
};
