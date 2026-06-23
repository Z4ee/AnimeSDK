#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoOverlaySpaceSceneObjectProxy;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MONOOVERLAYSPACESCENEOBJECTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1C425F90)
#define MONOOVERLAYSPACESCENEOBJECTMANAGER_RESETALLTONORMALSTATE_OFFSET UNITYSDK_OFFSET(0x1C426120)
#define MONOOVERLAYSPACESCENEOBJECTMANAGER_SETTOSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x1C4263B0)
#define MONOOVERLAYSPACESCENEOBJECTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1C426070)
#define MONOOVERLAYSPACESCENEOBJECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4265D0)

inline static constexpr unsigned int MonoOverlaySpaceSceneObjectManager_TypeDefinitionIndex = 26897;

class MonoOverlaySpaceSceneObjectManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MonoOverlaySpaceSceneObjectProxy*>** StaticGet_s_ProxyList()
	{
		return (::System::Collections::Generic::HashSet_1<::MonoOverlaySpaceSceneObjectProxy*>**)Il2CppClass::FromTypeDefinitionIndex(MonoOverlaySpaceSceneObjectManager_TypeDefinitionIndex)->GetStaticField(0x220F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void Register(::MonoOverlaySpaceSceneObjectProxy* proxy)
	{
		return ((::System::Void(*)(::MonoOverlaySpaceSceneObjectProxy*))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTMANAGER_REGISTER_OFFSET))(proxy);
	}

	static ::System::Void UnRegister(::MonoOverlaySpaceSceneObjectProxy* proxy)
	{
		return ((::System::Void(*)(::MonoOverlaySpaceSceneObjectProxy*))((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTMANAGER_UNREGISTER_OFFSET))(proxy);
	}

	static ::System::Void ResetAllToNormalState()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTMANAGER_RESETALLTONORMALSTATE_OFFSET))();
	}

	static ::System::Void SetToSpecialState()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOOVERLAYSPACESCENEOBJECTMANAGER_SETTOSPECIALSTATE_OFFSET))();
	}
};
