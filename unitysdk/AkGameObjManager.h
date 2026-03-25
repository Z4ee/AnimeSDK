#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x18BB2BC0)
#define AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x18BB04D0)
#define AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x18B916E0)
#define AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x18BB2DC0)
#define AKGAMEOBJMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x18BB2D20)
#define AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x18BB08A0)
#define AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x18B919C0)
#define AKGAMEOBJMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18BB2E20)
#define AKGAMEOBJMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BB3150)
#define AKGAMEOBJMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB2CC0)

inline static constexpr unsigned int AkGameObjManager_TypeDefinitionIndex = 34581;

class AkGameObjManager : public ::System::Object
{
public:
	static ::AkGameObjManager** StaticGet_m_Instance()
	{
		return (::AkGameObjManager**)Il2CppClass::FromTypeDefinitionIndex(AkGameObjManager_TypeDefinitionIndex)->GetStaticField(0x307E0);
	}
	static ::System::Int32* StaticGet__MaxProcessCountPerFrame()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkGameObjManager_TypeDefinitionIndex)->GetStaticField(0xFC00);
	}
	::System::Collections::Generic::List_1<::AkGameObj*>* m_GameObjs; // 0x10
	::System::Collections::Generic::List_1<::AkGameObj*>* m_ListenerGameObjs; // 0x18
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

	static ::System::Void RegisterGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void UnregisterGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void RegisterListenerGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void UnregisterListenerGameObj(::AkGameObj* gameObj)
	{
		return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET))(gameObj);
	}

	static ::System::Void SetMaxProcessCountPerFrame(::System::Int32 maxProcessCountPerFrame)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET))(maxProcessCountPerFrame);
	}

	static ::System::Void Update()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UPDATE_OFFSET))();
	}
};
