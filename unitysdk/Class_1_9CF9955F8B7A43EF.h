#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_195AA062117E5DEF.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_295;
namespace MoleMole { class UICinemaCollectTabWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_03559E7839AC8E43_OFFSET UNITYSDK_OFFSET(0x127C41D0)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x127C4240)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x127C4930)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_65C39D7D86A4F175_OFFSET UNITYSDK_OFFSET(0x127C4380)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x127C46A0)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_E46CEB25D409C730_OFFSET UNITYSDK_OFFSET(0x127C42A0)
#define CLASS_1_9CF9955F8B7A43EF__CTOR_OFFSET UNITYSDK_OFFSET(0x127C41C0)

inline static constexpr unsigned int Class_1_9CF9955F8B7A43EF_TypeDefinitionIndex = 78803;

class Class_1_9CF9955F8B7A43EF : public ::System::Object
{
public:
	::MoleMole::UICinemaCollectTabWidgetController* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Boolean Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::Enum_3_195AA062117E5DEF Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03559E7839AC8E43(::MoleMole::UICinemaCollectTabWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaCollectTabWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_03559E7839AC8E43_OFFSET))(this, a1);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_295* Method_1_E46CEB25D409C730()
	{
		return ((::Class_2_208CC9941471731A_295*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_E46CEB25D409C730_OFFSET))(this);
	}

	::System::Void Method_1_65C39D7D86A4F175(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_65C39D7D86A4F175_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}
};
