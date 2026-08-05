#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposableObjectManager_ModuleType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare { class CriDisposable; }

#define CRIWARE_CRIDISPOSABLEOBJECTMANAGER_OBJECTREF__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6270)

namespace CriWare
{
	inline static constexpr unsigned int CriDisposableObjectManager_ObjectRef_TypeDefinitionIndex = 35026;

	struct alignas(8) CriDisposableObjectManager_ObjectRef
	{
		::System::Guid guid; // 0x10
		::CriWare::CriDisposableObjectManager_ModuleType type; // 0x20
		::CriWare::CriDisposable* disposable; // 0x28

		::System::Void _ctor(::System::Guid _guid, ::CriWare::CriDisposable* _disposable, ::CriWare::CriDisposableObjectManager_ModuleType _type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::CriWare::CriDisposable*, ::CriWare::CriDisposableObjectManager_ModuleType))((::PBYTE)hIl2Cpp + CRIWARE_CRIDISPOSABLEOBJECTMANAGER_OBJECTREF__CTOR_OFFSET))(this, _guid, _disposable, _type);
		}
	};
}
