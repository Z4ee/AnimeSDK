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

#define CLASS_1_5E2D533DC7C7E714_ADD_ONBUFFEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5737E0)
#define CLASS_1_5E2D533DC7C7E714_ADD_ONISATTRIBUTESBUFFEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C573540)
#define CLASS_1_5E2D533DC7C7E714_ADD_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5733B0)
#define CLASS_1_5E2D533DC7C7E714_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C573470)
#define CLASS_1_5E2D533DC7C7E714_GET_MOLD_OFFSET UNITYSDK_OFFSET(0x1C5731D0)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1C5734D0)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C573490)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_5FDA89981A43E6BE_OFFSET UNITYSDK_OFFSET(0x1C573600)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_7BAAF08613961C16_OFFSET UNITYSDK_OFFSET(0x1C573640)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x1C5731F0)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_E63B6F1C8589BF3D_OFFSET UNITYSDK_OFFSET(0x1C573990)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_E9D68C41F7CCA6C9_OFFSET UNITYSDK_OFFSET(0x1C5738A0)
#define CLASS_1_5E2D533DC7C7E714_METHOD_1_FE89E5CFA93D88C4_OFFSET UNITYSDK_OFFSET(0x1C573250)
#define CLASS_1_5E2D533DC7C7E714_REMOVE_ONBUFFEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C573840)
#define CLASS_1_5E2D533DC7C7E714_REMOVE_ONISATTRIBUTESBUFFEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5735A0)
#define CLASS_1_5E2D533DC7C7E714_REMOVE_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1C573410)
#define CLASS_1_5E2D533DC7C7E714_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C573480)
#define CLASS_1_5E2D533DC7C7E714_SET_MOLD_OFFSET UNITYSDK_OFFSET(0x1C5731E0)
#define CLASS_1_5E2D533DC7C7E714__CTOR_OFFSET UNITYSDK_OFFSET(0x1C573AC0)

inline static constexpr unsigned int Class_1_5E2D533DC7C7E714_TypeDefinitionIndex = 41813;

class Class_1_5E2D533DC7C7E714 : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B* _Mold_k__BackingField; // 0x10
	::System::Action* OnIsAttributesBuffedChanged; // 0x18
	::System::Action* OnTransformChanged; // 0x20
	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* OCJPDEKJKPF; // 0x28
	::System::Action* OnBuffedLinesChanged; // 0x30
	::Struct_2_BDFB1B98046CDD46 PDJGEDNLBKJ; // 0x38
	::System::Boolean MIKABFCDCGK; // 0x44
	::System::Boolean _IsLocked_k__BackingField; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714__CTOR_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* get_Mold()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_GET_MOLD_OFFSET))(this);
	}

	::System::Void set_Mold(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_SET_MOLD_OFFSET))(this, a1);
	}

	::Struct_2_BDFB1B98046CDD46 Method_1_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_895E6BF2EDCD95D0_OFFSET))(this);
	}

	::System::Void Method_1_FE89E5CFA93D88C4(::Struct_2_BDFB1B98046CDD46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_FE89E5CFA93D88C4_OFFSET))(this, a1);
	}

	::System::Void add_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_ADD_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnTransformChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_REMOVE_ONTRANSFORMCHANGED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_GET_ISLOCKED_OFFSET))(this);
	}

	::System::Void set_IsLocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_SET_ISLOCKED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void add_OnIsAttributesBuffedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_ADD_ONISATTRIBUTESBUFFEDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsAttributesBuffedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_REMOVE_ONISATTRIBUTESBUFFEDCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* Method_1_5FDA89981A43E6BE()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_5FDA89981A43E6BE_OFFSET))(this);
	}

	::System::Void Method_1_7BAAF08613961C16(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_7BAAF08613961C16_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffedLinesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_ADD_ONBUFFEDLINESCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffedLinesChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_REMOVE_ONBUFFEDLINESCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_E9D68C41F7CCA6C9()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_E9D68C41F7CCA6C9_OFFSET))(this);
	}

	::System::Void Method_1_E63B6F1C8589BF3D(::UnityEngine::Vector2Int& a1, ::RPG::Client::MechCraft::MechCraftRotationType& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::RPG::Client::MechCraft::MechCraftRotationType&))((::PBYTE)hIl2Cpp + CLASS_1_5E2D533DC7C7E714_METHOD_1_E63B6F1C8589BF3D_OFFSET))(this, a1, a2);
	}
};
