#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1307;
class Class_2_48960C526AFA0F72;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_7315BEC18CBD51C3_METHOD_2_48EE6F8CA58AC368_OFFSET UNITYSDK_OFFSET(0x152D1900)
#define CLASS_2_7315BEC18CBD51C3_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x152D12B0)
#define CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET UNITYSDK_OFFSET(0x152D12A0)

inline static constexpr unsigned int Class_2_7315BEC18CBD51C3_TypeDefinitionIndex = 77794;

class Class_2_7315BEC18CBD51C3 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_48960C526AFA0F72* MKKLHFCCCNF; // 0x18
	::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x20
	::Class_0_16E4307DCC419505_1307* EEFMDEHLLFI; // 0x28
	::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x30
	::System::Single FOMCKBAHCFM; // 0x38
	::UnityEngine::Vector3 JNFHAIACECG; // 0x3C
	::System::Single MFLNKDOADDG; // 0x48
	::UnityEngine::Quaternion OKBPGPNJMFL; // 0x4C
	::UnityEngine::Vector3 KGMNHAFNOHK; // 0x5C
	::UnityEngine::Quaternion NGIMALNHLNI; // 0x68

	::System::Void _ctor(::Class_2_48960C526AFA0F72* a1, ::Class_0_16E4307DCC419505_1307* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48960C526AFA0F72*, ::Class_0_16E4307DCC419505_1307*))((::PBYTE)hIl2Cpp + CLASS_2_7315BEC18CBD51C3__CTOR_OFFSET))(this, a1, a2);
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
