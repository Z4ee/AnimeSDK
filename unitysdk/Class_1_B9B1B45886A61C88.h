#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_421;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_B9B1B45886A61C88_METHOD_1_148DEA88BCF3E5A2_OFFSET UNITYSDK_OFFSET(0xD540DE0)
#define CLASS_1_B9B1B45886A61C88_METHOD_1_14FD8276DF85E030_OFFSET UNITYSDK_OFFSET(0xD540CE0)
#define CLASS_1_B9B1B45886A61C88_METHOD_1_267E33EAC5E53166_OFFSET UNITYSDK_OFFSET(0xD5414D0)

inline static constexpr unsigned int Class_1_B9B1B45886A61C88_TypeDefinitionIndex = 62733;

class Class_1_B9B1B45886A61C88 : public ::System::Object
{
public:
	static ::System::Void Method_1_14FD8276DF85E030(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_421*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_421*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_B9B1B45886A61C88_METHOD_1_14FD8276DF85E030_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_148DEA88BCF3E5A2(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_421*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_421*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9B1B45886A61C88_METHOD_1_148DEA88BCF3E5A2_OFFSET))(a1);
	}

	static ::System::Void Method_1_267E33EAC5E53166(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_B9B1B45886A61C88_METHOD_1_267E33EAC5E53166_OFFSET))(a1, a2, a3);
	}
};
