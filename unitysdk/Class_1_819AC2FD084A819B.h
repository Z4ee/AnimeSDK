#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Comic { class IComicAnim; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Timeline { class BubbleEvent; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SpriteItem; }
namespace UnityEngine::Timeline { class PictureDecorateEvent; }

#define CLASS_1_819AC2FD084A819B_METHOD_1_08A7B054AC57DE8A_OFFSET UNITYSDK_OFFSET(0x11E89780)
#define CLASS_1_819AC2FD084A819B_METHOD_1_2D532C24791D18AF_OFFSET UNITYSDK_OFFSET(0x11E89E60)
#define CLASS_1_819AC2FD084A819B_METHOD_1_488F3134BC8CD752_OFFSET UNITYSDK_OFFSET(0x11E89410)
#define CLASS_1_819AC2FD084A819B_METHOD_1_A749676ED2C91DC5_OFFSET UNITYSDK_OFFSET(0x11E89520)
#define CLASS_1_819AC2FD084A819B_METHOD_1_AB2D91CDE6785511_OFFSET UNITYSDK_OFFSET(0x11E899D0)
#define CLASS_1_819AC2FD084A819B_METHOD_1_B5B6C688DCD829F8_OFFSET UNITYSDK_OFFSET(0x11E898C0)
#define CLASS_1_819AC2FD084A819B_METHOD_1_CC9791562CB45453_1_OFFSET UNITYSDK_OFFSET(0x11E89C00)
#define CLASS_1_819AC2FD084A819B_METHOD_1_CC9791562CB45453_OFFSET UNITYSDK_OFFSET(0x11E89630)
#define CLASS_1_819AC2FD084A819B_METHOD_1_DB0EB607B3253A29_OFFSET UNITYSDK_OFFSET(0x11E89D50)
#define CLASS_1_819AC2FD084A819B_METHOD_1_F9BD2EF6798C7093_OFFSET UNITYSDK_OFFSET(0x11E89B00)

inline static constexpr unsigned int Class_1_819AC2FD084A819B_TypeDefinitionIndex = 43096;

class Class_1_819AC2FD084A819B : public ::System::Object
{
public:
	static ::MoleMole::Comic::IComicAnim* Method_1_488F3134BC8CD752(::UnityEngine::Timeline::PictureDecorateEvent* a1)
	{
		return ((::MoleMole::Comic::IComicAnim*(*)(::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_488F3134BC8CD752_OFFSET))(a1);
	}

	static ::UnityEngine::Sprite* Method_1_A749676ED2C91DC5(::UnityEngine::Timeline::PictureDecorateEvent* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_A749676ED2C91DC5_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_CC9791562CB45453(::UnityEngine::Timeline::BubbleEvent* a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_CC9791562CB45453_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_08A7B054AC57DE8A(::UnityEngine::Timeline::BubbleEvent* a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_08A7B054AC57DE8A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B5B6C688DCD829F8(::UnityEngine::Timeline::BubbleEvent* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_B5B6C688DCD829F8_OFFSET))(a1);
	}

	static ::System::Single Method_1_AB2D91CDE6785511(::UnityEngine::Timeline::BubbleEvent* a1)
	{
		return ((::System::Single(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_AB2D91CDE6785511_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_F9BD2EF6798C7093(::UnityEngine::Timeline::PictureDecorateEvent* a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Timeline::PictureDecorateEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_F9BD2EF6798C7093_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_CC9791562CB45453_1(::UnityEngine::Timeline::BubbleEvent* a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_CC9791562CB45453_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB0EB607B3253A29(::UnityEngine::Timeline::BubbleEvent* a1)
	{
		return ((::System::Single(*)(::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_DB0EB607B3253A29_OFFSET))(a1);
	}

	static ::UnityEngine::Sprite* Method_1_2D532C24791D18AF(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SpriteItem*))((::PBYTE)hIl2Cpp + CLASS_1_819AC2FD084A819B_METHOD_1_2D532C24791D18AF_OFFSET))(a1);
	}
};
