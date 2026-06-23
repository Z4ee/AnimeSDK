#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeInstanceHandle.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class Object; }

#define CLASS_3_5F87CE2CF67D917A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x151FDA90)
#define CLASS_3_5F87CE2CF67D917A_METHOD_3_000E4577188F994E_OFFSET UNITYSDK_OFFSET(0x151FDE40)
#define CLASS_3_5F87CE2CF67D917A_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x151FDEF0)
#define CLASS_3_5F87CE2CF67D917A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x151FDDB0)
#define CLASS_3_5F87CE2CF67D917A_METHOD_3_C1BD1E93C91EE640_OFFSET UNITYSDK_OFFSET(0x151FDBC0)
#define CLASS_3_5F87CE2CF67D917A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x151FDA40)
#define CLASS_3_5F87CE2CF67D917A__CCTOR_OFFSET UNITYSDK_OFFSET(0x151FDAE0)
#define CLASS_3_5F87CE2CF67D917A__CTOR_OFFSET UNITYSDK_OFFSET(0x151FDB60)

inline static constexpr unsigned int Class_3_5F87CE2CF67D917A_TypeDefinitionIndex = 54695;

class Class_3_5F87CE2CF67D917A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x2; // 0x0
	::Foundation::AssetPath Field_3_1; // 0x48
	::UnrealTypes::Object* Field_3_0; // 0x58
	::NPCCrowd::Ability::StateTreeInstanceHandle Field_3_2; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_C1BD1E93C91EE640(::StateTreeGameplay::ActorContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::ActorContext*))((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A_METHOD_3_C1BD1E93C91EE640_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_000E4577188F994E(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A_METHOD_3_000E4577188F994E_OFFSET))(this, a1);
	}

	static ::Class_3_5F87CE2CF67D917A* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_5F87CE2CF67D917A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5F87CE2CF67D917A_METHOD_3_323F95926A2F616E_OFFSET))();
	}
};
