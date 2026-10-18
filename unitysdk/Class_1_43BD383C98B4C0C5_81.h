#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_247;
class Class_1_0EA099C7D681B6D6;
class Class_1_43BD383C98B4C0C5_77;
class Class_2_037EA204E69EBC75;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_81__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76560)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_81_TypeDefinitionIndex = 42459;

class Class_1_43BD383C98B4C0C5_81 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_037EA204E69EBC75*>* PPGHMFNPLFH; // 0x10
	::System::String* EADCDAIMHOE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BHPEMDNBPOA; // 0x20
	::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* CBNHOLBDNAC; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_037EA204E69EBC75*>* HANNOJCOODO; // 0x30
	::Class_0_16E4307DCC419505_247* FMJPMFEDIJL; // 0x38
	::Class_1_43BD383C98B4C0C5_77* OOPAADGKOLC; // 0x40
	::System::Boolean NJJINHLOGDC; // 0x48
	::System::Boolean PDNMCCBLBJC; // 0x49
	::UnityEngine::Vector3 KHOECFJFKIB; // 0x4C
	::System::Single EBDMPMAPMOB; // 0x58
	::UnityEngine::Vector2 DMCFFLEBAKI; // 0x5C
	::System::Boolean ILPPPAEPMJL; // 0x64
	::System::Boolean AOOMOICGCHH; // 0x65
	::System::Boolean PJFHGBHJJHD; // 0x66
	::System::Boolean IIDHHGEICBB; // 0x67
	::System::Single HLCCFLFKBGL; // 0x68
	::UnityEngine::Vector2 FLBFJPBLOEG; // 0x6C
	::UnityEngine::Vector3 IJPLNPNAMBJ; // 0x74
	::System::UInt32 NBNFEFOKGEC; // 0x80
	::System::UInt32 FIHNECFFFIC; // 0x84
	::RPG::Client::LittleGame::TRFPhase PPOIJHJIMLL; // 0x88
	::UnityEngine::Vector3 IHPMANOLDPN; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_81__CTOR_OFFSET))(this);
	}
};
