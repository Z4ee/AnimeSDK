#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DCF19041864B41DF_Struct_2_D731FF4936FF71BD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelEntityUseSkill; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DCF19041864B41DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5B7400)
#define CLASS_1_DCF19041864B41DF_METHOD_1_75EA96520C4270C5_OFFSET UNITYSDK_OFFSET(0xB5B7210)
#define CLASS_1_DCF19041864B41DF_METHOD_1_C6BDAA055BD4DF0E_OFFSET UNITYSDK_OFFSET(0xB5B7490)
#define CLASS_1_DCF19041864B41DF__CTOR_OFFSET UNITYSDK_OFFSET(0xB5B7760)

inline static constexpr unsigned int Class_1_DCF19041864B41DF_TypeDefinitionIndex = 56386;

class Class_1_DCF19041864B41DF : public ::System::Object
{
public:
	// static const ::System::Int32 JHPLFAOKPOP = 0x5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_DCF19041864B41DF_Struct_2_D731FF4936FF71BD>*>* IPPGDPNDNBK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCF19041864B41DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75EA96520C4270C5(::RPG::GameCore::LevelEntityUseSkill* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityUseSkill*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DCF19041864B41DF_METHOD_1_75EA96520C4270C5_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCF19041864B41DF_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_C6BDAA055BD4DF0E(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DCF19041864B41DF_METHOD_1_C6BDAA055BD4DF0E_OFFSET))(this, a1, a2, a3);
	}
};
