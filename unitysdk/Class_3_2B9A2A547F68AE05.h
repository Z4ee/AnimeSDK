#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_2.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class Object; }

#define CLASS_3_2B9A2A547F68AE05_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12577B10)
#define CLASS_3_2B9A2A547F68AE05_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x12577D60)
#define CLASS_3_2B9A2A547F68AE05_METHOD_3_6BD03EF96035098D_OFFSET UNITYSDK_OFFSET(0x12577E20)
#define CLASS_3_2B9A2A547F68AE05_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12578010)
#define CLASS_3_2B9A2A547F68AE05_METHOD_3_FD62C11F52CBE34E_OFFSET UNITYSDK_OFFSET(0x12577C40)
#define CLASS_3_2B9A2A547F68AE05_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12577AC0)
#define CLASS_3_2B9A2A547F68AE05__CCTOR_OFFSET UNITYSDK_OFFSET(0x12577B60)
#define CLASS_3_2B9A2A547F68AE05__CTOR_OFFSET UNITYSDK_OFFSET(0x12577BE0)

inline static constexpr unsigned int Class_3_2B9A2A547F68AE05_TypeDefinitionIndex = 68565;

class Class_3_2B9A2A547F68AE05 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x2; // 0x0
	::UnrealTypes::Object* Field_3_2; // 0x48
	::Foundation::AssetPath Field_3_1; // 0x50
	::Struct_2_B136CFD8FB6B8F37_2 Field_3_0; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_FD62C11F52CBE34E(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05_METHOD_3_FD62C11F52CBE34E_OFFSET))(this, a1);
	}

	static ::Class_3_2B9A2A547F68AE05* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_2B9A2A547F68AE05*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Void Method_3_6BD03EF96035098D(::StateTreeGameplay::ActorContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::ActorContext*))((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05_METHOD_3_6BD03EF96035098D_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B9A2A547F68AE05_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
