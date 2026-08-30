#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_19;
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class PVECharacterStt; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_0_OFFSET UNITYSDK_OFFSET(0xE71E390)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_1_OFFSET UNITYSDK_OFFSET(0xE71E3B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_2_OFFSET UNITYSDK_OFFSET(0xE71E3D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_3_OFFSET UNITYSDK_OFFSET(0xE71E3F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_4_OFFSET UNITYSDK_OFFSET(0xE71E440)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_5_OFFSET UNITYSDK_OFFSET(0xE71E490)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_6_OFFSET UNITYSDK_OFFSET(0xE71E4E0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_7_OFFSET UNITYSDK_OFFSET(0xE71E530)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_8_OFFSET UNITYSDK_OFFSET(0xE71E580)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE71E350)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE71E380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsComponent___c_TypeDefinitionIndex = 57788;

	class StatisticsComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::PVECharacterStt*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::GameCore::PVECharacterStt*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15440);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>** StaticGet___9__2_4()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15448);
		}
		static ::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15450);
		}
		static ::RPG::GameCore::StatisticsComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::StatisticsComponent___c**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15458);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>** StaticGet___9__2_8()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15460);
		}
		static ::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15468);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>** StaticGet___9__2_6()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15470);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>** StaticGet___9__2_5()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15478);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>** StaticGet___9__2_7()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15480);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::LevelDataComponent_BattleScoringData>, ::Class_1_D17272E82AE804C2_19*>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::LevelDataComponent_BattleScoringData>, ::Class_1_D17272E82AE804C2_19*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsComponent___c_TypeDefinitionIndex)->GetStaticField(0x15488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildPVEStatistics_b__2_0(::RPG::GameCore::PVECharacterStt* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PVECharacterStt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildPVEStatistics_b__2_1(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 _BuildPVEStatistics_b__2_2(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_2_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_19* _BuildPVEStatistics_b__2_3(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::LevelDataComponent_BattleScoringData> a1)
		{
			return ((::Class_1_D17272E82AE804C2_19*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::LevelDataComponent_BattleScoringData>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_3_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_19* _BuildPVEStatistics_b__2_4(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint> a1)
		{
			return ((::Class_1_D17272E82AE804C2_19*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_4_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_19* _BuildPVEStatistics_b__2_5(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint> a1)
		{
			return ((::Class_1_D17272E82AE804C2_19*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_5_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_19* _BuildPVEStatistics_b__2_6(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint> a1)
		{
			return ((::Class_1_D17272E82AE804C2_19*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_6_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_19* _BuildPVEStatistics_b__2_7(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint> a1)
		{
			return ((::Class_1_D17272E82AE804C2_19*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_7_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_19* _BuildPVEStatistics_b__2_8(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint> a1)
		{
			return ((::Class_1_D17272E82AE804C2_19*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_8_OFFSET))(this, a1);
		}
	};
}
