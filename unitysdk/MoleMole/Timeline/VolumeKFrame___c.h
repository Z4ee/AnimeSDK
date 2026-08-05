#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class PropertyCurve; }

#define MOLEMOLE_TIMELINE_VOLUMEKFRAME___C_METHOD_1_4E51E822E743DBAC_OFFSET UNITYSDK_OFFSET(0x19741570)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19741520)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19741560)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VolumeKFrame___c_TypeDefinitionIndex = 82187;

	class VolumeKFrame___c : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::VolumeKFrame___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::VolumeKFrame___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeKFrame___c_TypeDefinitionIndex)->GetStaticField(0x46F30);
		}
		static ::System::Func_2<::UnityEngine::Timeline::PropertyCurve*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::PropertyCurve*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeKFrame___c_TypeDefinitionIndex)->GetStaticField(0x46F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_4E51E822E743DBAC(::UnityEngine::Timeline::PropertyCurve* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Timeline::PropertyCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME___C_METHOD_1_4E51E822E743DBAC_OFFSET))(this, a1);
		}
	};
}
