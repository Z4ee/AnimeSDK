#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_ACDBC0A3CD89B5C3;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02E912740C419AD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7B7D10)
#define CLASS_1_02E912740C419AD3_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1A7B7BF0)
#define CLASS_1_02E912740C419AD3_METHOD_1_28A782D60230B4F1_OFFSET UNITYSDK_OFFSET(0x1A7B8260)
#define CLASS_1_02E912740C419AD3_METHOD_1_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0x1A7B8500)
#define CLASS_1_02E912740C419AD3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A7B86E0)
#define CLASS_1_02E912740C419AD3_METHOD_1_49559FFD8B7FEB23_OFFSET UNITYSDK_OFFSET(0x1A7B8110)
#define CLASS_1_02E912740C419AD3_METHOD_1_BD5B1FFF405BD771_OFFSET UNITYSDK_OFFSET(0x1A7B7F50)
#define CLASS_1_02E912740C419AD3_METHOD_1_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x1A7B86A0)
#define CLASS_1_02E912740C419AD3_METHOD_1_CE3C9FF63C908564_OFFSET UNITYSDK_OFFSET(0x1A7B8000)
#define CLASS_1_02E912740C419AD3_METHOD_1_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0x1A7B7E30)
#define CLASS_1_02E912740C419AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B8720)

inline static constexpr unsigned int Class_1_02E912740C419AD3_TypeDefinitionIndex = 71954;

class Class_1_02E912740C419AD3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACDBC0A3CD89B5C3*>* KNAAKCEOCJO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACDBC0A3CD89B5C3*>* HNDJBJMDGNN; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* OLGHHHOFDBA; // 0x20
	::System::Boolean PPPHKMHOIAG; // 0x28
	::System::Boolean EMJHNHGEFKP; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_DISPOSE_OFFSET))(this);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_1_BD5B1FFF405BD771(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_BD5B1FFF405BD771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Method_1_CE3C9FF63C908564(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_CE3C9FF63C908564_OFFSET))(this, a1);
	}

	::System::Void Method_1_49559FFD8B7FEB23(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_49559FFD8B7FEB23_OFFSET))(this, a1);
	}

	::System::Void Method_1_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_1_28A782D60230B4F1(::Class_1_36816D4DE394D200* a1)
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_28A782D60230B4F1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_C446CE6A5E1982BC()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_C446CE6A5E1982BC_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
