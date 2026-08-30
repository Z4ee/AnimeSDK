#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class TimeSpaceCrisscrossIRIBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSIRIMONOPLUGIN_SETSTATEANDTYPE_OFFSET UNITYSDK_OFFSET(0xE20BD80)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE2172A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossIRIMonoPlugin_TypeDefinitionIndex = 70191;

	class TimeSpaceCrisscrossIRIMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TimeSpaceCrisscrossIRIBehavior*>
	{
	public:
		::System::Boolean IsPositive; // 0x30
		::RPG::Client::TSCRendererType State; // 0x31
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* IriMeshRenderes; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* IriCustomDatas; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>* IriInstanceData; // 0x48
		::System::Boolean UseIRIData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetStateAndType(::System::Boolean a1, ::RPG::Client::TSCRendererType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TSCRendererType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIMONOPLUGIN_SETSTATEANDTYPE_OFFSET))(this, a1, a2);
		}
	};
}
