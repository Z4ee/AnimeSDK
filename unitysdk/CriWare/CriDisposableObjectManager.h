#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ModuleType.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ObjectRef.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CALLONMODULEFINALIZATION_OFFSET UNITYSDK_OFFSET(0x146B5140)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x146BC710)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_GETNEXTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x146BCB00)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x146BC6E0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x146A6490)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_SEARCHFORDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x146BC460)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x146A69E0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146BCC00)

namespace CriWare
{
	inline static constexpr unsigned int CriDisposableObjectManager_TypeDefinitionIndex = 37234;

	class CriDisposableObjectManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::CriWare::CriDisposableObjectManager_ObjectRef>** StaticGet_refList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriDisposableObjectManager_ObjectRef>**)Il2CppClass::FromTypeDefinitionIndex(CriDisposableObjectManager_TypeDefinitionIndex)->GetStaticField(0x7680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Int32 SearchForDisposable(::CriWare::CriDisposable* a1)
		{
			return ((::System::Int32(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_SEARCHFORDISPOSABLE_OFFSET))(a1);
		}

		static ::System::Void Register(::CriWare::CriDisposable* a1, ::CriWare::CriDisposableObjectManager_ModuleType a2)
		{
			return ((::System::Void(*)(::CriWare::CriDisposable*, ::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_REGISTER_OFFSET))(a1, a2);
		}

		static ::System::Boolean Unregister(::CriWare::CriDisposable* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_UNREGISTER_OFFSET))(a1);
		}

		static ::System::Boolean IsDisposed(::CriWare::CriDisposable* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_ISDISPOSED_OFFSET))(a1);
		}

		static ::System::Void CallOnModuleFinalization(::CriWare::CriDisposableObjectManager_ModuleType a1)
		{
			return ((::System::Void(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CALLONMODULEFINALIZATION_OFFSET))(a1);
		}

		static ::System::Int32 GetNextWithType(::CriWare::CriDisposableObjectManager_ModuleType a1)
		{
			return ((::System::Int32(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_GETNEXTWITHTYPE_OFFSET))(a1);
		}

		static ::System::Void DisposeAll(::CriWare::CriDisposableObjectManager_ModuleType a1)
		{
			return ((::System::Void(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_DISPOSEALL_OFFSET))(a1);
		}
	};
}
