#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;
namespace MoleMole::HollowChessboard { class SceneAnimRenderSection_Config; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x149EFFA0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_GETRELATIVESCREENLAYER_OFFSET UNITYSDK_OFFSET(0x149F0050)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F00A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x149F0090)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_TypeDefinitionIndex = 52704;

	class SceneAnimRenderSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_TypeDefinitionIndex)->GetStaticField(0xB190);
		}
		::MoleMole::HollowChessboard::SceneAnimRenderSection_Config* SectionConfig; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CCTOR_OFFSET))();
		}

		::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}

		::System::Int32 GetRelativeScreenLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_GETRELATIVESCREENLAYER_OFFSET))(this);
		}
	};
}
