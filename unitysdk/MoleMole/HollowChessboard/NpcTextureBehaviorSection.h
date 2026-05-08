#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13838AD0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13838B70)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13838B60)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int NpcTextureBehaviorSection_TypeDefinitionIndex = 61254;

	class NpcTextureBehaviorSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(NpcTextureBehaviorSection_TypeDefinitionIndex)->GetStaticField(0xF9E0);
		}
		::System::String* npcBehavior; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CCTOR_OFFSET))();
		}

		::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}
	};
}
