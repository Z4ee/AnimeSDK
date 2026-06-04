#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_32B3FE2FD3EEDB80.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_63D18ECF87218619_1;
class Class_1_9E4EA1938DE3A3E4;
class Class_2_1A8148841049062A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_28391E86E440260D_OFFSET UNITYSDK_OFFSET(0xA7DBE80)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_36AB16BDCCDEAF39_OFFSET UNITYSDK_OFFSET(0xA7DBEF0)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_3C34871F69670076_OFFSET UNITYSDK_OFFSET(0xA7DBF10)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_4D6C5F6A9C5D13C1_OFFSET UNITYSDK_OFFSET(0xA7DB050)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_57F203F46F695331_OFFSET UNITYSDK_OFFSET(0xA7DBF00)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_86E5BAC73570DA03_OFFSET UNITYSDK_OFFSET(0xA7DBAA0)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_BCF43D4317A97D4C_OFFSET UNITYSDK_OFFSET(0xA7DBB50)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_E08D45F1BEDD78A7_OFFSET UNITYSDK_OFFSET(0xA7DB000)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0xA7DBD60)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xA7DBDC0)
#define CLASS_3_0D29EA8DCFA9D34B_METHOD_3_F85244FD47E27DD2_OFFSET UNITYSDK_OFFSET(0xA7DBE90)
#define CLASS_3_0D29EA8DCFA9D34B__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7DBE20)
#define CLASS_3_0D29EA8DCFA9D34B__CTOR_OFFSET UNITYSDK_OFFSET(0xA7DBDD0)

inline static constexpr unsigned int Class_3_0D29EA8DCFA9D34B_TypeDefinitionIndex = 71331;

class Class_3_0D29EA8DCFA9D34B : public ::Class_2_32B3FE2FD3EEDB80
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0D29EA8DCFA9D34B_TypeDefinitionIndex)->GetStaticField(0x62C40);
	}
	::System::Boolean Field_3_1; // 0xA8
	::RPG::Client::LittleGame::Move::MoveState Field_3_2; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B__CCTOR_OFFSET))();
	}

	::System::Void Method_3_E08D45F1BEDD78A7(::Class_1_9E4EA1938DE3A3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4EA1938DE3A3E4*))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_E08D45F1BEDD78A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_4D6C5F6A9C5D13C1(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_4D6C5F6A9C5D13C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_86E5BAC73570DA03(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_86E5BAC73570DA03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCF43D4317A97D4C(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_BCF43D4317A97D4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F385090BF8DD2EE6(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_3_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_F48B6E9D83D3B226_OFFSET))(this);
	}

	::System::Void Method_3_28391E86E440260D(::Class_1_9E4EA1938DE3A3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4EA1938DE3A3E4*))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_28391E86E440260D_OFFSET))(this, a1);
	}

	::System::Void Method_3_F85244FD47E27DD2(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_F85244FD47E27DD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_36AB16BDCCDEAF39(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_36AB16BDCCDEAF39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57F203F46F695331(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_57F203F46F695331_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3C34871F69670076(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B_METHOD_3_3C34871F69670076_OFFSET))(this, a1, a2);
	}
};
