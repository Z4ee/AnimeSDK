#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2780D0F4B46A950.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_2_FE1A0A6219F878B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A51F0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_63DE9F38B8C222B2_OFFSET UNITYSDK_OFFSET(0xB7A52C0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_65AEB11D284FE6A1_OFFSET UNITYSDK_OFFSET(0xB7A5280)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0xB7A55F0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB7A5760)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0xB7A56D0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7A55B0)
#define CLASS_2_FE1A0A6219F878B5_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xB7A57B0)
#define CLASS_2_FE1A0A6219F878B5__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A51B0)

inline static constexpr unsigned int Class_2_FE1A0A6219F878B5_TypeDefinitionIndex = 78291;

class Class_2_FE1A0A6219F878B5 : public ::Class_1_A2780D0F4B46A950
{
public:
	// static const ::System::String* AOKCCFPPDGO; // 0x0
	::Class_2_2679F01039F3FC24* BCALOKFAJFH; // 0x98

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

	::System::Void Method_2_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE1A0A6219F878B5_METHOD_2_8608350DFEDEE4FD_OFFSET))(this, a1);
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
};
