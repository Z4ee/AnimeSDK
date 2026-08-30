#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMLINERENDERERVIEW_SETLINERENDERERPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD4EBA40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMLINERENDERERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD4EBB00)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimLineRendererView_TypeDefinitionIndex = 76715;

	class FiveDimLineRendererView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::LineRenderer* lineRenderer; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMLINERENDERERVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetLineRendererPositions(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMLINERENDERERVIEW_SETLINERENDERERPOSITIONS_OFFSET))(this, a1, a2);
		}
	};
}
