#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_195AA062117E5DEF.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_387;
namespace MoleMole { class UICinemaCollectTabWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_03559E7839AC8E43_OFFSET UNITYSDK_OFFSET(0x110D6D80)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x110D6A90)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x110D6490)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_65C39D7D86A4F175_OFFSET UNITYSDK_OFFSET(0x110D6690)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x110D6AF0)
#define CLASS_1_9CF9955F8B7A43EF_METHOD_1_E46CEB25D409C730_OFFSET UNITYSDK_OFFSET(0x110D69B0)
#define CLASS_1_9CF9955F8B7A43EF__CTOR_OFFSET UNITYSDK_OFFSET(0x110D6480)

inline static constexpr unsigned int Class_1_9CF9955F8B7A43EF_TypeDefinitionIndex = 43543;

class Class_1_9CF9955F8B7A43EF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::MoleMole::UICinemaCollectTabWidgetController* Field_1_6; // 0x18
	::Enum_3_195AA062117E5DEF Field_1_4; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Boolean Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_65C39D7D86A4F175(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_65C39D7D86A4F175_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_387* Method_1_E46CEB25D409C730()
	{
		return ((::Class_2_208CC9941471731A_387*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_E46CEB25D409C730_OFFSET))(this);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_03559E7839AC8E43(::MoleMole::UICinemaCollectTabWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaCollectTabWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_9CF9955F8B7A43EF_METHOD_1_03559E7839AC8E43_OFFSET))(this, a1);
	}
};
