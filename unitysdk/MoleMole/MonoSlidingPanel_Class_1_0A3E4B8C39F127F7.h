#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
namespace MoleMole::Battle { class Entity; }
template <typename T> class Class_1_411D412FA13B6F21;

#define MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13864F60)
#define MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_METHOD_1_154217890BB9535A_OFFSET UNITYSDK_OFFSET(0x13864FF0)
#define MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x13864FA0)
#define MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_METHOD_1_D937CCF249E8F991_OFFSET UNITYSDK_OFFSET(0x138650B0)
#define MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13864F50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSlidingPanel_Class_1_0A3E4B8C39F127F7_TypeDefinitionIndex = 48487;

	class MonoSlidingPanel_Class_1_0A3E4B8C39F127F7 : public ::System::Object
	{
	public:
		::Class_1_411D412FA13B6F21<::Struct_2_FBA4730A60751401_1>* Field_1_0; // 0x10

		::System::Void _ctor(::Class_1_411D412FA13B6F21<::Struct_2_FBA4730A60751401_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_411D412FA13B6F21<::Struct_2_FBA4730A60751401_1>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_154217890BB9535A(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_METHOD_1_154217890BB9535A_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion Method_1_D937CCF249E8F991(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSLIDINGPANEL_CLASS_1_0A3E4B8C39F127F7_METHOD_1_D937CCF249E8F991_OFFSET))(this, a1, a2);
		}
	};
}
