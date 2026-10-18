#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F1D54EB966E8F64B_METHOD_1_09508D4C3BF6C3AF_OFFSET UNITYSDK_OFFSET(0x1C556C40)
#define CLASS_1_F1D54EB966E8F64B_METHOD_1_45AE82FF8529FD1B_OFFSET UNITYSDK_OFFSET(0x1C557010)
#define CLASS_1_F1D54EB966E8F64B_METHOD_1_6B3B12E90F79AE1C_OFFSET UNITYSDK_OFFSET(0x1C556B00)
#define CLASS_1_F1D54EB966E8F64B_METHOD_1_AD2D1394ABEDF4C2_OFFSET UNITYSDK_OFFSET(0x1C557270)

inline static constexpr unsigned int Class_1_F1D54EB966E8F64B_TypeDefinitionIndex = 41888;

class Class_1_F1D54EB966E8F64B : public ::System::Object
{
public:
	static ::System::Int32 Method_1_6B3B12E90F79AE1C(::Class_0_16E4307DCC419505_116* a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2, ::RPG::Client::MechCraft::MechCraftAttributeType a3)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_116*, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_F1D54EB966E8F64B_METHOD_1_6B3B12E90F79AE1C_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_09508D4C3BF6C3AF(::Class_0_16E4307DCC419505_116* a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a2, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a3)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_116*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_F1D54EB966E8F64B_METHOD_1_09508D4C3BF6C3AF_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_45AE82FF8529FD1B(::Class_0_16E4307DCC419505_116* a1, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a2, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a3)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_116*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_F1D54EB966E8F64B_METHOD_1_45AE82FF8529FD1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>* Method_1_AD2D1394ABEDF4C2(::Class_0_16E4307DCC419505_116* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::Class_0_16E4307DCC419505_116*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1D54EB966E8F64B_METHOD_1_AD2D1394ABEDF4C2_OFFSET))(a1, a2);
	}
};
