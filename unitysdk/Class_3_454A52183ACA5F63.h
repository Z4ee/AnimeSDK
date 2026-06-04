#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayPenaconyEndmostMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_454A52183ACA5F63_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xABAEE30)
#define CLASS_3_454A52183ACA5F63_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABAECF0)
#define CLASS_3_454A52183ACA5F63__CTOR_OFFSET UNITYSDK_OFFSET(0xABAECC0)

inline static constexpr unsigned int Class_3_454A52183ACA5F63_TypeDefinitionIndex = 49605;

class Class_3_454A52183ACA5F63 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayPenaconyEndmostMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostMove*))((::PBYTE)hIl2Cpp + CLASS_3_454A52183ACA5F63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_454A52183ACA5F63_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_454A52183ACA5F63_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
