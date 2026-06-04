#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::GameCore { class GridFightWaitOpenOrb; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_30F9BDE2711C923A_METHOD_3_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xA9B6200)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA9B6740)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xA9B60F0)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_74D7D68CC7C5EE33_OFFSET UNITYSDK_OFFSET(0xA9B6370)
#define CLASS_3_30F9BDE2711C923A_METHOD_3_F2608408E8EAEFBD_OFFSET UNITYSDK_OFFSET(0xA9B61B0)
#define CLASS_3_30F9BDE2711C923A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9B5E90)
#define CLASS_3_30F9BDE2711C923A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9B62C0)
#define CLASS_3_30F9BDE2711C923A__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B5E80)
#define CLASS_3_30F9BDE2711C923A___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9B67A0)
#define CLASS_3_30F9BDE2711C923A___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET UNITYSDK_OFFSET(0xA9B66B0)

inline static constexpr unsigned int Class_3_30F9BDE2711C923A_TypeDefinitionIndex = 50043;

class Class_3_30F9BDE2711C923A : public ::Class_2_7134DCF9ECF7587A
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

	::System::Void Method_3_F2608408E8EAEFBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_F2608408E8EAEFBD_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_3_74D7D68CC7C5EE33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A_METHOD_3_74D7D68CC7C5EE33_OFFSET))(this, a1);
	}

	::System::Boolean __OnGridFightRemoveOrb_b__6_0(::RPG::Client::GridFightOrbEntityData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + CLASS_3_30F9BDE2711C923A___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET))(this, a1);
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
