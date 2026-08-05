#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;

#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19087AF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19087BF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19087BE0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GridShowEventTextureSection_TypeDefinitionIndex = 62510;

	class GridShowEventTextureSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(GridShowEventTextureSection_TypeDefinitionIndex)->GetStaticField(0x11320);
		}
		::System::Int32 IconTextureId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CCTOR_OFFSET))();
		}

		::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CREATEINSTANCE_OFFSET))(this, context);
		}
	};
}
