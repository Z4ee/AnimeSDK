#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUIIMAGENUM_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x11D59720)
#define MOLEMOLE_MONOUIIMAGENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D598D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNum_TypeDefinitionIndex = 73350;

	class MonoUIImageNum : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* targetImage; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* spritesList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUM__CTOR_OFFSET))(this);
		}

		::System::Void SetNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUM_SETNUMBER_OFFSET))(this, a1);
		}
	};
}
