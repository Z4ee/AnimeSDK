#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D0978CDFED5807E6.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_B7C50519CEC72515;
class Class_2_A944C35C433158AC;
class Class_2_F5A753D004F2488D;
namespace MoleMole { class ConfigUICameraTimelineData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_42D261F216EFB78D_METHOD_1_5B2DBD7227D80209_1_OFFSET UNITYSDK_OFFSET(0x148D1340)
#define CLASS_1_42D261F216EFB78D_METHOD_1_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x148D12B0)
#define CLASS_1_42D261F216EFB78D_METHOD_1_618770CA0AB07BA6_OFFSET UNITYSDK_OFFSET(0x148D0F00)
#define CLASS_1_42D261F216EFB78D_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x148D1260)
#define CLASS_1_42D261F216EFB78D_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x148D13A0)
#define CLASS_1_42D261F216EFB78D_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x148D1150)
#define CLASS_1_42D261F216EFB78D_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x148D11C0)
#define CLASS_1_42D261F216EFB78D_METHOD_1_EAD9091329518CE0_OFFSET UNITYSDK_OFFSET(0x148D0FA0)
#define CLASS_1_42D261F216EFB78D_METHOD_1_FD810F6E6BD4B4BA_OFFSET UNITYSDK_OFFSET(0x148D0D90)
#define CLASS_1_42D261F216EFB78D__CTOR_OFFSET UNITYSDK_OFFSET(0x148D0D20)

inline static constexpr unsigned int Class_1_42D261F216EFB78D_TypeDefinitionIndex = 46980;

class Class_1_42D261F216EFB78D : public ::System::Object
{
public:
	::Class_2_F5A753D004F2488D* Field_1_6; // 0x10
	::Class_2_A944C35C433158AC* Field_1_1; // 0x18
	::Class_2_F5A753D004F2488D* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x28
	::MoleMole::ConfigUICameraTimelineData* Field_1_7; // 0x30
	::Foundation::AssetRequestHandle Field_1_11; // 0x38
	::System::Int32 Field_1_0; // 0x58
	::Enum_3_D0978CDFED5807E6 Field_1_4; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD810F6E6BD4B4BA(::Class_1_B7C50519CEC72515* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7C50519CEC72515*))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_FD810F6E6BD4B4BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD9091329518CE0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_EAD9091329518CE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_1_5B2DBD7227D80209_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_5B2DBD7227D80209_1_OFFSET))(this);
	}

	::System::Void Method_1_618770CA0AB07BA6(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_42D261F216EFB78D_METHOD_1_618770CA0AB07BA6_OFFSET))(this, a1);
	}
};
