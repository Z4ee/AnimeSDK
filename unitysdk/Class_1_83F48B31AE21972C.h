#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_83F48B31AE21972C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F7EBF0)
#define CLASS_1_83F48B31AE21972C_METHOD_1_5D48C30011B902DB_1_OFFSET UNITYSDK_OFFSET(0x19F7E960)
#define CLASS_1_83F48B31AE21972C_METHOD_1_5D48C30011B902DB_OFFSET UNITYSDK_OFFSET(0x19F7E8E0)
#define CLASS_1_83F48B31AE21972C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x19F7E880)
#define CLASS_1_83F48B31AE21972C_METHOD_1_A537F60A60A13FB6_OFFSET UNITYSDK_OFFSET(0x19F7EC40)
#define CLASS_1_83F48B31AE21972C_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x19F7EBA0)
#define CLASS_1_83F48B31AE21972C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19F7E8D0)
#define CLASS_1_83F48B31AE21972C_METHOD_1_E3A311FEB834443E_OFFSET UNITYSDK_OFFSET(0x19F7EB10)
#define CLASS_1_83F48B31AE21972C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F7EA80)
#define CLASS_1_83F48B31AE21972C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7E9E0)

inline static constexpr unsigned int Class_1_83F48B31AE21972C_TypeDefinitionIndex = 87554;

class Class_1_83F48B31AE21972C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_1_0; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_5D48C30011B902DB(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_5D48C30011B902DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D48C30011B902DB_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_5D48C30011B902DB_1_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_1_E3A311FEB834443E(::System::Int32 a1)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_E3A311FEB834443E_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A537F60A60A13FB6(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + CLASS_1_83F48B31AE21972C_METHOD_1_A537F60A60A13FB6_OFFSET))(this, a1);
	}
};
