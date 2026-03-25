#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_1_CA604A479B70DDEA_METHOD_1_02DA6C62D66D1A8F_OFFSET UNITYSDK_OFFSET(0xA702BD0)
#define CLASS_1_CA604A479B70DDEA_METHOD_1_327232720FD8C072_OFFSET UNITYSDK_OFFSET(0xA702EB0)
#define CLASS_1_CA604A479B70DDEA_METHOD_1_A75D77CF366FF5B7_1_OFFSET UNITYSDK_OFFSET(0xA7032B0)
#define CLASS_1_CA604A479B70DDEA_METHOD_1_A75D77CF366FF5B7_OFFSET UNITYSDK_OFFSET(0xA7031A0)
#define CLASS_1_CA604A479B70DDEA_METHOD_1_B2A8BAAF32F350CB_OFFSET UNITYSDK_OFFSET(0xA702D50)
#define CLASS_1_CA604A479B70DDEA_METHOD_1_C6192E2A14A49855_OFFSET UNITYSDK_OFFSET(0xA702DD0)
#define CLASS_1_CA604A479B70DDEA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7033C0)

inline static constexpr unsigned int Class_1_CA604A479B70DDEA_TypeDefinitionIndex = 50766;

class Class_1_CA604A479B70DDEA : public ::System::Object
{
public:
	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Field_1_2; // 0x18
	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_02DA6C62D66D1A8F(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA_METHOD_1_02DA6C62D66D1A8F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_327232720FD8C072(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA_METHOD_1_327232720FD8C072_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A75D77CF366FF5B7(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA_METHOD_1_A75D77CF366FF5B7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A75D77CF366FF5B7_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA_METHOD_1_A75D77CF366FF5B7_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_B2A8BAAF32F350CB(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA_METHOD_1_B2A8BAAF32F350CB_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarPropertyType Method_1_C6192E2A14A49855(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_CA604A479B70DDEA_METHOD_1_C6192E2A14A49855_OFFSET))(this, a1);
	}
};
