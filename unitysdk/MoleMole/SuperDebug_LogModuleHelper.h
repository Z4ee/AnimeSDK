#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_GET_SWITCHKEYARRAY_OFFSET UNITYSDK_OFFSET(0x1BBF64F0)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULECOLOR_OFFSET UNITYSDK_OFFSET(0x1BBF69C0)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULEHELPER_OFFSET UNITYSDK_OFFSET(0x1BBF6900)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITSWITCHKEYARRAY_OFFSET UNITYSDK_OFFSET(0x1BBF6530)
#define MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_RESETLOGMODULEHELPER_OFFSET UNITYSDK_OFFSET(0x1BBF6680)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_LogModuleHelper_TypeDefinitionIndex = 7776;

	class SuperDebug_LogModuleHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__switchKeyArray()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_LogModuleHelper_TypeDefinitionIndex)->GetStaticField(0x7330);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* get_SwitchKeyArray()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_GET_SWITCHKEYARRAY_OFFSET))();
		}

		static ::System::Void InitSwitchKeyArray()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITSWITCHKEYARRAY_OFFSET))();
		}

		static ::System::Void ResetLogModuleHelper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_RESETLOGMODULEHELPER_OFFSET))();
		}

		static ::System::Void InitLogModuleHelper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULEHELPER_OFFSET))();
		}

		static ::System::Void InitLogModuleColor(::System::Collections::Generic::List_1<::UnityEngine::Color>*& moduleColors)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGMODULEHELPER_INITLOGMODULECOLOR_OFFSET))(moduleColors);
		}
	};
}
