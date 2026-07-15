#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_DD8D15E2D8D77E52_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x151FB490)
#define CLASS_3_DD8D15E2D8D77E52_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x151FB4C0)
#define CLASS_3_DD8D15E2D8D77E52_INVOKE_OFFSET UNITYSDK_OFFSET(0x151FB480)
#define CLASS_3_DD8D15E2D8D77E52__CTOR_OFFSET UNITYSDK_OFFSET(0x151FB390)

inline static constexpr unsigned int Class_3_DD8D15E2D8D77E52_TypeDefinitionIndex = 70452;

class Class_3_DD8D15E2D8D77E52 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_DD8D15E2D8D77E52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_3_DD8D15E2D8D77E52_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::Client::IAssetOperation* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_DD8D15E2D8D77E52_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_DD8D15E2D8D77E52_ENDINVOKE_OFFSET))(this, a1);
	}
};
