#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_AF0ADC6CC14C2F10_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB7A25E0)
#define CLASS_1_AF0ADC6CC14C2F10_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0xB7A2E70)
#define CLASS_1_AF0ADC6CC14C2F10_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7A2E20)
#define CLASS_1_AF0ADC6CC14C2F10_METHOD_1_F1BA8E0C07CE9C18_OFFSET UNITYSDK_OFFSET(0xB7A26A0)
#define CLASS_1_AF0ADC6CC14C2F10_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB7A25F0)
#define CLASS_1_AF0ADC6CC14C2F10_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB7A37D0)
#define CLASS_1_AF0ADC6CC14C2F10__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A2600)

inline static constexpr unsigned int Class_1_AF0ADC6CC14C2F10_TypeDefinitionIndex = 80888;

class Class_1_AF0ADC6CC14C2F10 : public ::System::Object
{
public:
	::System::String* IPKCFNKIDMB; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_FAF146B3D74C3C3F*>* OJFECHILFHG; // 0x18
	::System::Boolean _IsRunning_k__BackingField; // 0x20
	::System::Int32 HLLMPHJOKFC; // 0x24

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10_SET_ISRUNNING_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1BA8E0C07CE9C18(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10_METHOD_1_F1BA8E0C07CE9C18_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF0ADC6CC14C2F10_TOSTRING_OFFSET))(this);
	}
};
