#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_2_D05FEB32FD372810;

#define CLASS_2_C8E2269F12F6E6DA_METHOD_2_2C033AC010362385_OFFSET UNITYSDK_OFFSET(0x1148E580)
#define CLASS_2_C8E2269F12F6E6DA_METHOD_2_55A2D7889F07519C_OFFSET UNITYSDK_OFFSET(0x1148E860)
#define CLASS_2_C8E2269F12F6E6DA_METHOD_2_573103E18ED7B61D_OFFSET UNITYSDK_OFFSET(0x1148E920)
#define CLASS_2_C8E2269F12F6E6DA_METHOD_2_860B0AA036A21F06_OFFSET UNITYSDK_OFFSET(0x1148E570)
#define CLASS_2_C8E2269F12F6E6DA_METHOD_2_E6FA4947A2BD617E_OFFSET UNITYSDK_OFFSET(0x1148E0A0)
#define CLASS_2_C8E2269F12F6E6DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1148E440)

inline static constexpr unsigned int Class_2_C8E2269F12F6E6DA_TypeDefinitionIndex = 53160;

class Class_2_C8E2269F12F6E6DA : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_D05FEB32FD372810<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Field_2_1; // 0x50
	::System::Int32 Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8E2269F12F6E6DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E6FA4947A2BD617E(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C8E2269F12F6E6DA_METHOD_2_E6FA4947A2BD617E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_860B0AA036A21F06(::Class_2_D05FEB32FD372810<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D05FEB32FD372810<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*))((::PBYTE)hIl2Cpp + CLASS_2_C8E2269F12F6E6DA_METHOD_2_860B0AA036A21F06_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Method_2_2C033AC010362385()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8E2269F12F6E6DA_METHOD_2_2C033AC010362385_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_55A2D7889F07519C()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8E2269F12F6E6DA_METHOD_2_55A2D7889F07519C_OFFSET))(this);
	}

	::Class_2_D05FEB32FD372810<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>* Method_2_573103E18ED7B61D()
	{
		return ((::Class_2_D05FEB32FD372810<::MoleMole::UISummerEventPopGetRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8E2269F12F6E6DA_METHOD_2_573103E18ED7B61D_OFFSET))(this);
	}
};
