#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_1D758AE6DD6475DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FFDB20)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_4607909F3FA417C9_OFFSET UNITYSDK_OFFSET(0x14FFDA30)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_5D48C30011B902DB_1_OFFSET UNITYSDK_OFFSET(0x14FFD880)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_5D48C30011B902DB_OFFSET UNITYSDK_OFFSET(0x14FFD800)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x14FFD7A0)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x14FFDAD0)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_C570424A5523CF7B_OFFSET UNITYSDK_OFFSET(0x14FFDB70)
#define CLASS_1_1D758AE6DD6475DD_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14FFD7F0)
#define CLASS_1_1D758AE6DD6475DD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14FFD9A0)
#define CLASS_1_1D758AE6DD6475DD__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFD900)

inline static constexpr unsigned int Class_1_1D758AE6DD6475DD_TypeDefinitionIndex = 60791;

class Class_1_1D758AE6DD6475DD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_5D48C30011B902DB(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_5D48C30011B902DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D48C30011B902DB_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_5D48C30011B902DB_1_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_1_4607909F3FA417C9(::System::Int32 a1)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_4607909F3FA417C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C570424A5523CF7B(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D758AE6DD6475DD_METHOD_1_C570424A5523CF7B_OFFSET))(this, a1);
	}
};
