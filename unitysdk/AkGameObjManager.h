#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1B438040)
#define AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1B435770)
#define AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1B417290)
#define AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B438240)
#define AKGAMEOBJMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1B4381A0)
#define AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1B435CA0)
#define AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1B417640)
#define AKGAMEOBJMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B4382A0)
#define AKGAMEOBJMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B438620)
#define AKGAMEOBJMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B438140)

inline static constexpr unsigned int AkGameObjManager_TypeDefinitionIndex = 41227;

class AkGameObjManager : public ::System::Object
{
public:
	static ::AkGameObjManager** StaticGet_m_Instance()
	{
		return (::AkGameObjManager**)Il2CppClass::FromTypeDefinitionIndex(AkGameObjManager_TypeDefinitionIndex)->GetStaticField(0x5F9F0);
	}
	static ::System::Int32* StaticGet__MaxProcessCountPerFrame()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkGameObjManager_TypeDefinitionIndex)->GetStaticField(0x12380);
	}
	::System::Collections::Generic::List_1<::AkGameObj*>* m_ListenerGameObjs; // 0x10
	::System::Collections::Generic::List_1<::AkGameObj*>* m_GameObjs; // 0x18
	::System::Int32 index; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_INIT_OFFSET))();
	}

	static ::System::Void Terminate()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_TERMINATE_OFFSET))();
	}

	static ::System::Void RegisterGameObj(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET))(a1);
	}

	static ::System::Void UnregisterGameObj(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET))(a1);
	}

	static ::System::Void RegisterListenerGameObj(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET))(a1);
	}

	static ::System::Void UnregisterListenerGameObj(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET))(a1);
	}

	static ::System::Void SetMaxProcessCountPerFrame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET))(a1);
	}

	static ::System::Void Update()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UPDATE_OFFSET))();
	}
};
