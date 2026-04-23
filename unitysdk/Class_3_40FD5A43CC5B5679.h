#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAvatarBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40FD5A43CC5B5679_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128FFBF0)
#define CLASS_3_40FD5A43CC5B5679__CTOR_OFFSET UNITYSDK_OFFSET(0x128FFBC0)

inline static constexpr unsigned int Class_3_40FD5A43CC5B5679_TypeDefinitionIndex = 51087;

class Class_3_40FD5A43CC5B5679 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAvatarBaseType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarBaseType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarBaseType*))((::PBYTE)hIl2Cpp + CLASS_3_40FD5A43CC5B5679__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40FD5A43CC5B5679_ONTASKBEGIN_OFFSET))(this);
	}
};
