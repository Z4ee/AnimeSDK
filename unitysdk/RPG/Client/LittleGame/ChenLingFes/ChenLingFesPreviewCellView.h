#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"
#include "unitysdk/RPG/GameCore/ChenLingFesPreviewCellType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_INITPEFORMCELL_OFFSET UNITYSDK_OFFSET(0x19B947B0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_METHOD_7_648D33A557BC2E77_OFFSET UNITYSDK_OFFSET(0x19B94C00)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_METHOD_7_84E99AA4DE826971_OFFSET UNITYSDK_OFFSET(0x19B949E0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_SETPEFORMCELLAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19B94B10)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B94D30)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B94D10)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesPreviewCellView_TypeDefinitionIndex = 73833;

	class ChenLingFesPreviewCellView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		static ::System::Int32* StaticGet_RectScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesPreviewCellView_TypeDefinitionIndex)->GetStaticField(0x98B0);
		}
		static ::System::Int32* StaticGet_MainTextureId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesPreviewCellView_TypeDefinitionIndex)->GetStaticField(0x98B4);
		}
		::UnityEngine::Vector3 LocalPosition; // 0x58
		::UnityEngine::Vector2Int Coord; // 0x64
		::RPG::GameCore::ChenLingFesPreviewCellType PreviewCellType; // 0x6C
		::System::Int32 ScaleX; // 0x70
		::System::Int32 ScaleZ; // 0x74
		::UnityEngine::Renderer* OccupyRenderer; // 0x78
		::UnityEngine::Renderer* EditOccupyRenderer; // 0x80
		::UnityEngine::Renderer* EffectRenderer; // 0x88
		::UnityEngine::Texture* OccupyAvailableTexture; // 0x90
		::UnityEngine::Texture* OccupyErrorTexture; // 0x98
		::UnityEngine::Texture* EffectCellAvailableTexture; // 0xA0
		::UnityEngine::Texture* EffectCellErrorTexture; // 0xA8
		::UnityEngine::Texture* EffectItemAvailableTexture; // 0xB0
		::UnityEngine::Texture* EffectItemErrorTexture; // 0xB8
		::UnityEngine::GameObject* NineSlice; // 0xC0
		::UnityEngine::GameObject* NineSliceEdit; // 0xC8
		::UnityEngine::GameObject* Transparent; // 0xD0
		::UnityEngine::Renderer* Field_7_19; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW__CCTOR_OFFSET))();
		}

		::System::Void InitPeformCell(::RPG::GameCore::ChenLingFesPreviewCellType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesPreviewCellType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_INITPEFORMCELL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPeformCellAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_SETPEFORMCELLAVAILABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* Method_7_648D33A557BC2E77(::System::Boolean a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_METHOD_7_648D33A557BC2E77_OFFSET))(this, a1);
		}

		::System::Void Method_7_84E99AA4DE826971(::RPG::GameCore::ChenLingFesPreviewCellType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesPreviewCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESPREVIEWCELLVIEW_METHOD_7_84E99AA4DE826971_OFFSET))(this, a1);
		}
	};
}
