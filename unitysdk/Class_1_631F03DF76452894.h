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

#define CLASS_1_631F03DF76452894_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA28910)
#define CLASS_1_631F03DF76452894_METHOD_1_9636FCCD0F2A7398_OFFSET UNITYSDK_OFFSET(0x1CA28B40)
#define CLASS_1_631F03DF76452894_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA28A70)
#define CLASS_1_631F03DF76452894_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA28B00)
#define CLASS_1_631F03DF76452894__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA28D30)

inline static constexpr unsigned int Class_1_631F03DF76452894_TypeDefinitionIndex = 42009;

class Class_1_631F03DF76452894 : public ::System::Object
{
public:
	::Struct_2_16F410D309DC331F KIBGNCPDHLJ; // 0x10
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* IHGCGCKCAGH; // 0x38
	::Class_0_16E4307DCC419505_180* CLOIOELOOFJ; // 0x40
	::System::String* NIDFIGFJJLL; // 0x48
	::System::String* CDEEHGCEOKN; // 0x50
	::UnityEngine::Transform* CIMHBBGGADG; // 0x58
	::System::String* FCDAFMMLHEM; // 0x60
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* CLOEGAGOONL; // 0x68
	::System::String* BAHLDFMIJFG; // 0x70
	::UnityEngine::GameObject* HKNLMDCOCCF; // 0x78
	::UnityEngine::Vector3 POHDKIIOAJB; // 0x80
	::System::Boolean CCBPFKBAFPN; // 0x8C
	::System::Boolean BMMEKMLPJNK; // 0x8D
	::System::Boolean LBOEPCGMCJF; // 0x8E
	::System::Boolean MGBDJNCJCOL; // 0x8F
	::UnityEngine::Vector3 LDDBFJDDNJO; // 0x90
	::System::Boolean DAMGODKAAKO; // 0x9C
	::System::Boolean CHKMCEFAKHG; // 0x9D
	::System::Boolean IHJIDOPOABB; // 0x9E
	::System::Boolean LIFNOFJAKCC; // 0x9F
	::UnityEngine::Quaternion KHOPAMJJINE; // 0xA0
	::UnityEngine::Vector3 IOAMJMEEHMN; // 0xB0
	::UnityEngine::Vector3 LBJPPLGGBNN; // 0xBC

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
