#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F;
class Class_3_7BF98046FA3EA064;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5742B37FBACD916C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A83BEC0)
#define CLASS_3_5742B37FBACD916C_METHOD_3_2452B9F2AE61E0FD_OFFSET UNITYSDK_OFFSET(0x1A83C680)
#define CLASS_3_5742B37FBACD916C_METHOD_3_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x1A83CB20)
#define CLASS_3_5742B37FBACD916C_METHOD_3_9E4E0CFE28FD2E57_OFFSET UNITYSDK_OFFSET(0x1A83C120)
#define CLASS_3_5742B37FBACD916C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A83C590)
#define CLASS_3_5742B37FBACD916C_METHOD_3_A22DD5DDA67F11B8_OFFSET UNITYSDK_OFFSET(0x1A83C340)
#define CLASS_3_5742B37FBACD916C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1A83C510)
#define CLASS_3_5742B37FBACD916C_METHOD_3_D8A4E0E47217118A_OFFSET UNITYSDK_OFFSET(0x1A83CBB0)
#define CLASS_3_5742B37FBACD916C_METHOD_3_E29A20B8A3DBE676_OFFSET UNITYSDK_OFFSET(0x1A83C620)
#define CLASS_3_5742B37FBACD916C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A83BD20)
#define CLASS_3_5742B37FBACD916C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A83BF10)
#define CLASS_3_5742B37FBACD916C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83BF90)

inline static constexpr unsigned int Class_3_5742B37FBACD916C_TypeDefinitionIndex = 46647;

class Class_3_5742B37FBACD916C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xA5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Int32>*>*>* Field_3_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_5742B37FBACD916C_Class_1_D053D157E102D01F*>* Field_3_0; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Int32>*>*>* Field_3_3; // 0x58
	::Class_3_7BF98046FA3EA064* Field_3_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_9E4E0CFE28FD2E57(::System::String* a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_9E4E0CFE28FD2E57_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A22DD5DDA67F11B8(::System::String* a1, ::Class_3_7BF98046FA3EA064* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_7BF98046FA3EA064*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_A22DD5DDA67F11B8_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_5742B37FBACD916C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5742B37FBACD916C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_E29A20B8A3DBE676(::Class_3_7BF98046FA3EA064* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_7BF98046FA3EA064*))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_E29A20B8A3DBE676_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_2452B9F2AE61E0FD(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::Class_3_7BF98046FA3EA064* a4, ::MoleMole::Config::InteractEntry* a5)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::Class_3_7BF98046FA3EA064*, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_2452B9F2AE61E0FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::System::Void Method_3_D8A4E0E47217118A(::System::String* a1, ::System::Int32 a2, ::Class_3_7BF98046FA3EA064* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_3_7BF98046FA3EA064*))((::PBYTE)hIl2Cpp + CLASS_3_5742B37FBACD916C_METHOD_3_D8A4E0E47217118A_OFFSET))(this, a1, a2, a3);
	}
};
