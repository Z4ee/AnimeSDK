#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x190CCC80)
#define MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x190CCC70)
#define MOLEMOLE_TWEENCUSTOMMOVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190CCC20)
#define MOLEMOLE_TWEENCUSTOMMOVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x190CCC60)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove___c_TypeDefinitionIndex = 56924;

	class TweenCustomMove___c : public ::System::Object
	{
	public:
		static ::MoleMole::TweenCustomMove___c** StaticGet___9()
		{
			return (::MoleMole::TweenCustomMove___c**)Il2CppClass::FromTypeDefinitionIndex(TweenCustomMove___c_TypeDefinitionIndex)->GetStaticField(0x4A9F0);
		}
		static ::DG::Tweening::TweenCallback** StaticGet___9__19_1()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(TweenCustomMove___c_TypeDefinitionIndex)->GetStaticField(0x4A9F8);
		}
		static ::DG::Tweening::TweenCallback** StaticGet___9__19_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(TweenCustomMove___c_TypeDefinitionIndex)->GetStaticField(0x4AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
