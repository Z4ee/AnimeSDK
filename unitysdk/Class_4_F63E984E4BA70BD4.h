#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_F63E984E4BA70BD4_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B3EB6B0)
#define CLASS_4_F63E984E4BA70BD4_METHOD_4_7B5374B751A2E4A6_OFFSET UNITYSDK_OFFSET(0x1B3EB350)
#define CLASS_4_F63E984E4BA70BD4_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B3EB680)
#define CLASS_4_F63E984E4BA70BD4_METHOD_4_E0B9D6256CA0393B_OFFSET UNITYSDK_OFFSET(0x1B3EB390)
#define CLASS_4_F63E984E4BA70BD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3EB380)

inline static constexpr unsigned int Class_4_F63E984E4BA70BD4_TypeDefinitionIndex = 23454;

class Class_4_F63E984E4BA70BD4 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::Int32 Field_4_0; // 0x20
	::System::Int32 Field_4_1; // 0x24
	::System::Int32 Field_4_2; // 0x28
	::System::UInt32 Field_4_3; // 0x2C
	::System::Int32 Field_4_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F63E984E4BA70BD4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_7B5374B751A2E4A6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F63E984E4BA70BD4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F63E984E4BA70BD4*&))((::PBYTE)hIl2Cpp + CLASS_4_F63E984E4BA70BD4_METHOD_4_7B5374B751A2E4A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_E0B9D6256CA0393B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_F63E984E4BA70BD4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_F63E984E4BA70BD4*))((::PBYTE)hIl2Cpp + CLASS_4_F63E984E4BA70BD4_METHOD_4_E0B9D6256CA0393B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_F63E984E4BA70BD4*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F63E984E4BA70BD4*&))((::PBYTE)hIl2Cpp + CLASS_4_F63E984E4BA70BD4_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_F63E984E4BA70BD4* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_F63E984E4BA70BD4*))((::PBYTE)hIl2Cpp + CLASS_4_F63E984E4BA70BD4_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
