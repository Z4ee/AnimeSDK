#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ModuleType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare { class CriDisposable; }

#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_OBJECTREF__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD6D80)

namespace CriWare
{
	inline static constexpr unsigned int CriDisposableObjectManager_ObjectRef_TypeDefinitionIndex = 37236;

	struct alignas(8) CriDisposableObjectManager_ObjectRef
	{
		::System::Guid guid; // 0x10
		::CriWare::CriDisposableObjectManager_ModuleType type; // 0x20
		::CriWare::CriDisposable* disposable; // 0x28

		::System::Void _ctor(::System::Guid a1, ::CriWare::CriDisposable* a2, ::CriWare::CriDisposableObjectManager_ModuleType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::CriWare::CriDisposable*, ::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_OBJECTREF__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
