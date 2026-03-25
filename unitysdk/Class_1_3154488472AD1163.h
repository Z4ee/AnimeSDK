#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceManagerState.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_B49A7D0C2ECC784E;
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3154488472AD1163_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114B6640)
#define CLASS_1_3154488472AD1163_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x114B7390)
#define CLASS_1_3154488472AD1163_METHOD_1_3068A48C9CBBC98F_OFFSET UNITYSDK_OFFSET(0x114B6E10)
#define CLASS_1_3154488472AD1163_METHOD_1_4A96D91E3C754B1A_OFFSET UNITYSDK_OFFSET(0x114B69D0)
#define CLASS_1_3154488472AD1163_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x114B6AF0)
#define CLASS_1_3154488472AD1163_METHOD_1_5E15B076B033F0F1_OFFSET UNITYSDK_OFFSET(0x114B6F30)
#define CLASS_1_3154488472AD1163_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x114B7320)
#define CLASS_1_3154488472AD1163_METHOD_1_80D929364E55A4C8_OFFSET UNITYSDK_OFFSET(0x114B6C60)
#define CLASS_1_3154488472AD1163_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x114B6830)
#define CLASS_1_3154488472AD1163_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x114B6780)
#define CLASS_1_3154488472AD1163_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x114B66F0)
#define CLASS_1_3154488472AD1163_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x114B6D30)
#define CLASS_1_3154488472AD1163_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114B65F0)
#define CLASS_1_3154488472AD1163_METHOD_1_F5B640430D654CA1_OFFSET UNITYSDK_OFFSET(0x114B68E0)
#define CLASS_1_3154488472AD1163__CTOR_OFFSET UNITYSDK_OFFSET(0x114B7490)

inline static constexpr unsigned int Class_1_3154488472AD1163_TypeDefinitionIndex = 50324;

class Class_1_3154488472AD1163 : public ::System::Object
{
public:
	::Class_1_B49A7D0C2ECC784E* Field_1_3; // 0x10
	::RPG::GameCore::LevelGraphComponent* Field_1_0; // 0x18
	::Class_1_B49A7D0C2ECC784E* Field_1_2; // 0x20
	::RPG::Client::SwordTrainingPerformanceManagerState Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_1_F5B640430D654CA1(::RPG::Client::SwordTrainingPerformanceType a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::UInt32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_F5B640430D654CA1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4A96D91E3C754B1A(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_4A96D91E3C754B1A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_80D929364E55A4C8(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::Client::SwordTrainingPerformanceType a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::SwordTrainingPerformanceType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_80D929364E55A4C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Boolean Method_1_3068A48C9CBBC98F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_3068A48C9CBBC98F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E15B076B033F0F1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_5E15B076B033F0F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3154488472AD1163_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
