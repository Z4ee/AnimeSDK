#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;
namespace MoleMole::HollowChessboard { class ParticleSection_Config; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13023B90)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13023C30)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13023C20)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_TypeDefinitionIndex = 87218;

	class ParticleSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(ParticleSection_TypeDefinitionIndex)->GetStaticField(0x117A0);
		}
		::MoleMole::HollowChessboard::ParticleSection_Config* ParticleConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CCTOR_OFFSET))();
		}

		::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CREATEINSTANCE_OFFSET))(this, context);
		}
	};
}
