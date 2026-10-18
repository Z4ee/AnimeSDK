#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1449;
class Class_2_48960C526AFA0F72;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x155BD2A0)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x155BCC50)
#define CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET UNITYSDK_OFFSET(0x155BCC40)

inline static constexpr unsigned int Class_2_7315BEC18CBD51C3_TypeDefinitionIndex = 78265;

class Class_2_7315BEC18CBD51C3 : public ::Class_1_FD611945730E269E
{
public:
	::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x18
	::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x20
	::Class_0_16E4307DCC419505_1449* EEFMDEHLLFI; // 0x28
	::Class_2_48960C526AFA0F72* MKKLHFCCCNF; // 0x30
	::System::Single FOMCKBAHCFM; // 0x38
	::UnityEngine::Quaternion NGIMALNHLNI; // 0x3C
	::UnityEngine::Vector3 JNFHAIACECG; // 0x4C
	::System::Single MFLNKDOADDG; // 0x58
	::UnityEngine::Quaternion OKBPGPNJMFL; // 0x5C
	::UnityEngine::Vector3 KGMNHAFNOHK; // 0x6C

	::System::Void _ctor(::Class_2_48960C526AFA0F72* a1, ::Class_0_16E4307DCC419505_1449* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48960C526AFA0F72*, ::Class_0_16E4307DCC419505_1449*))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_48EE6F8CA58AC368(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET))(this, a1);
	}
};
