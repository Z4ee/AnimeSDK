#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2780D0F4B46A950.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_2_FE1A0A6219F878B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C47E70)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_11E74E8648CE613B_OFFSET UNITYSDK_OFFSET(0x8C47F40)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8C486E0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8C48680)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x8C48280)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_65AEB11D284FE6A1_OFFSET UNITYSDK_OFFSET(0x8C47F00)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_6FF4D5ECCB5F9592_OFFSET UNITYSDK_OFFSET(0x8C48580)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8C485A0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x8C483F0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x8C48360)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_BE491FA660454AC6_OFFSET UNITYSDK_OFFSET(0x8C48590)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8C48240)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8C48610)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x8C48440)
#define CLASS_2_FE1A0A6219F878B5__CTOR_OFFSET UNITYSDK_OFFSET(0x8C47E30)
#define CLASS_2_FE1A0A6219F878B5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C48570)

inline static constexpr unsigned int Class_2_FE1A0A6219F878B5_TypeDefinitionIndex = 64211;

class Class_2_FE1A0A6219F878B5 : public ::Class_1_A2780D0F4B46A950
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_2679F01039F3FC24* Field_2_0; // 0x98

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

	::System::Void Method_2_11E74E8648CE613B(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_11E74E8648CE613B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6516B39957C2E680(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_6516B39957C2E680_OFFSET))(this, a1);
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

	::System::Void Method_2_BE491FA660454AC6(::RPG::GameCore::PropComponent* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_BE491FA660454AC6_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
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
