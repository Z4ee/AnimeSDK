#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class IEffectSimulate; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2_METHOD_1_00C21A87946A3286_OFFSET UNITYSDK_OFFSET(0x16071010)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2_METHOD_1_0F93101488BFD32C_OFFSET UNITYSDK_OFFSET(0x16071070)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2_METHOD_1_9CCC983DD663C3F8_OFFSET UNITYSDK_OFFSET(0x160710F0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2__CTOR_OFFSET UNITYSDK_OFFSET(0x16071000)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoPostProcessBehavior_Class_1_E3D8FB7CA6626EA2_TypeDefinitionIndex = 78303;

	class MihoyoPostProcessBehavior_Class_1_E3D8FB7CA6626EA2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Type*>* Field_1_3; // 0x10
		::System::Type* Field_1_0; // 0x18
		::Enum_3_17B78A87EAE1DCED Field_1_1; // 0x20
		::System::Boolean Field_1_2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_00C21A87946A3286(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2_METHOD_1_00C21A87946A3286_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_0F93101488BFD32C(::MoleMole::EffectSimulate::IEffectSimulate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::IEffectSimulate*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2_METHOD_1_0F93101488BFD32C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9CCC983DD663C3F8(::MoleMole::EffectSimulate::IEffectSimulate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::IEffectSimulate*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_CLASS_1_E3D8FB7CA6626EA2_METHOD_1_9CCC983DD663C3F8_OFFSET))(this, a1);
		}
	};
}
