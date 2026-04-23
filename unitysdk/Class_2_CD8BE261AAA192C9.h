#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CD8BE261AAA192C9_METHOD_2_1A347B31430AE3E5_OFFSET UNITYSDK_OFFSET(0x953C1B0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x953BC40)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x953C110)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_75D264CB369F29AB_OFFSET UNITYSDK_OFFSET(0x953C270)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_890E4C98F02C8F26_OFFSET UNITYSDK_OFFSET(0x953C4F0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_8A54395897C7EA78_OFFSET UNITYSDK_OFFSET(0x953BCA0)
#define CLASS_2_CD8BE261AAA192C9_METHOD_2_A92A3F5FD912C9BD_OFFSET UNITYSDK_OFFSET(0x953BFB0)
#define CLASS_2_CD8BE261AAA192C9__CTOR_OFFSET UNITYSDK_OFFSET(0x953BB00)

inline static constexpr unsigned int Class_2_CD8BE261AAA192C9_TypeDefinitionIndex = 64177;

class Class_2_CD8BE261AAA192C9 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CD8BE261AAA192C9_TypeDefinitionIndex)->GetStaticField(0x10110);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_2_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_2_1; // 0x40
	::System::Int32 Field_2_2; // 0x48

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_8A54395897C7EA78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_8A54395897C7EA78_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_2_1A347B31430AE3E5(::System::Action* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_1A347B31430AE3E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A92A3F5FD912C9BD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_A92A3F5FD912C9BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Method_2_75D264CB369F29AB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_75D264CB369F29AB_OFFSET))(this);
	}

	::System::Void Method_2_890E4C98F02C8F26(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_2_CD8BE261AAA192C9_METHOD_2_890E4C98F02C8F26_OFFSET))(this, a1);
	}
};
