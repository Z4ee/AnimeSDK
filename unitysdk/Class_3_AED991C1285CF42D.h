#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharLightToEntityDir; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_AED991C1285CF42D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAED5A00)
#define CLASS_3_AED991C1285CF42D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAED5A40)
#define CLASS_3_AED991C1285CF42D__CCTOR_OFFSET UNITYSDK_OFFSET(0xAED63A0)
#define CLASS_3_AED991C1285CF42D__CTOR_OFFSET UNITYSDK_OFFSET(0xAED59D0)
#define CLASS_3_AED991C1285CF42D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAED63E0)

inline static constexpr unsigned int Class_3_AED991C1285CF42D_TypeDefinitionIndex = 49742;

class Class_3_AED991C1285CF42D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharLightToEntityDir*>
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AED991C1285CF42D_TypeDefinitionIndex)->GetStaticField(0x33870);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharLightToEntityDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharLightToEntityDir*))((::PBYTE)hIl2Cpp + CLASS_3_AED991C1285CF42D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AED991C1285CF42D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AED991C1285CF42D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AED991C1285CF42D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AED991C1285CF42D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
