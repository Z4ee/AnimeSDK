#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63D18ECF87218619_2.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_15265A3D7B506C11;
class Class_1_C2473F69A4899C84;
class Class_2_6384A6CDC9AF1B4A_Class_1_E9D62BA1FE34A8FA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15ED01C0)
#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_1F1C98D6DF492EBF_OFFSET UNITYSDK_OFFSET(0x15ED0BA0)
#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_65DA0FCD3E81199E_OFFSET UNITYSDK_OFFSET(0x15ED01A0)
#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x15ED0EB0)
#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x15ED06A0)
#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_A57EEC8F6D5BFD18_OFFSET UNITYSDK_OFFSET(0x15ED0240)
#define CLASS_2_6384A6CDC9AF1B4A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15ED01B0)
#define CLASS_2_6384A6CDC9AF1B4A__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED10C0)

inline static constexpr unsigned int Class_2_6384A6CDC9AF1B4A_TypeDefinitionIndex = 60197;

class Class_2_6384A6CDC9AF1B4A : public ::Class_1_63D18ECF87218619_2
{
public:
	// static const ::System::Single CJOHBGHEONO; // 0x0
	// static const ::System::Int32 FOKKGCIOJEC = 0x0; // 0x0
	// static const ::System::String* GJDEBBJHEDE; // 0x0
	// static const ::System::Single PFDCDAPKIGK; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_6384A6CDC9AF1B4A_Class_1_E9D62BA1FE34A8FA*>* FDHOAEDHKCH; // 0x10
	::System::Single JDJGAJFHIDK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::PetDiySlotType Method_2_65DA0FCD3E81199E()
	{
		return ((::RPG::GameCore::PetDiySlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_65DA0FCD3E81199E_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_C2473F69A4899C84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2473F69A4899C84*))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57EEC8F6D5BFD18(::Class_1_15265A3D7B506C11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_A57EEC8F6D5BFD18_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E0634CDC64D0684(::Class_1_15265A3D7B506C11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F1C98D6DF492EBF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_1F1C98D6DF492EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6384A6CDC9AF1B4A_METHOD_2_686221D5DF498040_OFFSET))(this);
	}
};
