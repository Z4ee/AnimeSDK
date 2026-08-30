#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5EBE290801EA4DF2;
class Class_2_17148030AA2B3E1D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3FC7D2303B279717_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AE24A0)
#define CLASS_1_3FC7D2303B279717_METHOD_1_11CAA7047444E8A2_OFFSET UNITYSDK_OFFSET(0x17AE24E0)
#define CLASS_1_3FC7D2303B279717_METHOD_1_889E15060A54A5A2_OFFSET UNITYSDK_OFFSET(0x17AE2590)
#define CLASS_1_3FC7D2303B279717_METHOD_1_989891818BC65EAC_OFFSET UNITYSDK_OFFSET(0x17AE2610)
#define CLASS_1_3FC7D2303B279717_METHOD_1_F5909B5FD6F94F42_OFFSET UNITYSDK_OFFSET(0x17AE29E0)
#define CLASS_1_3FC7D2303B279717__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE2400)

inline static constexpr unsigned int Class_1_3FC7D2303B279717_TypeDefinitionIndex = 52385;

class Class_1_3FC7D2303B279717 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5EBE290801EA4DF2*>* LLEEKMAIHFO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_17148030AA2B3E1D*>* LAHJMFDLJPL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FC7D2303B279717__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FC7D2303B279717_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_11CAA7047444E8A2(::System::UInt32 a1, ::Class_2_17148030AA2B3E1D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_17148030AA2B3E1D*))((::PBYTE)hIl2Cpp + CLASS_1_3FC7D2303B279717_METHOD_1_11CAA7047444E8A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_889E15060A54A5A2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3FC7D2303B279717_METHOD_1_889E15060A54A5A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_989891818BC65EAC(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::System::UInt32> a3, ::System::Nullable_1<::System::UInt32> a4, ::Il2CppArray<::System::UInt32>* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::System::UInt32>, ::System::Nullable_1<::System::UInt32>, ::Il2CppArray<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3FC7D2303B279717_METHOD_1_989891818BC65EAC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_F5909B5FD6F94F42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3FC7D2303B279717_METHOD_1_F5909B5FD6F94F42_OFFSET))(this, a1);
	}
};
