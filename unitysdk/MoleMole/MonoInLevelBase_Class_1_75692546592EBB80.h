#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoInLevelBase; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_MONOINLEVELBASE_CLASS_1_75692546592EBB80_METHOD_1_B5BCCEC1C3A57124_OFFSET UNITYSDK_OFFSET(0x183058C0)
#define MOLEMOLE_MONOINLEVELBASE_CLASS_1_75692546592EBB80__CTOR_OFFSET UNITYSDK_OFFSET(0x183058B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBase_Class_1_75692546592EBB80_TypeDefinitionIndex = 66173;

	class MonoInLevelBase_Class_1_75692546592EBB80 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Sprite*>* Field_1_0; // 0x10
		::MoleMole::MonoInLevelBase* Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_CLASS_1_75692546592EBB80__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B5BCCEC1C3A57124(::UnityEngine::Sprite* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_CLASS_1_75692546592EBB80_METHOD_1_B5BCCEC1C3A57124_OFFSET))(this, a1, a2);
		}
	};
}
