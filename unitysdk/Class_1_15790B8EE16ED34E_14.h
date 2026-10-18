#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7417CA3454CD3FC1;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_1_15790B8EE16ED34E_14_METHOD_1_22F33BBC28BFC695_OFFSET UNITYSDK_OFFSET(0x1C905350)
#define CLASS_1_15790B8EE16ED34E_14_METHOD_1_2C749D98084E96B2_OFFSET UNITYSDK_OFFSET(0x1C9052C0)
#define CLASS_1_15790B8EE16ED34E_14_METHOD_1_9B711920422D359A_OFFSET UNITYSDK_OFFSET(0x1C905470)
#define CLASS_1_15790B8EE16ED34E_14_METHOD_1_B58A2B3F72CE699F_OFFSET UNITYSDK_OFFSET(0x1C9053E0)
#define CLASS_1_15790B8EE16ED34E_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1C905500)

inline static constexpr unsigned int Class_1_15790B8EE16ED34E_14_TypeDefinitionIndex = 42829;

class Class_1_15790B8EE16ED34E_14 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15790B8EE16ED34E_14__CTOR_OFFSET))(this);
	}

	static ::Entitas::IAllOfMatcher_1<::Class_2_7417CA3454CD3FC1*>* Method_1_2C749D98084E96B2(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::Entitas::IAllOfMatcher_1<::Class_2_7417CA3454CD3FC1*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_15790B8EE16ED34E_14_METHOD_1_2C749D98084E96B2_OFFSET))(a1);
	}

	static ::Entitas::IAllOfMatcher_1<::Class_2_7417CA3454CD3FC1*>* Method_1_22F33BBC28BFC695(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_7417CA3454CD3FC1*>*>* a1)
	{
		return ((::Entitas::IAllOfMatcher_1<::Class_2_7417CA3454CD3FC1*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_7417CA3454CD3FC1*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_15790B8EE16ED34E_14_METHOD_1_22F33BBC28BFC695_OFFSET))(a1);
	}

	static ::Entitas::IAnyOfMatcher_1<::Class_2_7417CA3454CD3FC1*>* Method_1_B58A2B3F72CE699F(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::Entitas::IAnyOfMatcher_1<::Class_2_7417CA3454CD3FC1*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_15790B8EE16ED34E_14_METHOD_1_B58A2B3F72CE699F_OFFSET))(a1);
	}

	static ::Entitas::IAnyOfMatcher_1<::Class_2_7417CA3454CD3FC1*>* Method_1_9B711920422D359A(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_7417CA3454CD3FC1*>*>* a1)
	{
		return ((::Entitas::IAnyOfMatcher_1<::Class_2_7417CA3454CD3FC1*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_7417CA3454CD3FC1*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_15790B8EE16ED34E_14_METHOD_1_9B711920422D359A_OFFSET))(a1);
	}
};
