#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_263B64D8FC8C9763.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC13E3896EFF750B_CLONE_OFFSET UNITYSDK_OFFSET(0x185DA200)
#define CLASS_2_EC13E3896EFF750B_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x185D9F40)
#define CLASS_2_EC13E3896EFF750B_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x185DA060)
#define CLASS_2_EC13E3896EFF750B__CTOR_OFFSET UNITYSDK_OFFSET(0x185DA360)
#define CLASS_2_EC13E3896EFF750B__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x185DA300)

inline static constexpr unsigned int Class_2_EC13E3896EFF750B_TypeDefinitionIndex = 54622;

class Class_2_EC13E3896EFF750B : public ::RPG::GameCore::TaskContext
{
public:
	::RPG::GameCore::GameEntity* AMOFODFOLMI; // 0xA8
	::UnityEngine::Transform* HKDLAEGJOGB; // 0xB0
	::UnityEngine::Collider* KAELPBIMGKK; // 0xB8
	::System::Collections::Generic::List_1<::System::UInt32>* BDMPIDPAPGK; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DJNKHHNHIMP; // 0xC8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ANAOPKCDLGG; // 0xD0
	::System::Collections::Generic::List_1<::System::UInt32>* FHFAIKPMOCA; // 0xD8
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* POMNABEDMHD; // 0xE0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PIBFNLCGHPC; // 0xE8
	::System::Collections::Generic::List_1<::System::UInt32>* AEOJHDOKLNH; // 0xF0
	::System::Collections::Generic::List_1<::System::UInt32>* IINAHHCLJEL; // 0xF8
	::System::Collections::Generic::List_1<::Struct_2_263B64D8FC8C9763>* IKGKEHBEMEA; // 0x100
	::UnityEngine::Vector3 LDABCOCLAGL; // 0x108
	::RPG::MVector3 BMHKEKNDNIF; // 0x114
	::System::Boolean HDIKKDBCCKI; // 0x120
	::System::Boolean MBIPKBAEMOO; // 0x121
	::System::Boolean KMCHNMJHFLF; // 0x122
	::RPG::MVector3 OAFBMPOIFEE; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC13E3896EFF750B__GETSELFINSTANCE_OFFSET))(this);
	}
};
