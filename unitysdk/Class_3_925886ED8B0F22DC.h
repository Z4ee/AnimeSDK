#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_925886ED8B0F22DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BC2480)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0x18BC3190)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18BC2320)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x18BC2380)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x18BC2600)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_8E816772B3F6C832_OFFSET UNITYSDK_OFFSET(0x18BC29F0)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_EBE2AAB1D76E90D3_OFFSET UNITYSDK_OFFSET(0x18BC3290)
#define CLASS_3_925886ED8B0F22DC_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x18BC3150)
#define CLASS_3_925886ED8B0F22DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BC28E0)
#define CLASS_3_925886ED8B0F22DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BC2430)
#define CLASS_3_925886ED8B0F22DC_TICK_OFFSET UNITYSDK_OFFSET(0x18BC30C0)
#define CLASS_3_925886ED8B0F22DC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BC22D0)
#define CLASS_3_925886ED8B0F22DC__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC2270)

inline static constexpr unsigned int Class_3_925886ED8B0F22DC_TypeDefinitionIndex = 56099;

class Class_3_925886ED8B0F22DC : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* ECMFFNPIHGD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_2_A48F3719AA1CF200_4* DOCDBCNCFEB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SequenceConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_3_8E816772B3F6C832(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_8E816772B3F6C832_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::Class_1_5F51D4049EA87B7B*>* Method_3_EBE2AAB1D76E90D3()
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_925886ED8B0F22DC_METHOD_3_EBE2AAB1D76E90D3_OFFSET))(this);
	}
};
