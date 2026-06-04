#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0F1ECB28664B98E3_CLEAR_OFFSET UNITYSDK_OFFSET(0x13AE71E0)
#define CLASS_1_0F1ECB28664B98E3_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x13AE7230)
#define CLASS_1_0F1ECB28664B98E3_METHOD_1_5D0387964FCFFB35_OFFSET UNITYSDK_OFFSET(0x13AE7150)
#define CLASS_1_0F1ECB28664B98E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AE7270)
#define CLASS_1_0F1ECB28664B98E3__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE7260)

inline static constexpr unsigned int Class_1_0F1ECB28664B98E3_TypeDefinitionIndex = 55153;

class Class_1_0F1ECB28664B98E3 : public ::System::Object
{
public:
	static ::Class_1_0F1ECB28664B98E3** StaticGet__Default_k__BackingField()
	{
		return (::Class_1_0F1ECB28664B98E3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F1ECB28664B98E3_TypeDefinitionIndex)->GetStaticField(0x431C0);
	}
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* Field_1_2; // 0x18
	::UnityEngine::Transform* Field_1_3; // 0x20
	::UnityEngine::Animator* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::System::Boolean Field_1_8; // 0x3A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F1ECB28664B98E3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F1ECB28664B98E3__CCTOR_OFFSET))();
	}

	::System::Int32 Method_1_5D0387964FCFFB35(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F1ECB28664B98E3_METHOD_1_5D0387964FCFFB35_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F1ECB28664B98E3_CLEAR_OFFSET))(this);
	}

	static ::Class_1_0F1ECB28664B98E3* get_Default()
	{
		return ((::Class_1_0F1ECB28664B98E3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F1ECB28664B98E3_GET_DEFAULT_OFFSET))();
	}
};
