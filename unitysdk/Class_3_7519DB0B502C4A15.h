#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DecalPuzzleStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_7519DB0B502C4A15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE31690)
#define CLASS_3_7519DB0B502C4A15__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE31CA0)
#define CLASS_3_7519DB0B502C4A15__CTOR_OFFSET UNITYSDK_OFFSET(0xDE31660)

inline static constexpr unsigned int Class_3_7519DB0B502C4A15_TypeDefinitionIndex = 49327;

class Class_3_7519DB0B502C4A15 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DecalPuzzleStart*>
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7519DB0B502C4A15_TypeDefinitionIndex)->GetStaticField(0x68E10);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecalPuzzleStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecalPuzzleStart*))((::PBYTE)hIl2Cpp + CLASS_3_7519DB0B502C4A15__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7519DB0B502C4A15__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7519DB0B502C4A15_ONTASKBEGIN_OFFSET))(this);
	}
};
