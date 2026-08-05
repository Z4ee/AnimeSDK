#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_EEB7CE274143CBBC_METHOD_1_50ACC844E62528F0_OFFSET UNITYSDK_OFFSET(0x16DEF450)
#define CLASS_1_EEB7CE274143CBBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DEF930)
#define CLASS_1_EEB7CE274143CBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEF920)

inline static constexpr unsigned int Class_1_EEB7CE274143CBBC_TypeDefinitionIndex = 66889;

class Class_1_EEB7CE274143CBBC : public ::System::Object
{
public:
	static ::Class_1_EEB7CE274143CBBC** StaticGet_Field_1_0()
	{
		return (::Class_1_EEB7CE274143CBBC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EEB7CE274143CBBC_TypeDefinitionIndex)->GetStaticField(0x51470);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEB7CE274143CBBC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EEB7CE274143CBBC__CCTOR_OFFSET))();
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_50ACC844E62528F0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Foundation::ViewObject::GroupMemberIdentifier a3)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_EEB7CE274143CBBC_METHOD_1_50ACC844E62528F0_OFFSET))(this, a1, a2, a3);
	}
};
