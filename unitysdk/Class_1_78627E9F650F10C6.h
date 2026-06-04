#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_78627E9F650F10C6_METHOD_1_6C43E07DC10A99B5_OFFSET UNITYSDK_OFFSET(0x19EDF2B0)
#define CLASS_1_78627E9F650F10C6_METHOD_1_785626A5EBB8167C_OFFSET UNITYSDK_OFFSET(0x19EDF600)
#define CLASS_1_78627E9F650F10C6_METHOD_1_BCC33E00437BA866_OFFSET UNITYSDK_OFFSET(0x19EDEE30)
#define CLASS_1_78627E9F650F10C6_METHOD_1_DD64D39FFD513C22_OFFSET UNITYSDK_OFFSET(0x19EDFE30)

inline static constexpr unsigned int Class_1_78627E9F650F10C6_TypeDefinitionIndex = 9592;

class Class_1_78627E9F650F10C6 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_BCC33E00437BA866(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_78627E9F650F10C6_METHOD_1_BCC33E00437BA866_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_6C43E07DC10A99B5(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + CLASS_1_78627E9F650F10C6_METHOD_1_6C43E07DC10A99B5_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_785626A5EBB8167C(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_78627E9F650F10C6_METHOD_1_785626A5EBB8167C_OFFSET))(a1);
	}

	static ::System::Nullable_1<::RPG::GameCore::FixPoint> Method_1_DD64D39FFD513C22(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + CLASS_1_78627E9F650F10C6_METHOD_1_DD64D39FFD513C22_OFFSET))(a1);
	}
};
