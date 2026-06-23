#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D952E88E277CCD41_METHOD_1_1CC50C58B8F1AC30_OFFSET UNITYSDK_OFFSET(0x14985F30)
#define CLASS_1_D952E88E277CCD41_METHOD_1_4009E1B29ADD0D9B_OFFSET UNITYSDK_OFFSET(0x14985A50)
#define CLASS_1_D952E88E277CCD41_METHOD_1_7F992A225F9B4A5E_OFFSET UNITYSDK_OFFSET(0x149858D0)
#define CLASS_1_D952E88E277CCD41__CTOR_OFFSET UNITYSDK_OFFSET(0x149858C0)

inline static constexpr unsigned int Class_1_D952E88E277CCD41_TypeDefinitionIndex = 81547;

class Class_1_D952E88E277CCD41 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigOnGoingTypeDurationData** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigOnGoingTypeDurationData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D952E88E277CCD41_TypeDefinitionIndex)->GetStaticField(0x4C500);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7F992A225F9B4A5E(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_METHOD_1_7F992A225F9B4A5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4009E1B29ADD0D9B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_METHOD_1_4009E1B29ADD0D9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1CC50C58B8F1AC30(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D952E88E277CCD41_METHOD_1_1CC50C58B8F1AC30_OFFSET))(a1, a2, a3, a4);
	}
};
