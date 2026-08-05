#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0B54DAB695AF5065_METHOD_1_4BFC374DD5191D11_OFFSET UNITYSDK_OFFSET(0x133E3AE0)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_6F3F2DB56037203E_OFFSET UNITYSDK_OFFSET(0x133E3AF0)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x133E3AA0)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x133E3AB0)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x133E3A80)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x133E3AC0)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x133E3AD0)
#define CLASS_1_0B54DAB695AF5065_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x133E3A90)
#define CLASS_1_0B54DAB695AF5065__CTOR_OFFSET UNITYSDK_OFFSET(0x133E3A60)

inline static constexpr unsigned int Class_1_0B54DAB695AF5065_TypeDefinitionIndex = 40425;

class Class_1_0B54DAB695AF5065 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::ProtoScript::HollowShopType Field_1_7; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::ProtoScript::HollowShopType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowShopType, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::ProtoScript::HollowShopType Method_1_4BFC374DD5191D11()
	{
		return ((::ProtoScript::HollowShopType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_4BFC374DD5191D11_OFFSET))(this);
	}

	::System::Void Method_1_6F3F2DB56037203E(::ProtoScript::HollowShopType a1)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowShopType))((::PBYTE)hIl2Cpp + CLASS_1_0B54DAB695AF5065_METHOD_1_6F3F2DB56037203E_OFFSET))(this, a1);
	}
};
