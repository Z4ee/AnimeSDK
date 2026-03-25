#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class PlanarReflection; }
namespace RPG::Client { class PlanarReflectionFallbackBehavior; }
namespace RPG::Client::TAUtils { class RendererSlotMaterialPaths; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANARREFLECTIONFALLBACK_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x9F79010)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x9F79060)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACK___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x9F79070)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflectionFallback_TypeDefinitionIndex = 57538;

	class PlanarReflectionFallback : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::PlanarReflectionFallbackBehavior*>
	{
	public:
		::RPG::Client::PlanarReflection* PlanarReflection; // 0x30
		::System::Single ScaleThreshold; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlotMaterialPaths*>* FallbackMaterials; // 0x40
		::System::Boolean Fallback; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACK__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACK_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACK___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
