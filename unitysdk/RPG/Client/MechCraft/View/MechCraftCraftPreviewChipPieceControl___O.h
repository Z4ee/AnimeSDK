#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPreviewChipPieceControl___O_TypeDefinitionIndex = 79896;

	class MechCraftCraftPreviewChipPieceControl___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>** StaticGet__0___Min()
		{
			return (::System::Func_3<::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftCraftPreviewChipPieceControl___O_TypeDefinitionIndex)->GetStaticField(0x59110);
		}
	};
}
