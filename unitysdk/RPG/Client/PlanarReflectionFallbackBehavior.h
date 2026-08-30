#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class PlanarReflectionFallback; }
namespace RPG::Client::TAUtils { class RendererMaterials; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1BD1DA60)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_METHOD_3_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x1BD1D930)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1BD1D8C0)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_METHOD_3_8DCD1FEC09DA5176_OFFSET UNITYSDK_OFFSET(0x1BD1DAE0)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1BD1DBF0)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1E3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflectionFallbackBehavior_TypeDefinitionIndex = 70262;

	class PlanarReflectionFallbackBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererMaterials*>* _OriginMaterials; // 0x38
		::System::Boolean _Valid; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_1293CB739F1151A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_METHOD_3_1293CB739F1151A1_OFFSET))(this);
		}

		::System::Void Method_3_8DCD1FEC09DA5176()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_METHOD_3_8DCD1FEC09DA5176_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::PlanarReflectionFallback* get__Owner()
		{
			return ((::RPG::Client::PlanarReflectionFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
