#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1243;
class Class_2_48960C526AFA0F72;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x17E973C0)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x17E96CE0)
#define CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E96CD0)

inline static constexpr unsigned int Class_2_7315BEC18CBD51C3_TypeDefinitionIndex = 74308;

class Class_2_7315BEC18CBD51C3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_1243* Field_2_1; // 0x20
	::Class_2_48960C526AFA0F72* Field_2_2; // 0x28
	::RPG::Client::Prop::DuelChimeraProxy* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x3C
	::UnityEngine::Vector3 Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x54
	::UnityEngine::Quaternion Field_2_8; // 0x58
	::UnityEngine::Quaternion Field_2_9; // 0x68

	::System::Void _ctor(::Class_2_48960C526AFA0F72* a1, ::Class_0_16E4307DCC419505_1243* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48960C526AFA0F72*, ::Class_0_16E4307DCC419505_1243*))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_48EE6F8CA58AC368(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET))(this, a1);
	}
};
