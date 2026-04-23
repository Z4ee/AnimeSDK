#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F676196374D43FE7_METHOD_1_0778E2DD90CB496A_OFFSET UNITYSDK_OFFSET(0x191906E0)
#define CLASS_1_F676196374D43FE7_METHOD_1_5714B6A25EA57F4F_OFFSET UNITYSDK_OFFSET(0x19190A80)
#define CLASS_1_F676196374D43FE7_METHOD_1_785626A5EBB8167C_OFFSET UNITYSDK_OFFSET(0x19190370)
#define CLASS_1_F676196374D43FE7_METHOD_1_EEB27BCB0DB711B8_OFFSET UNITYSDK_OFFSET(0x19191140)

inline static constexpr unsigned int Class_1_F676196374D43FE7_TypeDefinitionIndex = 9594;

class Class_1_F676196374D43FE7 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_785626A5EBB8167C(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_F676196374D43FE7_METHOD_1_785626A5EBB8167C_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_0778E2DD90CB496A(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + CLASS_1_F676196374D43FE7_METHOD_1_0778E2DD90CB496A_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_5714B6A25EA57F4F(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_F676196374D43FE7_METHOD_1_5714B6A25EA57F4F_OFFSET))(a1);
	}

	static ::System::Nullable_1<::RPG::GameCore::FixPoint> Method_1_EEB27BCB0DB711B8(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + CLASS_1_F676196374D43FE7_METHOD_1_EEB27BCB0DB711B8_OFFSET))(a1);
	}
};
