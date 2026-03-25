#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainPartyGridSpecialShowRow; }
namespace System { class String; }

#define CLASS_1_A4ED94721C8F4303_METHOD_1_5BB1D7B29EF5D8ED_OFFSET UNITYSDK_OFFSET(0x8AB4C60)
#define CLASS_1_A4ED94721C8F4303_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x8AB4B20)
#define CLASS_1_A4ED94721C8F4303_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x8AB4BB0)
#define CLASS_1_A4ED94721C8F4303__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB4BA0)

inline static constexpr unsigned int Class_1_A4ED94721C8F4303_TypeDefinitionIndex = 61108;

class Class_1_A4ED94721C8F4303 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303__CTOR_OFFSET))(this);
	}

	static ::Class_1_A4ED94721C8F4303* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_A4ED94721C8F4303*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::RPG::GameCore::TrainPartyGridSpecialShowRow* Method_1_5BB1D7B29EF5D8ED()
	{
		return ((::RPG::GameCore::TrainPartyGridSpecialShowRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_METHOD_1_5BB1D7B29EF5D8ED_OFFSET))(this);
	}
};
