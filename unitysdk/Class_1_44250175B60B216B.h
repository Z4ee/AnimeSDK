#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_1_44250175B60B216B_METHOD_1_84BDC5BED533660B_OFFSET UNITYSDK_OFFSET(0x164437A0)
#define CLASS_1_44250175B60B216B_METHOD_1_A67FF3140E7FDB69_1_OFFSET UNITYSDK_OFFSET(0x16443990)
#define CLASS_1_44250175B60B216B_METHOD_1_A67FF3140E7FDB69_OFFSET UNITYSDK_OFFSET(0x16443900)
#define CLASS_1_44250175B60B216B_METHOD_1_B2A8BAAF32F350CB_OFFSET UNITYSDK_OFFSET(0x16443640)
#define CLASS_1_44250175B60B216B_METHOD_1_C174817F90C0B2C3_OFFSET UNITYSDK_OFFSET(0x164434E0)
#define CLASS_1_44250175B60B216B_METHOD_1_D0C42851D3E56E80_OFFSET UNITYSDK_OFFSET(0x164436C0)
#define CLASS_1_44250175B60B216B__CTOR_OFFSET UNITYSDK_OFFSET(0x16443A20)

inline static constexpr unsigned int Class_1_44250175B60B216B_TypeDefinitionIndex = 62549;

class Class_1_44250175B60B216B : public ::System::Object
{
public:
	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* CGIMEMDLCIB; // 0x10
	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* FFBFKGHBJAH; // 0x18
	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* AFJMAJOCMHO; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>* GFAIMKAKJBD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C174817F90C0B2C3(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B_METHOD_1_C174817F90C0B2C3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_84BDC5BED533660B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B_METHOD_1_84BDC5BED533660B_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A67FF3140E7FDB69(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B_METHOD_1_A67FF3140E7FDB69_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A67FF3140E7FDB69_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B_METHOD_1_A67FF3140E7FDB69_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_B2A8BAAF32F350CB(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B_METHOD_1_B2A8BAAF32F350CB_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarPropertyType Method_1_D0C42851D3E56E80(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_44250175B60B216B_METHOD_1_D0C42851D3E56E80_OFFSET))(this, a1);
	}
};
