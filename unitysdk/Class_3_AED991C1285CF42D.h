#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharLightToEntityDir; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_AED991C1285CF42D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1F9A80)
#define CLASS_3_AED991C1285CF42D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1F9AC0)
#define CLASS_3_AED991C1285CF42D__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1FA790)
#define CLASS_3_AED991C1285CF42D__CTOR_OFFSET UNITYSDK_OFFSET(0xC1F9A50)

inline static constexpr unsigned int Class_3_AED991C1285CF42D_TypeDefinitionIndex = 53221;

class Class_3_AED991C1285CF42D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharLightToEntityDir*>
{
public:
	static ::System::String** StaticGet_FJFEBMKPGLO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AED991C1285CF42D_TypeDefinitionIndex)->GetStaticField(0x4FE80);
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
};
