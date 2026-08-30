#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7343CA4E4EB2589D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1917F780)
#define CLASS_3_7343CA4E4EB2589D_METHOD_3_4700BDDF57038371_OFFSET UNITYSDK_OFFSET(0x1917FAD0)
#define CLASS_3_7343CA4E4EB2589D_METHOD_3_9DA0D46365FF3B6A_OFFSET UNITYSDK_OFFSET(0x1917FC80)
#define CLASS_3_7343CA4E4EB2589D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1917F7D0)
#define CLASS_3_7343CA4E4EB2589D__CTOR_OFFSET UNITYSDK_OFFSET(0x1917F750)

inline static constexpr unsigned int Class_3_7343CA4E4EB2589D_TypeDefinitionIndex = 58209;

class Class_3_7343CA4E4EB2589D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateProp*>
{
public:
	::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateProp*))((::PBYTE)hIl2Cpp + CLASS_3_7343CA4E4EB2589D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7343CA4E4EB2589D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7343CA4E4EB2589D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_4700BDDF57038371(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_7343CA4E4EB2589D_METHOD_3_4700BDDF57038371_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityClassifyType Method_3_9DA0D46365FF3B6A()
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7343CA4E4EB2589D_METHOD_3_9DA0D46365FF3B6A_OFFSET))(this);
	}
};
