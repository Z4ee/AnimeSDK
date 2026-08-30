#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class Map; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateNPC; }
namespace RPG::GameCore { class NpcEntityInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_2866935636895943_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157ECD60)
#define CLASS_3_2866935636895943_METHOD_3_33937F24660A3D0E_OFFSET UNITYSDK_OFFSET(0x157ED400)
#define CLASS_3_2866935636895943_METHOD_3_4A0C290E1D86CA09_OFFSET UNITYSDK_OFFSET(0x157ED0E0)
#define CLASS_3_2866935636895943_METHOD_3_7D05314627357D79_OFFSET UNITYSDK_OFFSET(0x157ECF90)
#define CLASS_3_2866935636895943_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157ECDB0)
#define CLASS_3_2866935636895943__CTOR_OFFSET UNITYSDK_OFFSET(0x157ECD30)

inline static constexpr unsigned int Class_3_2866935636895943_TypeDefinitionIndex = 58202;

class Class_3_2866935636895943 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateNPC*>
{
public:
	::RPG::Client::Map* NIEEEFLKLGA; // 0x28
	::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateNPC*))((::PBYTE)hIl2Cpp + CLASS_3_2866935636895943__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2866935636895943_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2866935636895943_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_7D05314627357D79(::RPG::GameCore::NpcEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_3_2866935636895943_METHOD_3_7D05314627357D79_OFFSET))(this, a1);
	}

	::System::Void Method_3_4A0C290E1D86CA09(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2866935636895943_METHOD_3_4A0C290E1D86CA09_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Map* Method_3_33937F24660A3D0E()
	{
		return ((::RPG::Client::Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2866935636895943_METHOD_3_33937F24660A3D0E_OFFSET))(this);
	}
};
