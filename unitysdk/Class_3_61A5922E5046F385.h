#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_2_0206DD479BB5C906;
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_61A5922E5046F385_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1238AEB0)
#define CLASS_3_61A5922E5046F385_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1238B4C0)
#define CLASS_3_61A5922E5046F385_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1238B550)
#define CLASS_3_61A5922E5046F385_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1238A7B0)
#define CLASS_3_61A5922E5046F385__CCTOR_OFFSET UNITYSDK_OFFSET(0x1238AF00)
#define CLASS_3_61A5922E5046F385__CTOR_OFFSET UNITYSDK_OFFSET(0x1238AF80)

inline static constexpr unsigned int Class_3_61A5922E5046F385_TypeDefinitionIndex = 40966;

class Class_3_61A5922E5046F385 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_16 = 0x3C; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_5; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_3_13; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_0206DD479BB5C906*>* Field_3_6; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* Field_3_9; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_12; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_3_4; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Collider*>* Field_3_14; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_3_7; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_19; // 0x88
	::UnityEngine::Collider* Field_3_0; // 0x90
	::MoleMole::MonoEntityColliderManager* Field_3_2; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*>* Field_3_10; // 0xA0
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* Field_3_18; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Bounds>* Field_3_17; // 0xB0
	::UnityEngine::Collider* Field_3_1; // 0xB8
	::System::Int32 Field_3_11; // 0xC0
	::System::Boolean Field_3_8; // 0xC4
	::System::Boolean Field_3_15; // 0xC5

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61A5922E5046F385*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
