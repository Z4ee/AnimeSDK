#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2780D0F4B46A950.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_2_FE1A0A6219F878B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4F1A90)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA4F22D0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xA4F21B0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA4F2270)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_63DE9F38B8C222B2_OFFSET UNITYSDK_OFFSET(0xA4F1B60)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_65AEB11D284FE6A1_OFFSET UNITYSDK_OFFSET(0xA4F1B20)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_6FF4D5ECCB5F9592_OFFSET UNITYSDK_OFFSET(0xA4F2190)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA4F2000)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_9D5E47281618B62F_OFFSET UNITYSDK_OFFSET(0xA4F21A0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0xA4F1F70)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_B3578C323540C8F4_OFFSET UNITYSDK_OFFSET(0xA4F1E90)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4F1E50)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA4F2210)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xA4F2050)
#define CLASS_2_FE1A0A6219F878B5__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F1A50)
#define CLASS_2_FE1A0A6219F878B5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4F2180)

inline static constexpr unsigned int Class_2_FE1A0A6219F878B5_TypeDefinitionIndex = 73280;

class Class_2_FE1A0A6219F878B5 : public ::Class_1_A2780D0F4B46A950
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_2679F01039F3FC24* Field_2_1; // 0x98

	::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Prop::PinballPuzzleItemType Method_2_65AEB11D284FE6A1()
	{
		return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_65AEB11D284FE6A1_OFFSET))(this);
	}

	::System::Void Method_2_63DE9F38B8C222B2(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_63DE9F38B8C222B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3578C323540C8F4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_B3578C323540C8F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Prop::PinballPuzzleItemType Method_2_6FF4D5ECCB5F9592()
	{
		return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_6FF4D5ECCB5F9592_OFFSET))(this);
	}

	::System::Void Method_2_9D5E47281618B62F(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_9D5E47281618B62F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
