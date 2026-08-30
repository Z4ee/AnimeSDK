#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_231BC944D2991258.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_BDACDF5A33E990DF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityChan { class SpringManager; }

#define STRUCT_2_1E36AD6D9A5F486C_METHOD_2_17594FCE34D1C493_OFFSET UNITYSDK_OFFSET(0x2DEECE0)
#define STRUCT_2_1E36AD6D9A5F486C_METHOD_2_3497DC80363F75B5_OFFSET UNITYSDK_OFFSET(0x2DEED20)
#define STRUCT_2_1E36AD6D9A5F486C_METHOD_2_9ED920BA288AD875_OFFSET UNITYSDK_OFFSET(0x2DEECF0)

inline static constexpr unsigned int Struct_2_1E36AD6D9A5F486C_TypeDefinitionIndex = 68455;

struct alignas(8) Struct_2_1E36AD6D9A5F486C
{
	::System::Boolean FKPPFNENHLL; // 0x10
	::UnityEngine::Vector3 OPMGDNNAEJF; // 0x14
	::UnityEngine::Vector3 IOALDJANLJG; // 0x20
	::Struct_2_231BC944D2991258 LANBGGMNMIA; // 0x30
	::Struct_2_6E1B724B14572104_2 ALHMAJCACHA; // 0x1E0
	::Struct_2_BDACDF5A33E990DF BCGFOJIILJI; // 0x1F0
	::RPG::Client::LookAtTargetConstraint* PDCDDOENJGK; // 0x210
	::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x218
	::System::Single ECELMOEGBJE; // 0x228
	::System::Single MLCHADOKMFI; // 0x22C
	::System::Single JJGLCFNABDK; // 0x230
	::System::Single IBFOFGPGPFF; // 0x234
	::System::Single OFJJGLAKABN; // 0x238
	::System::Boolean KBHABLKIAGA; // 0x23C
	::UnityChan::SpringManager* CDPDHAFJGKF; // 0x240
	::System::Single OKHGNDNGKMM; // 0x248
	::System::Boolean DBEIGNBMHLA; // 0x24C
	::System::Boolean EJDNONKINOM; // 0x24D

	::System::Boolean Method_2_17594FCE34D1C493(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1E36AD6D9A5F486C_METHOD_2_17594FCE34D1C493_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_9ED920BA288AD875(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1E36AD6D9A5F486C_METHOD_2_9ED920BA288AD875_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3497DC80363F75B5(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_1E36AD6D9A5F486C_METHOD_2_3497DC80363F75B5_OFFSET))(this, a1, a2);
	}
};
