#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CD8BE261AAA192C9_METHOD_2_1A347B31430AE3E5_OFFSET UNITYSDK_OFFSET(0x13A106E0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13A101A0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_403471F48BCD5219_OFFSET UNITYSDK_OFFSET(0x13A107A0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_5DBE0D8848C75126_OFFSET UNITYSDK_OFFSET(0x13A104F0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_6CCE405DE11B0CE1_OFFSET UNITYSDK_OFFSET(0x13A10200)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_890E4C98F02C8F26_OFFSET UNITYSDK_OFFSET(0x13A10A20)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13A10650)
#define CLASS_2_CD8BE261AAA192C9__CTOR_OFFSET UNITYSDK_OFFSET(0x13A10060)

inline static constexpr unsigned int Class_2_CD8BE261AAA192C9_TypeDefinitionIndex = 65098;

class Class_2_CD8BE261AAA192C9 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD8BE261AAA192C9_TypeDefinitionIndex)->GetStaticField(0x10810);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_2_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_2_2; // 0x40
	::System::Int32 Field_2_3; // 0x48

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_6CCE405DE11B0CE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_6CCE405DE11B0CE1_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_2_1A347B31430AE3E5(::System::Action* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_1A347B31430AE3E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5DBE0D8848C75126(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_5DBE0D8848C75126_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Method_2_403471F48BCD5219()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_403471F48BCD5219_OFFSET))(this);
	}

	::System::Void Method_2_890E4C98F02C8F26(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_890E4C98F02C8F26_OFFSET))(this, a1);
	}
};
