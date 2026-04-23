#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class CollectHeartDialCameraIndex; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_82EB2A4926976E63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FCC820)
#define CLASS_3_82EB2A4926976E63__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FCCAD0)
#define CLASS_3_82EB2A4926976E63__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCC7F0)

inline static constexpr unsigned int Class_3_82EB2A4926976E63_TypeDefinitionIndex = 48630;

class Class_3_82EB2A4926976E63 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CollectHeartDialCameraIndex*>
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_3_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_3_82EB2A4926976E63_TypeDefinitionIndex)->GetStaticField(0x107B0);
	}
	// static const ::System::String* Field_3_1; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectHeartDialCameraIndex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectHeartDialCameraIndex*))((::PBYTE)hIl2Cpp + CLASS_3_82EB2A4926976E63__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_82EB2A4926976E63__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82EB2A4926976E63_ONTASKBEGIN_OFFSET))(this);
	}
};
