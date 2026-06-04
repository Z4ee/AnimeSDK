#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceManagerState.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_46C24EAC14EB3FEE;
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88FA09475CF68463_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13698F50)
#define CLASS_1_88FA09475CF68463_METHOD_1_00AA68D242694FEF_OFFSET UNITYSDK_OFFSET(0x136995C0)
#define CLASS_1_88FA09475CF68463_METHOD_1_492F9ACE26C67E63_OFFSET UNITYSDK_OFFSET(0x13699300)
#define CLASS_1_88FA09475CF68463_METHOD_1_5E15B076B033F0F1_OFFSET UNITYSDK_OFFSET(0x13699900)
#define CLASS_1_88FA09475CF68463_METHOD_1_64516BB8FDE748E8_OFFSET UNITYSDK_OFFSET(0x13699790)
#define CLASS_1_88FA09475CF68463_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x13699690)
#define CLASS_1_88FA09475CF68463_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x13699420)
#define CLASS_1_88FA09475CF68463_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x13699140)
#define CLASS_1_88FA09475CF68463_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13699090)
#define CLASS_1_88FA09475CF68463_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x13699CF0)
#define CLASS_1_88FA09475CF68463_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13699000)
#define CLASS_1_88FA09475CF68463_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x13699D60)
#define CLASS_1_88FA09475CF68463_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13698F00)
#define CLASS_1_88FA09475CF68463_METHOD_1_F2F36100ADFEB25A_OFFSET UNITYSDK_OFFSET(0x136991F0)
#define CLASS_1_88FA09475CF68463__CTOR_OFFSET UNITYSDK_OFFSET(0x13699E60)

inline static constexpr unsigned int Class_1_88FA09475CF68463_TypeDefinitionIndex = 57973;

class Class_1_88FA09475CF68463 : public ::System::Object
{
public:
	::Class_1_46C24EAC14EB3FEE* Field_1_0; // 0x10
	::RPG::GameCore::LevelGraphComponent* Field_1_1; // 0x18
	::Class_1_46C24EAC14EB3FEE* Field_1_2; // 0x20
	::RPG::Client::SwordTrainingPerformanceManagerState Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_1_F2F36100ADFEB25A(::RPG::Client::SwordTrainingPerformanceType a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::UInt32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_F2F36100ADFEB25A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_492F9ACE26C67E63(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_492F9ACE26C67E63_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_00AA68D242694FEF(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::Client::SwordTrainingPerformanceType a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::SwordTrainingPerformanceType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_00AA68D242694FEF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Boolean Method_1_64516BB8FDE748E8(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_64516BB8FDE748E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E15B076B033F0F1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_5E15B076B033F0F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88FA09475CF68463_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
