#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DAED1DEA9B26CBB7;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E50385E019D6A793_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xB5DF950)
#define CLASS_3_E50385E019D6A793_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB5DF810)
#define CLASS_3_E50385E019D6A793_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB5DFAB0)
#define CLASS_3_E50385E019D6A793_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5DF400)
#define CLASS_3_E50385E019D6A793_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5DFB00)
#define CLASS_3_E50385E019D6A793_TICK_OFFSET UNITYSDK_OFFSET(0xB5DF870)
#define CLASS_3_E50385E019D6A793__CTOR_OFFSET UNITYSDK_OFFSET(0xB5DF2E0)

inline static constexpr unsigned int Class_3_E50385E019D6A793_TypeDefinitionIndex = 53081;

class Class_3_E50385E019D6A793 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DAED1DEA9B26CBB7*>
{
public:
	// static const ::System::Single KLPLKPHBDKD; // 0x0
	// static const ::System::Single BCMCHCODJGO; // 0x0
	// static const ::System::Single ODIFDPCDMCL; // 0x0
	// static const ::System::Single EDJLOBJGONG; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* IBNMFIEONNG; // 0x28
	::Il2CppArray<::System::Int32>* BAAABHJEEMM; // 0x30
	::RPG::GameCore::AdventureCharacterController* EJCIABDHMJJ; // 0x38
	::System::Single PBLGHIGPEIP; // 0x40
	::System::Boolean GAPIJOIJFMP; // 0x44
	::System::Boolean NICGJCKBCEB; // 0x45
	::System::Boolean JKJIPIMEJBE; // 0x46
	::System::Int32 FNHPGGINFGH; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DAED1DEA9B26CBB7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DAED1DEA9B26CBB7*))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E50385E019D6A793_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
