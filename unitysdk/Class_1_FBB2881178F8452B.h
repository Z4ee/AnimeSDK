#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_424DD384AAFD58F5;
class Class_1_AE54088C838A17D2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define CLASS_1_FBB2881178F8452B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FC6390)
#define CLASS_1_FBB2881178F8452B_GET_ANCHORGRIDSETS_OFFSET UNITYSDK_OFFSET(0x15FC6AD0)
#define CLASS_1_FBB2881178F8452B_GET_GRIDANCHORDATADICT_OFFSET UNITYSDK_OFFSET(0x15FC6AB0)
#define CLASS_1_FBB2881178F8452B_METHOD_1_39CAE0887065C8AF_OFFSET UNITYSDK_OFFSET(0x15FC6830)
#define CLASS_1_FBB2881178F8452B_METHOD_1_522B021EBB55F8E1_OFFSET UNITYSDK_OFFSET(0x15FC65E0)
#define CLASS_1_FBB2881178F8452B_METHOD_1_8E4CBB169825F37A_OFFSET UNITYSDK_OFFSET(0x15FC64C0)
#define CLASS_1_FBB2881178F8452B_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15FC61E0)
#define CLASS_1_FBB2881178F8452B_SET_ANCHORGRIDSETS_OFFSET UNITYSDK_OFFSET(0x15FC6AE0)
#define CLASS_1_FBB2881178F8452B_SET_GRIDANCHORDATADICT_OFFSET UNITYSDK_OFFSET(0x15FC6AC0)
#define CLASS_1_FBB2881178F8452B__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC6AF0)

inline static constexpr unsigned int Class_1_FBB2881178F8452B_TypeDefinitionIndex = 70714;

class Class_1_FBB2881178F8452B : public ::System::Object
{
public:
	::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* _AnchorGridSets_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>* _GridAnchorDataDict_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_DISPOSE_OFFSET))(this);
	}

	::Class_1_AE54088C838A17D2* Method_1_8E4CBB169825F37A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::AlleyPackAnchorType a4)
	{
		return ((::Class_1_AE54088C838A17D2*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_METHOD_1_8E4CBB169825F37A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_522B021EBB55F8E1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_AE54088C838A17D2* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_METHOD_1_522B021EBB55F8E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_39CAE0887065C8AF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_AE54088C838A17D2* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_METHOD_1_39CAE0887065C8AF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>* get_GridAnchorDataDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_GET_GRIDANCHORDATADICT_OFFSET))(this);
	}

	::System::Void set_GridAnchorDataDict(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::Class_1_424DD384AAFD58F5*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_SET_GRIDANCHORDATADICT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* get_AnchorGridSets()
	{
		return ((::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_GET_ANCHORGRIDSETS_OFFSET))(this);
	}

	::System::Void set_AnchorGridSets(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_SET_ANCHORGRIDSETS_OFFSET))(this, a1);
	}
};
