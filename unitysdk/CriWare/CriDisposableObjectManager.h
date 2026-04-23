#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ModuleType.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ObjectRef.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CALLONMODULEFINALIZATION_OFFSET UNITYSDK_OFFSET(0x12BF8B70)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x12C01500)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_GETNEXTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x12C01800)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x12C014D0)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x12BE9590)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_SEARCHFORDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x12C01280)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x12BE9A60)
#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C018F0)

namespace CriWare
{
	inline static constexpr unsigned int CriDisposableObjectManager_TypeDefinitionIndex = 36934;

	class CriDisposableObjectManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::CriWare::CriDisposableObjectManager_ObjectRef>** StaticGet_refList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriDisposableObjectManager_ObjectRef>**)Il2CppClass::FromTypeDefinitionIndex(CriDisposableObjectManager_TypeDefinitionIndex)->GetStaticField(0xBC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Int32 SearchForDisposable(::CriWare::CriDisposable* disposable)
		{
			return ((::System::Int32(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_SEARCHFORDISPOSABLE_OFFSET))(disposable);
		}

		static ::System::Void Register(::CriWare::CriDisposable* disposable, ::CriWare::CriDisposableObjectManager_ModuleType type)
		{
			return ((::System::Void(*)(::CriWare::CriDisposable*, ::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_REGISTER_OFFSET))(disposable, type);
		}

		static ::System::Boolean Unregister(::CriWare::CriDisposable* disposable)
		{
			return ((::System::Boolean(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_UNREGISTER_OFFSET))(disposable);
		}

		static ::System::Boolean IsDisposed(::CriWare::CriDisposable* disposable)
		{
			return ((::System::Boolean(*)(::CriWare::CriDisposable*))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_ISDISPOSED_OFFSET))(disposable);
		}

		static ::System::Void CallOnModuleFinalization(::CriWare::CriDisposableObjectManager_ModuleType type)
		{
			return ((::System::Void(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_CALLONMODULEFINALIZATION_OFFSET))(type);
		}

		static ::System::Int32 GetNextWithType(::CriWare::CriDisposableObjectManager_ModuleType type)
		{
			return ((::System::Int32(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_GETNEXTWITHTYPE_OFFSET))(type);
		}

		static ::System::Void DisposeAll(::CriWare::CriDisposableObjectManager_ModuleType type)
		{
			return ((::System::Void(*)(::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_DISPOSEALL_OFFSET))(type);
		}
	};
}
