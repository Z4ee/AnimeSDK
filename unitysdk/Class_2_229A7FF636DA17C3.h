#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_16.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_17.h"

class Class_1_355A2207C3B7A99D_75;
class Class_1_7FF19F6206AF6DD7_44;
class Class_1_963E317C37FB5E9A_60;
class Class_1_B5A923E6D262DF9D_3;
class Class_1_D17272E82AE804C2_783;
class Class_1_D17272E82AE804C2_784;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_229A7FF636DA17C3_METHOD_2_08BB839C831C98C0_OFFSET UNITYSDK_OFFSET(0x143462D0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_20C92412A64696F1_OFFSET UNITYSDK_OFFSET(0x14346200)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_2A6C0ECB8826F705_OFFSET UNITYSDK_OFFSET(0x14345AE0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_6896C9FB3F6EC8CB_OFFSET UNITYSDK_OFFSET(0x14345F70)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_8095DE0EAA81E3C3_OFFSET UNITYSDK_OFFSET(0x14345540)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_D1F665DF0089AEFB_OFFSET UNITYSDK_OFFSET(0x14345990)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_DEE8B9665480B979_OFFSET UNITYSDK_OFFSET(0x14345DD0)
#define CLASS_2_229A7FF636DA17C3_METHOD_2_E6C189F6304A5F5B_OFFSET UNITYSDK_OFFSET(0x14345660)
#define CLASS_2_229A7FF636DA17C3__CTOR_OFFSET UNITYSDK_OFFSET(0x14345470)
#define CLASS_2_229A7FF636DA17C3__SENDADDRELICPRESETPLAN_B__2_0_OFFSET UNITYSDK_OFFSET(0x14346480)
#define CLASS_2_229A7FF636DA17C3__SENDGETRELICPRESETPLAN_B__1_0_OFFSET UNITYSDK_OFFSET(0x143463B0)

inline static constexpr unsigned int Class_2_229A7FF636DA17C3_TypeDefinitionIndex = 62509;

class Class_2_229A7FF636DA17C3 : public ::Class_1_5E4ED920015DC82D
{
public:
	::RPG::Client::RelicPresetModel* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::RelicPresetModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetModel*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_7FF19F6206AF6DD7_44*>* Method_2_8095DE0EAA81E3C3(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_7FF19F6206AF6DD7_44*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_8095DE0EAA81E3C3_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_963E317C37FB5E9A_60*>* Method_2_E6C189F6304A5F5B(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::String* a3, ::Enum_3_71AA90D596A09AC8_16 a4, ::Enum_3_71AA90D596A09AC8_17 a5)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_963E317C37FB5E9A_60*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::String*, ::Enum_3_71AA90D596A09AC8_16, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_E6C189F6304A5F5B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_783*>* Method_2_D1F665DF0089AEFB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_D17272E82AE804C2_783*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_D1F665DF0089AEFB_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>* Method_2_2A6C0ECB8826F705(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::Enum_3_71AA90D596A09AC8_16 a4, ::Enum_3_71AA90D596A09AC8_17 a5)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_16, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_2A6C0ECB8826F705_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>* Method_2_DEE8B9665480B979(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_B5A923E6D262DF9D_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_DEE8B9665480B979_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6896C9FB3F6EC8CB(::System::UInt32 a1, ::Class_1_B5A923E6D262DF9D_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_B5A923E6D262DF9D_3*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_6896C9FB3F6EC8CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_20C92412A64696F1(::System::UInt16 a1, ::Class_1_D17272E82AE804C2_784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_D17272E82AE804C2_784*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_20C92412A64696F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08BB839C831C98C0(::System::UInt16 a1, ::Class_1_355A2207C3B7A99D_75* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_355A2207C3B7A99D_75*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3_METHOD_2_08BB839C831C98C0_OFFSET))(this, a1, a2);
	}

	::Class_1_7FF19F6206AF6DD7_44* _SendGetRelicPresetPlan_b__1_0(::Class_1_7FF19F6206AF6DD7_44* a1)
	{
		return ((::Class_1_7FF19F6206AF6DD7_44*(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_44*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__SENDGETRELICPRESETPLAN_B__1_0_OFFSET))(this, a1);
	}

	::Class_1_963E317C37FB5E9A_60* _SendAddRelicPresetPlan_b__2_0(::Class_1_963E317C37FB5E9A_60* a1)
	{
		return ((::Class_1_963E317C37FB5E9A_60*(*)(::PVOID, ::Class_1_963E317C37FB5E9A_60*))((::PBYTE)hIl2Cpp + CLASS_2_229A7FF636DA17C3__SENDADDRELICPRESETPLAN_B__2_0_OFFSET))(this, a1);
	}
};
