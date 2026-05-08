#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;
namespace MoleMole::HollowChessboard { class UVAnimSection_Config; }

#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x125CF930)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_GETRELATIVESCREENLAYER_OFFSET UNITYSDK_OFFSET(0x125CF9C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x125CFA10)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x125CFA00)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimSection_TypeDefinitionIndex = 40849;

	class UVAnimSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(UVAnimSection_TypeDefinitionIndex)->GetStaticField(0x112C0);
		}
		::MoleMole::HollowChessboard::UVAnimSection_Config* UVAnimConfig; // 0x10
		::System::Int32 RelativeScreenLayer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CCTOR_OFFSET))();
		}

		::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}

		::System::Int32 GetRelativeScreenLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_GETRELATIVESCREENLAYER_OFFSET))(this);
		}
	};
}
