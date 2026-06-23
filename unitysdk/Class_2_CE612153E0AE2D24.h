#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"

class Class_1_0A0B50D6899733CD;
class Class_1_0C18835FA06ACE81;
class Class_1_82A04EA7E45454A5_1;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CE612153E0AE2D24_METHOD_2_23C3E93A0EFE6705_OFFSET UNITYSDK_OFFSET(0x192282F0)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x192288E0)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_347EFFA1AED6F275_1_OFFSET UNITYSDK_OFFSET(0x19228B80)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_347EFFA1AED6F275_OFFSET UNITYSDK_OFFSET(0x19227990)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_465CE5E77F333E9F_OFFSET UNITYSDK_OFFSET(0x19228DB0)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_4B7BE75EB27CDF5E_OFFSET UNITYSDK_OFFSET(0x19228980)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_619F15E2550629B5_OFFSET UNITYSDK_OFFSET(0x19227BC0)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x192280A0)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_B530AE696D19BB54_OFFSET UNITYSDK_OFFSET(0x19227490)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_B8ADD1482F0B3E5B_OFFSET UNITYSDK_OFFSET(0x19229000)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_C0BFE60FE32BE2BE_OFFSET UNITYSDK_OFFSET(0x19228190)
#define CLASS_2_CE612153E0AE2D24_METHOD_2_E85571976C4E35B9_OFFSET UNITYSDK_OFFSET(0x19228210)
#define CLASS_2_CE612153E0AE2D24__CTOR_OFFSET UNITYSDK_OFFSET(0x192270B0)

inline static constexpr unsigned int Class_2_CE612153E0AE2D24_TypeDefinitionIndex = 66618;

class Class_2_CE612153E0AE2D24 : public ::Class_1_BE149A7D6310B037
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_2_10; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>* Field_2_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_2_9; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_7; // 0x30
	::System::Action* Field_2_13; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_0C18835FA06ACE81*>* Field_2_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* Field_2_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_14; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_82A04EA7E45454A5_1*>* Field_2_6; // 0x58
	::System::UInt64 Field_2_0; // 0x60
	::System::Int32 Field_2_15; // 0x68
	::System::Boolean Field_2_4; // 0x6C
	::System::Boolean Field_2_3; // 0x6D
	::System::Boolean Field_2_12; // 0x6E
	::System::UInt32 Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_B530AE696D19BB54(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_B530AE696D19BB54_OFFSET))(this, a1);
	}

	::System::Void Method_2_347EFFA1AED6F275(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_347EFFA1AED6F275_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_619F15E2550629B5(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_619F15E2550629B5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C0BFE60FE32BE2BE(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_C0BFE60FE32BE2BE_OFFSET))(this, a1);
	}

	::Class_1_0C18835FA06ACE81* Method_2_E85571976C4E35B9(::System::String* a1)
	{
		return ((::Class_1_0C18835FA06ACE81*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_E85571976C4E35B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_23C3E93A0EFE6705(::System::String* a1, ::System::String*& a2, ::System::Boolean& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*&, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_23C3E93A0EFE6705_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_4B7BE75EB27CDF5E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_4B7BE75EB27CDF5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_347EFFA1AED6F275_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_347EFFA1AED6F275_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_465CE5E77F333E9F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_465CE5E77F333E9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B8ADD1482F0B3E5B(::Class_1_0A0B50D6899733CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A0B50D6899733CD*))((::PBYTE)hIl2Cpp + CLASS_2_CE612153E0AE2D24_METHOD_2_B8ADD1482F0B3E5B_OFFSET))(this, a1);
	}
};
