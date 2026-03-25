#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DecalPuzzleMethod.h"
#include "unitysdk/RPG/Client/DecalPuzzleRegionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class FreeDecal; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x944A460)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x944A4D0)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_4C0EBEE9B5A06A83_OFFSET UNITYSDK_OFFSET(0x944AA80)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_5E3EF034189CDBBB_OFFSET UNITYSDK_OFFSET(0x9449C70)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_8635E5424EFC007C_OFFSET UNITYSDK_OFFSET(0x944A6C0)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_8B20CBA99571EBA3_OFFSET UNITYSDK_OFFSET(0x944A1D0)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x9449A50)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x944A530)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_B34D4E319F95DF95_OFFSET UNITYSDK_OFFSET(0x944A8C0)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x944A650)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x944A5E0)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_DC07A38C823F6ED7_OFFSET UNITYSDK_OFFSET(0x944A350)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_E905D30F05438104_OFFSET UNITYSDK_OFFSET(0x9449F00)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_F55BE4E8507DAB52_OFFSET UNITYSDK_OFFSET(0x9449A00)
#define RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_FA95EDCD93C90C36_OFFSET UNITYSDK_OFFSET(0x9449FD0)
#define RPG_CLIENT_DECALPUZZLEREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x944AB50)

namespace RPG::Client
{
	inline static constexpr unsigned int DecalPuzzleRegion_TypeDefinitionIndex = 56076;

	class DecalPuzzleRegion : public ::System::Object
	{
	public:
		::RPG::Client::DecalPuzzleMethod Method; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* DecalTypeList; // 0x18
		::RPG::Client::DecalPuzzleRegionType TargetRegionType; // 0x20
		::UnityEngine::Rect TargetRectRegion; // 0x24
		::UnityEngine::Vector2 TargetCircleRegionCenter; // 0x34
		::System::Single TargetCircleRegionRadius; // 0x3C
		::RPG::Client::DecalPuzzleRegionType DecalRegionType; // 0x40
		::System::Single DecalSize; // 0x44
		::System::Single DecalRadius; // 0x48
		::System::Single MinFullRatio; // 0x4C
		::System::Int32 OverrideNeedCount; // 0x50
		::System::Single DecalTestWidth; // 0x54
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ValidDecals; // 0x58
		::System::Int32 ValidCount; // 0x60
		::System::Int32 NeedCount; // 0x64
		::UnityEngine::Transform* _Root; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* _EmptyRects; // 0x70
		::Il2CppArray<::UnityEngine::Rect>* _SubRects; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_F55BE4E8507DAB52(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_F55BE4E8507DAB52_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_5E3EF034189CDBBB(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_5E3EF034189CDBBB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8B20CBA99571EBA3(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_8B20CBA99571EBA3_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_081E84DBAB5CA72B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_081E84DBAB5CA72B_OFFSET))(this);
		}

		::System::Void Method_1_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_1_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_1_98CD66A7F3C102A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_98CD66A7F3C102A5_OFFSET))(this);
		}

		::System::Boolean Method_1_E905D30F05438104(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_E905D30F05438104_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_FA95EDCD93C90C36(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_FA95EDCD93C90C36_OFFSET))(this, a1);
		}

		::System::Single Method_1_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Single Method_1_D64FD9A228A1C4E0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
		}

		::System::Int32 Method_1_8635E5424EFC007C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_8635E5424EFC007C_OFFSET))(this);
		}

		::UnityEngine::Rect Method_1_DC07A38C823F6ED7(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_DC07A38C823F6ED7_OFFSET))(this, a1);
		}

		::System::Void Method_1_B34D4E319F95DF95(::UnityEngine::Rect a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_B34D4E319F95DF95_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_4C0EBEE9B5A06A83(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_METHOD_1_4C0EBEE9B5A06A83_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
