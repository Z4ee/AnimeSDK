#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::GameCore { class GridFightWaitOpenOrb; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_30F9BDE2711C923A_METHOD_3_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x104B6E20)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x104B7300)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_6B181DF837608D32_OFFSET UNITYSDK_OFFSET(0x104B6F60)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x104B6D40)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_F6B7187F7AB59CCF_OFFSET UNITYSDK_OFFSET(0x104B6DD0)
#define CLASS_3_30F9BDE2711C923A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x104B6B80)
#define CLASS_3_30F9BDE2711C923A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x104B6EB0)
#define CLASS_3_30F9BDE2711C923A__CTOR_OFFSET UNITYSDK_OFFSET(0x104B6B70)
#define CLASS_3_30F9BDE2711C923A___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x104B7360)
#define CLASS_3_30F9BDE2711C923A___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET UNITYSDK_OFFSET(0x104B7270)

inline static constexpr unsigned int Class_3_30F9BDE2711C923A_TypeDefinitionIndex = 43377;

class Class_3_30F9BDE2711C923A : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::RPG::GameCore::GridFightWaitOpenOrb* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F6B7187F7AB59CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_F6B7187F7AB59CCF_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_3_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_3_6B181DF837608D32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_6B181DF837608D32_OFFSET))(this, a1);
	}

	::System::Boolean __OnGridFightRemoveOrb_b__6_0(::RPG::Client::GridFightOrbEntityData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET))(this, x);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
