#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_EXITEFFECT_OFFSET UNITYSDK_OFFSET(0x12FA3E90)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x12FA3AB0)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STARTEFFECT_OFFSET UNITYSDK_OFFSET(0x12FA3B40)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x12FA3D20)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA4000)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialAnimationEffectKeyConfig_TypeDefinitionIndex = 80551;

	class MonoMaterialAnimationEffectKeyConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* effectKeys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_INIT_OFFSET))(this);
		}

		::System::Void StartEffect(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STARTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void StopEffect(::Class_3_FFD0045B4597F294* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STOPEFFECT_OFFSET))(this, a1);
		}

		::System::Void ExitEffect(::Class_3_FFD0045B4597F294* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_EXITEFFECT_OFFSET))(this, a1);
		}
	};
}
