#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13844940)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x13844A70)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13844AC0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13844AB0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenDynamicBuildSection_TypeDefinitionIndex = 46990;

	class ScreenDynamicBuildSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(ScreenDynamicBuildSection_TypeDefinitionIndex)->GetStaticField(0x13660);
		}
		::System::UInt32 DynamicKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CCTOR_OFFSET))();
		}

		::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* context)
		{
			return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}

		::System::UInt32 GetDynamicKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
