#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetSpecialVisionOn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65B8CD3A722A73FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1169B670)
#define CLASS_3_65B8CD3A722A73FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1169B640)

inline static constexpr unsigned int Class_3_65B8CD3A722A73FD_TypeDefinitionIndex = 47270;

class Class_3_65B8CD3A722A73FD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSpecialVisionOn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSpecialVisionOn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSpecialVisionOn*))((::PBYTE)hIl2Cpp + CLASS_3_65B8CD3A722A73FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65B8CD3A722A73FD_ONTASKBEGIN_OFFSET))(this);
	}
};
