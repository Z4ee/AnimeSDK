#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_424DD384AAFD58F5;
class Class_1_AE54088C838A17D2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define CLASS_1_E93F0AA2D7EA238D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x962D4B0)
#define CLASS_1_E93F0AA2D7EA238D_GET_ANCHORGRIDSETS_OFFSET UNITYSDK_OFFSET(0x962DB70)
#define CLASS_1_E93F0AA2D7EA238D_GET_GRIDANCHORDATADICT_OFFSET UNITYSDK_OFFSET(0x962DB50)
#define CLASS_1_E93F0AA2D7EA238D_METHOD_1_0F1BD2D95FB8744E_OFFSET UNITYSDK_OFFSET(0x962D590)
#define CLASS_1_E93F0AA2D7EA238D_METHOD_1_6EA08A2266AD4608_OFFSET UNITYSDK_OFFSET(0x962D900)
#define CLASS_1_E93F0AA2D7EA238D_METHOD_1_B62F4B0ED62E1A4A_OFFSET UNITYSDK_OFFSET(0x962D6E0)
#define CLASS_1_E93F0AA2D7EA238D_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x962D330)
#define CLASS_1_E93F0AA2D7EA238D_SET_ANCHORGRIDSETS_OFFSET UNITYSDK_OFFSET(0x962DB80)
#define CLASS_1_E93F0AA2D7EA238D_SET_GRIDANCHORDATADICT_OFFSET UNITYSDK_OFFSET(0x962DB60)
#define CLASS_1_E93F0AA2D7EA238D__CTOR_OFFSET UNITYSDK_OFFSET(0x962DB90)

inline static constexpr unsigned int Class_1_E93F0AA2D7EA238D_TypeDefinitionIndex = 68219;

class Class_1_E93F0AA2D7EA238D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>* _GridAnchorDataDict_k__BackingField; // 0x10
	::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* _AnchorGridSets_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_DISPOSE_OFFSET))(this);
	}

	::Class_1_AE54088C838A17D2* Method_1_0F1BD2D95FB8744E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::AlleyPackAnchorType a4)
	{
		return ((::Class_1_AE54088C838A17D2*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_METHOD_1_0F1BD2D95FB8744E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_B62F4B0ED62E1A4A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_AE54088C838A17D2* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_METHOD_1_B62F4B0ED62E1A4A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6EA08A2266AD4608(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_AE54088C838A17D2* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_METHOD_1_6EA08A2266AD4608_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>* get_GridAnchorDataDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_GET_GRIDANCHORDATADICT_OFFSET))(this);
	}

	::System::Void set_GridAnchorDataDict(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>*))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_SET_GRIDANCHORDATADICT_OFFSET))(this, value);
	}

	::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* get_AnchorGridSets()
	{
		return ((::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_GET_ANCHORGRIDSETS_OFFSET))(this);
	}

	::System::Void set_AnchorGridSets(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_E93F0AA2D7EA238D_SET_ANCHORGRIDSETS_OFFSET))(this, value);
	}
};
