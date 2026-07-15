#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByMostAvatarBaseTypeMemberCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_060EBCAC10126241_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1731F760)
#define CLASS_3_060EBCAC10126241__CTOR_OFFSET UNITYSDK_OFFSET(0x1731F680)

inline static constexpr unsigned int Class_3_060EBCAC10126241_TypeDefinitionIndex = 52900;

class Class_3_060EBCAC10126241 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>* Field_3_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarBaseType, ::System::Int32>* Field_3_1; // 0x30
	::RPG::GameCore::StringHash Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*))((::PBYTE)hIl2Cpp + CLASS_3_060EBCAC10126241__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_060EBCAC10126241_ONTASKBEGIN_OFFSET))(this);
	}
};
