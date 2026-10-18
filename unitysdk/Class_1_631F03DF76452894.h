#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_180;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_631F03DF76452894_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9FA260)
#define CLASS_1_631F03DF76452894_METHOD_1_9636FCCD0F2A7398_OFFSET UNITYSDK_OFFSET(0x1C9FA480)
#define CLASS_1_631F03DF76452894_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C9FA3B0)
#define CLASS_1_631F03DF76452894_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9FA440)
#define CLASS_1_631F03DF76452894__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FA660)

inline static constexpr unsigned int Class_1_631F03DF76452894_TypeDefinitionIndex = 42009;

class Class_1_631F03DF76452894 : public ::System::Object
{
public:
	::System::String* CDEEHGCEOKN; // 0x10
	::System::String* NIDFIGFJJLL; // 0x18
	::UnityEngine::GameObject* HKNLMDCOCCF; // 0x20
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* CLOEGAGOONL; // 0x28
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* IHGCGCKCAGH; // 0x30
	::System::String* BAHLDFMIJFG; // 0x38
	::UnityEngine::Transform* CIMHBBGGADG; // 0x40
	::System::String* FCDAFMMLHEM; // 0x48
	::Class_0_16E4307DCC419505_180* CLOIOELOOFJ; // 0x50
	::Struct_2_16F410D309DC331F KIBGNCPDHLJ; // 0x58
	::UnityEngine::Vector3 LBJPPLGGBNN; // 0x80
	::UnityEngine::Vector3 IOAMJMEEHMN; // 0x8C
	::System::Boolean MGBDJNCJCOL; // 0x98
	::System::Boolean LIFNOFJAKCC; // 0x99
	::System::Boolean CHKMCEFAKHG; // 0x9A
	::System::Boolean CCBPFKBAFPN; // 0x9B
	::UnityEngine::Quaternion KHOPAMJJINE; // 0x9C
	::UnityEngine::Vector3 POHDKIIOAJB; // 0xAC
	::UnityEngine::Vector3 LDDBFJDDNJO; // 0xB8
	::System::Boolean LBOEPCGMCJF; // 0xC4
	::System::Boolean BMMEKMLPJNK; // 0xC5
	::System::Boolean DAMGODKAAKO; // 0xC6
	::System::Boolean IHJIDOPOABB; // 0xC7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_9636FCCD0F2A7398(::Class_1_631F03DF76452894* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_631F03DF76452894*))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_METHOD_1_9636FCCD0F2A7398_OFFSET))(this, a1);
	}
};
