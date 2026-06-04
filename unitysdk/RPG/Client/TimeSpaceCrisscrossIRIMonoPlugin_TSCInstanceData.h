#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMESPACECRISSCROSSIRIMONOPLUGIN_TSCINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCA64E40)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData_TypeDefinitionIndex = 65668;

	class TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* m_Mesh; // 0x10
		::UnityEngine::Material* m_Mat; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* m_SRT; // 0x20
		::UnityEngine::Transform* parentTransform; // 0x28
		::System::Boolean isPositive; // 0x30
		::RPG::Client::TSCRendererType state; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIMONOPLUGIN_TSCINSTANCEDATA__CTOR_OFFSET))(this);
		}
	};
}
