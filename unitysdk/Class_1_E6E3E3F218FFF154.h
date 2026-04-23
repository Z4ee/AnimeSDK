#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E6AF9054C581B56;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E6E3E3F218FFF154_METHOD_1_08710C507A9F343F_OFFSET UNITYSDK_OFFSET(0x19D69A40)
#define CLASS_1_E6E3E3F218FFF154_METHOD_1_2B93CCEE4CF4FFA8_OFFSET UNITYSDK_OFFSET(0x19D6A8A0)
#define CLASS_1_E6E3E3F218FFF154_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0x19D69830)
#define CLASS_1_E6E3E3F218FFF154_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x19D69DA0)
#define CLASS_1_E6E3E3F218FFF154_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19D69820)
#define CLASS_1_E6E3E3F218FFF154_METHOD_1_F305171F980FFE35_OFFSET UNITYSDK_OFFSET(0x19D6A7D0)
#define CLASS_1_E6E3E3F218FFF154__CTOR_OFFSET UNITYSDK_OFFSET(0x19D69770)

inline static constexpr unsigned int Class_1_E6E3E3F218FFF154_TypeDefinitionIndex = 9698;

class Class_1_E6E3E3F218FFF154 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6E6AF9054C581B56*>* Field_1_6; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::Void Method_1_08710C507A9F343F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154_METHOD_1_08710C507A9F343F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	static ::System::String* Method_1_F305171F980FFE35(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154_METHOD_1_F305171F980FFE35_OFFSET))(a1);
	}

	::System::Int32 Method_1_2B93CCEE4CF4FFA8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E3E3F218FFF154_METHOD_1_2B93CCEE4CF4FFA8_OFFSET))(this);
	}
};
