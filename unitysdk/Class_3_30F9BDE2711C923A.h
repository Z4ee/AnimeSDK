#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::GameCore { class GridFightWaitOpenOrb; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_30F9BDE2711C923A_METHOD_3_5242B274EDFF6B6A_OFFSET UNITYSDK_OFFSET(0x16DC82B0)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x16DC81F0)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_D4EBE3A7FC6728FC_OFFSET UNITYSDK_OFFSET(0x16DC8470)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x16DC8300)
#define CLASS_3_30F9BDE2711C923A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DC7F60)
#define CLASS_3_30F9BDE2711C923A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16DC83C0)
#define CLASS_3_30F9BDE2711C923A__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC7F50)
#define CLASS_3_30F9BDE2711C923A___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET UNITYSDK_OFFSET(0x16DC8860)

inline static constexpr unsigned int Class_3_30F9BDE2711C923A_TypeDefinitionIndex = 51125;

class Class_3_30F9BDE2711C923A : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::GridFightWaitOpenOrb* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5242B274EDFF6B6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_5242B274EDFF6B6A_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_3_D4EBE3A7FC6728FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_D4EBE3A7FC6728FC_OFFSET))(this, a1);
	}

	::System::Boolean __OnGridFightRemoveOrb_b__6_0(::RPG::Client::GridFightOrbEntityData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET))(this, a1);
	}
};
