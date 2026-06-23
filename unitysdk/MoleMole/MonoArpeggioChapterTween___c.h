#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1302A4D0)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1302A510)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__PLAYCONTENTRECTTWEEN_B__8_2_OFFSET UNITYSDK_OFFSET(0x1302A520)

namespace MoleMole
{
	inline static constexpr unsigned int MonoArpeggioChapterTween___c_TypeDefinitionIndex = 75908;

	class MonoArpeggioChapterTween___c : public ::System::Object
	{
	public:
		static ::MoleMole::MonoArpeggioChapterTween___c** StaticGet___9()
		{
			return (::MoleMole::MonoArpeggioChapterTween___c**)Il2CppClass::FromTypeDefinitionIndex(MonoArpeggioChapterTween___c_TypeDefinitionIndex)->GetStaticField(0x3EE70);
		}
		static ::DG::Tweening::TweenCallback** StaticGet___9__8_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(MonoArpeggioChapterTween___c_TypeDefinitionIndex)->GetStaticField(0x3EE78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayContentRectTween_b__8_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__PLAYCONTENTRECTTWEEN_B__8_2_OFFSET))(this);
		}
	};
}
