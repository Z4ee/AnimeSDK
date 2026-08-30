#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipInteractionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_1_E87E20A464EBF92F;
class Class_2_68CB91321C3E76A7;
class Class_3_8E5D4274ED1F9117;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_03CFB6CEB0980B10_METHOD_1_0982EAC98A9FBB5F_OFFSET UNITYSDK_OFFSET(0xBB11800)
#define CLASS_1_03CFB6CEB0980B10_METHOD_1_432270D82B53F830_OFFSET UNITYSDK_OFFSET(0xBB11DA0)
#define CLASS_1_03CFB6CEB0980B10_METHOD_1_5302C65376D55117_OFFSET UNITYSDK_OFFSET(0xBB11B30)
#define CLASS_1_03CFB6CEB0980B10_METHOD_1_753B107EA2024637_OFFSET UNITYSDK_OFFSET(0xBB11C30)
#define CLASS_1_03CFB6CEB0980B10_METHOD_1_8A98CF9E4B88075B_OFFSET UNITYSDK_OFFSET(0xBB113F0)
#define CLASS_1_03CFB6CEB0980B10_METHOD_1_B122A1C6FDF6E7A9_OFFSET UNITYSDK_OFFSET(0xBB115A0)

inline static constexpr unsigned int Class_1_03CFB6CEB0980B10_TypeDefinitionIndex = 76862;

class Class_1_03CFB6CEB0980B10 : public ::System::Object
{
public:
	// static const ::System::Single DIEHMHCJGMA; // 0x0

	static ::Class_3_8E5D4274ED1F9117* Method_1_8A98CF9E4B88075B()
	{
		return ((::Class_3_8E5D4274ED1F9117*(*)())((::PBYTE)hIl2Cpp + CLASS_1_03CFB6CEB0980B10_METHOD_1_8A98CF9E4B88075B_OFFSET))();
	}

	static ::System::Void Method_1_B122A1C6FDF6E7A9(::Class_2_68CB91321C3E76A7* a1, ::Class_2_68CB91321C3E76A7* a2, ::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType a3, ::Class_2_68CB91321C3E76A7* a4)
	{
		return ((::System::Void(*)(::Class_2_68CB91321C3E76A7*, ::Class_2_68CB91321C3E76A7*, ::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_03CFB6CEB0980B10_METHOD_1_B122A1C6FDF6E7A9_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_68CB91321C3E76A7* Method_1_0982EAC98A9FBB5F(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::Class_2_68CB91321C3E76A7*(*)(::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_1_03CFB6CEB0980B10_METHOD_1_0982EAC98A9FBB5F_OFFSET))(a1);
	}

	static ::System::Void Method_1_5302C65376D55117(::System::Int32 a1, ::RPG::GameCore::PixAirEventType a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_03CFB6CEB0980B10_METHOD_1_5302C65376D55117_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_753B107EA2024637(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::Class_1_E87E20A464EBF92F*>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::Class_1_E87E20A464EBF92F*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_03CFB6CEB0980B10_METHOD_1_753B107EA2024637_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_432270D82B53F830(::Class_2_68CB91321C3E76A7* a1, ::Class_1_E87E20A464EBF92F* a2, ::RPG::GameCore::FixPoint a3, ::Class_3_8E5D4274ED1F9117* a4)
	{
		return ((::System::Void(*)(::Class_2_68CB91321C3E76A7*, ::Class_1_E87E20A464EBF92F*, ::RPG::GameCore::FixPoint, ::Class_3_8E5D4274ED1F9117*))((::PBYTE)hIl2Cpp + CLASS_1_03CFB6CEB0980B10_METHOD_1_432270D82B53F830_OFFSET))(a1, a2, a3, a4);
	}
};
