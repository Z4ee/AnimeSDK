#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/Ease.h"
#include "unitysdk/System/Object.h"

class Class_3_BF30DCF14906C0B9;
class Class_3_F946D4081774B88D_1;

#define CLASS_1_1AEAAC440616FB36_METHOD_1_A3010CB53B8678C4_1_OFFSET UNITYSDK_OFFSET(0x87F19B0)
#define CLASS_1_1AEAAC440616FB36_METHOD_1_A3010CB53B8678C4_OFFSET UNITYSDK_OFFSET(0x87F0300)
#define CLASS_1_1AEAAC440616FB36_METHOD_1_B435FA05F34C1640_OFFSET UNITYSDK_OFFSET(0x87EF760)
#define CLASS_1_1AEAAC440616FB36__CTOR_OFFSET UNITYSDK_OFFSET(0x87F3060)

inline static constexpr unsigned int Class_1_1AEAAC440616FB36_TypeDefinitionIndex = 60203;

class Class_1_1AEAAC440616FB36 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AEAAC440616FB36__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_B435FA05F34C1640(::RPG::Client::Tween::Ease a1, ::System::Single a2, ::System::Single a3, ::Class_3_BF30DCF14906C0B9* a4)
	{
		return ((::System::Single(*)(::RPG::Client::Tween::Ease, ::System::Single, ::System::Single, ::Class_3_BF30DCF14906C0B9*))((::PBYTE)hIl2Cpp + CLASS_1_1AEAAC440616FB36_METHOD_1_B435FA05F34C1640_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_3_BF30DCF14906C0B9* Method_1_A3010CB53B8678C4(::RPG::Client::Tween::Ease a1)
	{
		return ((::Class_3_BF30DCF14906C0B9*(*)(::RPG::Client::Tween::Ease))((::PBYTE)hIl2Cpp + CLASS_1_1AEAAC440616FB36_METHOD_1_A3010CB53B8678C4_OFFSET))(a1);
	}

	static ::Class_3_F946D4081774B88D_1* Method_1_A3010CB53B8678C4_1(::RPG::Client::Tween::Ease a1)
	{
		return ((::Class_3_F946D4081774B88D_1*(*)(::RPG::Client::Tween::Ease))((::PBYTE)hIl2Cpp + CLASS_1_1AEAAC440616FB36_METHOD_1_A3010CB53B8678C4_1_OFFSET))(a1);
	}
};
