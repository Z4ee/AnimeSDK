#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_18.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_19.h"

class Class_1_242BFB9DE152D766_65;
class Class_1_28D410CCE235575F_20;
class Class_1_963E317C37FB5E9A_72;
class Class_1_B5A923E6D262DF9D_3;
class Class_1_D17272E82AE804C2_912;
class Class_1_D17272E82AE804C2_913;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_229A7FF636DA17C3_METHOD_2_08BB839C831C98C0_OFFSET UNITYSDK_OFFSET(0x188036E0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_20C92412A64696F1_OFFSET UNITYSDK_OFFSET(0x18803610)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_2A6C0ECB8826F705_OFFSET UNITYSDK_OFFSET(0x18802EF0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_6896C9FB3F6EC8CB_OFFSET UNITYSDK_OFFSET(0x18803380)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_8095DE0EAA81E3C3_OFFSET UNITYSDK_OFFSET(0x18802930)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_C21CD1ACDB5E5164_OFFSET UNITYSDK_OFFSET(0x18802A50)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_D1F665DF0089AEFB_OFFSET UNITYSDK_OFFSET(0x18802DA0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_DEE8B9665480B979_OFFSET UNITYSDK_OFFSET(0x188031E0)
#define CLASS_2_229A7FF636DA17C3__CTOR_OFFSET UNITYSDK_OFFSET(0x18802860)
#define CLASS_2_229A7FF636DA17C3__SENDADDRELICPRESETPLAN_B__2_0_OFFSET UNITYSDK_OFFSET(0x18803890)
#define CLASS_2_229A7FF636DA17C3__SENDGETRELICPRESETPLAN_B__1_0_OFFSET UNITYSDK_OFFSET(0x188037C0)

inline static constexpr unsigned int Class_2_229A7FF636DA17C3_TypeDefinitionIndex = 66866;

class Class_2_229A7FF636DA17C3 : public ::Class_1_5E4ED920015DC82D
{
public:
	::RPG::Client::RelicPresetModel* JOKBAPFCJFM; // 0x20

	::System::Void _ctor(::RPG::Client::RelicPresetModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetModel*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_28D410CCE235575F_20*>* Method_2_8095DE0EAA81E3C3(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_28D410CCE235575F_20*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_8095DE0EAA81E3C3_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_963E317C37FB5E9A_72*>* Method_2_C21CD1ACDB5E5164(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::String* a3, ::Enum_3_71AA90D596A09AC8_18 a4, ::Enum_3_71AA90D596A09AC8_19 a5)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_963E317C37FB5E9A_72*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::String*, ::Enum_3_71AA90D596A09AC8_18, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_C21CD1ACDB5E5164_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_912*>* Method_2_D1F665DF0089AEFB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_912*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_D1F665DF0089AEFB_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>* Method_2_2A6C0ECB8826F705(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::Enum_3_71AA90D596A09AC8_18 a4, ::Enum_3_71AA90D596A09AC8_19 a5)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_18, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_2A6C0ECB8826F705_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>* Method_2_DEE8B9665480B979(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_DEE8B9665480B979_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6896C9FB3F6EC8CB(::System::UInt32 a1, ::Class_1_B5A923E6D262DF9D_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_B5A923E6D262DF9D_3*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_6896C9FB3F6EC8CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_20C92412A64696F1(::System::UInt16 a1, ::Class_1_D17272E82AE804C2_913* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_D17272E82AE804C2_913*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_20C92412A64696F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08BB839C831C98C0(::System::UInt16 a1, ::Class_1_242BFB9DE152D766_65* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_242BFB9DE152D766_65*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_08BB839C831C98C0_OFFSET))(this, a1, a2);
	}

	::Class_1_28D410CCE235575F_20* _SendGetRelicPresetPlan_b__1_0(::Class_1_28D410CCE235575F_20* a1)
	{
		return ((::Class_1_28D410CCE235575F_20*(*)(::PVOID, ::Class_1_28D410CCE235575F_20*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__SENDGETRELICPRESETPLAN_B__1_0_OFFSET))(this, a1);
	}

	::Class_1_963E317C37FB5E9A_72* _SendAddRelicPresetPlan_b__2_0(::Class_1_963E317C37FB5E9A_72* a1)
	{
		return ((::Class_1_963E317C37FB5E9A_72*(*)(::PVOID, ::Class_1_963E317C37FB5E9A_72*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__SENDADDRELICPRESETPLAN_B__2_0_OFFSET))(this, a1);
	}
};
