#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPATCHANDCREATE_OFFSET UNITYSDK_OFFSET(0x164F6290)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSEALLFACTORIES_OFFSET UNITYSDK_OFFSET(0x164F5C90)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x164F6960)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164F61E0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x164F6880)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_REGISTERFACTORY_OFFSET UNITYSDK_OFFSET(0x164F4660)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x164F6A50)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x164F47E0)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceFactory_TypeDefinitionIndex = 38937;

	class RendererResourceFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedList_2<::System::Int32, ::CriWare::CriMana::Detail::RendererResourceFactory*>** StaticGet_factoryList()
		{
			return (::System::Collections::Generic::SortedList_2<::System::Int32, ::CriWare::CriMana::Detail::RendererResourceFactory*>**)Il2CppClass::FromTypeDefinitionIndex(RendererResourceFactory_TypeDefinitionIndex)->GetStaticField(0x5A680);
		}
		::System::Boolean disposed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterFactory(::CriWare::CriMana::Detail::RendererResourceFactory* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::CriWare::CriMana::Detail::RendererResourceFactory*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_REGISTERFACTORY_OFFSET))(a1, a2);
		}

		static ::System::Void DisposeAllFactories()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSEALLFACTORIES_OFFSET))();
		}

		static ::CriWare::CriMana::Detail::RendererResource* DispatchAndCreate(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPATCHANDCREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_1_OFFSET))(this, a1);
		}
	};
}
