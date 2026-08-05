#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace MoleMole { class TweenCustomMove; }

#define MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_1C21C0830BBA94DA_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x173C37F0)
#define MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_1C21C0830BBA94DA_METHOD_1_F33CE23F149D6C15_OFFSET UNITYSDK_OFFSET(0x173C37B0)
#define MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_1C21C0830BBA94DA__CTOR_OFFSET UNITYSDK_OFFSET(0x173C37A0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove_Class_1_1C21C0830BBA94DA_TypeDefinitionIndex = 56923;

	class TweenCustomMove_Class_1_1C21C0830BBA94DA : public ::System::Object
	{
	public:
		::MoleMole::TweenCustomMove* Field_1_1; // 0x10
		::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_1C21C0830BBA94DA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_1_F33CE23F149D6C15()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_1C21C0830BBA94DA_METHOD_1_F33CE23F149D6C15_OFFSET))(this);
		}

		::System::Void Method_1_BD658202BB4C4431()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_1C21C0830BBA94DA_METHOD_1_BD658202BB4C4431_OFFSET))(this);
		}
	};
}
