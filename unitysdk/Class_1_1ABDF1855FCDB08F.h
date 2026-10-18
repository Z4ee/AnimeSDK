#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D05699509194BF9B;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_1ABDF1855FCDB08F_ADD_ONBUFFEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545330)
#define CLASS_1_1ABDF1855FCDB08F_ADD_ONISATTRIBUTESBUFFEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545090)
#define CLASS_1_1ABDF1855FCDB08F_ADD_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1C544F00)
#define CLASS_1_1ABDF1855FCDB08F_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C544FC0)
#define CLASS_1_1ABDF1855FCDB08F_GET_MOLD_OFFSET UNITYSDK_OFFSET(0x1C544D20)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1C545020)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C544FE0)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_5FDA89981A43E6BE_OFFSET UNITYSDK_OFFSET(0x1C545150)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_7BAAF08613961C16_OFFSET UNITYSDK_OFFSET(0x1C545190)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_7D2F8B2FE1EDA885_OFFSET UNITYSDK_OFFSET(0x1C5453F0)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_978C9C5D4BDB7168_OFFSET UNITYSDK_OFFSET(0x1C5454E0)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x1C544D40)
#define CLASS_1_1ABDF1855FCDB08F_METHOD_1_FE89E5CFA93D88C4_OFFSET UNITYSDK_OFFSET(0x1C544DA0)
#define CLASS_1_1ABDF1855FCDB08F_REMOVE_ONBUFFEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545390)
#define CLASS_1_1ABDF1855FCDB08F_REMOVE_ONISATTRIBUTESBUFFEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5450F0)
#define CLASS_1_1ABDF1855FCDB08F_REMOVE_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1C544F60)
#define CLASS_1_1ABDF1855FCDB08F_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C544FD0)
#define CLASS_1_1ABDF1855FCDB08F_SET_MOLD_OFFSET UNITYSDK_OFFSET(0x1C544D30)
#define CLASS_1_1ABDF1855FCDB08F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C545610)

inline static constexpr unsigned int Class_1_1ABDF1855FCDB08F_TypeDefinitionIndex = 41813;

class Class_1_1ABDF1855FCDB08F : public ::System::Object
{
public:
	::System::Action* OnTransformChanged; // 0x10
	::Class_1_D05699509194BF9B* _Mold_k__BackingField; // 0x18
	::System::Action* OnBuffedLinesChanged; // 0x20
	::System::Action* OnIsAttributesBuffedChanged; // 0x28
	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* OCJPDEKJKPF; // 0x30
	::System::Boolean MIKABFCDCGK; // 0x38
	::System::Boolean _IsLocked_k__BackingField; // 0x39
	::Struct_2_BDFB1B98046CDD46 PDJGEDNLBKJ; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F__CTOR_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* get_Mold()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_GET_MOLD_OFFSET))(this);
	}

	::System::Void set_Mold(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_SET_MOLD_OFFSET))(this, a1);
	}

	::Struct_2_BDFB1B98046CDD46 Method_1_BA80D36BDA3B5115()
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_BA80D36BDA3B5115_OFFSET))(this);
	}

	::System::Void Method_1_FE89E5CFA93D88C4(::Struct_2_BDFB1B98046CDD46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_FE89E5CFA93D88C4_OFFSET))(this, a1);
	}

	::System::Void add_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_ADD_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_REMOVE_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_GET_ISLOCKED_OFFSET))(this);
	}

	::System::Void set_IsLocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_SET_ISLOCKED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void add_OnIsAttributesBuffedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_ADD_ONISATTRIBUTESBUFFEDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsAttributesBuffedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_REMOVE_ONISATTRIBUTESBUFFEDCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* Method_1_5FDA89981A43E6BE()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_5FDA89981A43E6BE_OFFSET))(this);
	}

	::System::Void Method_1_7BAAF08613961C16(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_7BAAF08613961C16_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffedLinesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_ADD_ONBUFFEDLINESCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffedLinesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_REMOVE_ONBUFFEDLINESCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_7D2F8B2FE1EDA885()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_7D2F8B2FE1EDA885_OFFSET))(this);
	}

	::System::Void Method_1_978C9C5D4BDB7168(::UnityEngine::Vector2Int& a1, ::RPG::Client::MechCraft::MechCraftRotationType& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::RPG::Client::MechCraft::MechCraftRotationType&))((::PBYTE)hIl2Cpp + CLASS_1_1ABDF1855FCDB08F_METHOD_1_978C9C5D4BDB7168_OFFSET))(this, a1, a2);
	}
};
