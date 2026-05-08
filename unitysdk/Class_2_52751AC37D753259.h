#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_52751AC37D753259_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13F4CC20)
#define CLASS_2_52751AC37D753259_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13F4CDB0)
#define CLASS_2_52751AC37D753259_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13F4D1F0)
#define CLASS_2_52751AC37D753259_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F4D160)
#define CLASS_2_52751AC37D753259_METHOD_2_EF0E8E68D22B11ED_OFFSET UNITYSDK_OFFSET(0x13F4CE40)
#define CLASS_2_52751AC37D753259__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F4CD30)
#define CLASS_2_52751AC37D753259__CTOR_OFFSET UNITYSDK_OFFSET(0x13F4CDA0)

inline static constexpr unsigned int Class_2_52751AC37D753259_TypeDefinitionIndex = 81808;

class Class_2_52751AC37D753259 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_8 = 0xBF; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_1; // 0x20
	::MoleMole::Config::ConfigPosRot* Field_2_5; // 0x28
	::System::String* Field_2_2; // 0x30
	::System::String* Field_2_0; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_2_7; // 0x40
	::MoleMole::Config::ConfigPosRot* Field_2_6; // 0x48
	::System::Boolean Field_2_3; // 0x50
	::System::Int32 Field_2_4; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_EF0E8E68D22B11ED(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::MoleMole::Config::ConfigPosRot* a5, ::MoleMole::Config::ConfigPosRot* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Collections::Generic::List_1<::System::String*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259_METHOD_2_EF0E8E68D22B11ED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52751AC37D753259_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
