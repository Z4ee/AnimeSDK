#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockCurrentSceneTransferAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C9047605E457AC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD25EB0)
#define CLASS_3_2C9047605E457AC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD25DF0)
#define CLASS_3_2C9047605E457AC5__CTOR_OFFSET UNITYSDK_OFFSET(0xAD25DC0)
#define CLASS_3_2C9047605E457AC5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD25F60)

inline static constexpr unsigned int Class_3_2C9047605E457AC5_TypeDefinitionIndex = 49526;

class Class_3_2C9047605E457AC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockCurrentSceneTransferAction*>
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCurrentSceneTransferAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCurrentSceneTransferAction*))((::PBYTE)hIl2Cpp + CLASS_3_2C9047605E457AC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9047605E457AC5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9047605E457AC5_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9047605E457AC5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
