#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_645;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IPoolableComponent; }
namespace RPG::Client { class IPoolableComponentEx; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3D92459BEEC82DA8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1522EB90)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_00CB788F0ABB7E87_OFFSET UNITYSDK_OFFSET(0x1522F090)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1522EB10)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x1522F4B0)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x1522EC20)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x1522F540)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_C72B7042A1FE24F2_OFFSET UNITYSDK_OFFSET(0x1522F2D0)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x1522F120)
#define CLASS_1_3D92459BEEC82DA8_METHOD_1_F0CA034D8F146D0A_OFFSET UNITYSDK_OFFSET(0x1522EDF0)
#define CLASS_1_3D92459BEEC82DA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1522F5B0)

inline static constexpr unsigned int Class_1_3D92459BEEC82DA8_TypeDefinitionIndex = 59519;

class Class_1_3D92459BEEC82DA8 : public ::System::Object
{
public:
	::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_645*>* JNHAMCKFIMM; // 0x10
	::Collections::Pooled::PooledList_1<::RPG::Client::IPoolableComponentEx*>* IMNHBNCEEHK; // 0x18
	::Il2CppArray<::RPG::Client::IPoolableComponent*>* CEKCFJHAJEM; // 0x20
	::UnityEngine::GameObject* OHGLFDDMIFB; // 0x28
	::System::Int32 KDOEEBJMGJG; // 0x30
	::System::Boolean PPJFOGPPGPH; // 0x34
	::System::Single HFCCKCDLLJA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_1_F0CA034D8F146D0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_F0CA034D8F146D0A_OFFSET))(this);
	}

	::System::Void Method_1_D33218A492B26449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_D33218A492B26449_OFFSET))(this);
	}

	::System::Boolean Method_1_C72B7042A1FE24F2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_C72B7042A1FE24F2_OFFSET))(this);
	}

	::System::Void Method_1_7EA127DE55AAA205(::Class_0_16E4307DCC419505_645* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_645*))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_645* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_645*))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_00CB788F0ABB7E87(::RPG::Client::IPoolableComponentEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IPoolableComponentEx*))((::PBYTE)hIl2Cpp + CLASS_1_3D92459BEEC82DA8_METHOD_1_00CB788F0ABB7E87_OFFSET))(this, a1);
	}
};
