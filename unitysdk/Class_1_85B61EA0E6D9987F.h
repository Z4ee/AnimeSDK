#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_85B61EA0E6D9987F_METHOD_1_2656A4C8F30FFBE9_OFFSET UNITYSDK_OFFSET(0x16A92120)
#define CLASS_1_85B61EA0E6D9987F_METHOD_1_F06D56432F5FAF51_OFFSET UNITYSDK_OFFSET(0x16A92090)
#define CLASS_1_85B61EA0E6D9987F__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92200)

inline static constexpr unsigned int Class_1_85B61EA0E6D9987F_TypeDefinitionIndex = 55062;

class Class_1_85B61EA0E6D9987F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85B61EA0E6D9987F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_F06D56432F5FAF51(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_85B61EA0E6D9987F_METHOD_1_F06D56432F5FAF51_OFFSET))(this, a1);
	}

	::System::Void Method_1_2656A4C8F30FFBE9(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_85B61EA0E6D9987F_METHOD_1_2656A4C8F30FFBE9_OFFSET))(this, a1, a2);
	}
};
