#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_4D6304EB34542AE7_METHOD_1_082E0D3074B82CFC_OFFSET UNITYSDK_OFFSET(0x1CEE2F50)
#define CLASS_1_4D6304EB34542AE7_METHOD_1_5714B6A25EA57F4F_OFFSET UNITYSDK_OFFSET(0x1CEE2950)
#define CLASS_1_4D6304EB34542AE7_METHOD_1_6D7ECD0D8EE7C486_OFFSET UNITYSDK_OFFSET(0x1CEE3440)
#define CLASS_1_4D6304EB34542AE7_METHOD_1_F0DB58CC5277CCD3_OFFSET UNITYSDK_OFFSET(0x1CEE3EC0)

inline static constexpr unsigned int Class_1_4D6304EB34542AE7_TypeDefinitionIndex = 9605;

class Class_1_4D6304EB34542AE7 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_5714B6A25EA57F4F(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_4D6304EB34542AE7_METHOD_1_5714B6A25EA57F4F_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_082E0D3074B82CFC(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + CLASS_1_4D6304EB34542AE7_METHOD_1_082E0D3074B82CFC_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_6D7ECD0D8EE7C486(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_4D6304EB34542AE7_METHOD_1_6D7ECD0D8EE7C486_OFFSET))(a1);
	}

	static ::System::Nullable_1<::RPG::GameCore::FixPoint> Method_1_F0DB58CC5277CCD3(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + CLASS_1_4D6304EB34542AE7_METHOD_1_F0DB58CC5277CCD3_OFFSET))(a1);
	}
};
