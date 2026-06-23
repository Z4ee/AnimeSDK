#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPATCHANDCREATE_OFFSET UNITYSDK_OFFSET(0x1E24BB00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSEALLFACTORIES_OFFSET UNITYSDK_OFFSET(0x1E24B590)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E24BFE0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E24BA20)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E24BF60)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_REGISTERFACTORY_OFFSET UNITYSDK_OFFSET(0x1E24B500)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24C030)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24C020)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceFactory_TypeDefinitionIndex = 34419;

	class RendererResourceFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedList_2<::System::Int32, ::CriWare::CriMana::Detail::RendererResourceFactory*>** StaticGet_factoryList()
		{
			return (::System::Collections::Generic::SortedList_2<::System::Int32, ::CriWare::CriMana::Detail::RendererResourceFactory*>**)Il2CppClass::FromTypeDefinitionIndex(RendererResourceFactory_TypeDefinitionIndex)->GetStaticField(0x279A0);
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

		static ::System::Void RegisterFactory(::CriWare::CriMana::Detail::RendererResourceFactory* factory, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::CriWare::CriMana::Detail::RendererResourceFactory*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_REGISTERFACTORY_OFFSET))(factory, priority);
		}

		static ::System::Void DisposeAllFactories()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSEALLFACTORIES_OFFSET))();
		}

		static ::CriWare::CriMana::Detail::RendererResource* DispatchAndCreate(::System::Int32 playerId, ::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additive, ::UnityEngine::Shader* userShader)
		{
			return ((::CriWare::CriMana::Detail::RendererResource*(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPATCHANDCREATE_OFFSET))(playerId, movieInfo, additive, userShader);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCEFACTORY_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
