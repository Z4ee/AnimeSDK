#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextWriter; }

#define RPG_GAMECORE_CSVROW_CLEAR_OFFSET UNITYSDK_OFFSET(0x195E2760)
#define RPG_GAMECORE_CSVROW_COL_10_OFFSET UNITYSDK_OFFSET(0x195E1F20)
#define RPG_GAMECORE_CSVROW_COL_11_OFFSET UNITYSDK_OFFSET(0x195E2060)
#define RPG_GAMECORE_CSVROW_COL_12_OFFSET UNITYSDK_OFFSET(0x195E21A0)
#define RPG_GAMECORE_CSVROW_COL_13_OFFSET UNITYSDK_OFFSET(0x195E22E0)
#define RPG_GAMECORE_CSVROW_COL_1_OFFSET UNITYSDK_OFFSET(0x195E18D0)
#define RPG_GAMECORE_CSVROW_COL_2_OFFSET UNITYSDK_OFFSET(0x195E1940)
#define RPG_GAMECORE_CSVROW_COL_3_OFFSET UNITYSDK_OFFSET(0x195E19C0)
#define RPG_GAMECORE_CSVROW_COL_4_OFFSET UNITYSDK_OFFSET(0x195E1A80)
#define RPG_GAMECORE_CSVROW_COL_5_OFFSET UNITYSDK_OFFSET(0x195E1B10)
#define RPG_GAMECORE_CSVROW_COL_6_OFFSET UNITYSDK_OFFSET(0x195E1B90)
#define RPG_GAMECORE_CSVROW_COL_7_OFFSET UNITYSDK_OFFSET(0x195E1C10)
#define RPG_GAMECORE_CSVROW_COL_8_OFFSET UNITYSDK_OFFSET(0x195E1CA0)
#define RPG_GAMECORE_CSVROW_COL_9_OFFSET UNITYSDK_OFFSET(0x195E1DE0)
#define RPG_GAMECORE_CSVROW_COL_OFFSET UNITYSDK_OFFSET(0x195E1830)
#define RPG_GAMECORE_CSVROW_TOSTREAMWRITER_OFFSET UNITYSDK_OFFSET(0x195E2630)
#define RPG_GAMECORE_CSVROW_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195E25D0)
#define RPG_GAMECORE_CSVROW__CTOR_OFFSET UNITYSDK_OFFSET(0x195E1800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CSVRow_TypeDefinitionIndex = 10417;

	class CSVRow : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__attackDamageTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA270);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__attackTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA278);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__teamTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA280);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__attackDamageTypeValues()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA288);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__skillTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA290);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__attackFormulaTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA298);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__healFormulaTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		::Il2CppArray<::System::String*>* _Headers; // 0x10
		::Il2CppArray<::System::String*>* _Values; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CSVRow* Col(::System::String* a1, ::System::Object* a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_1(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_1_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_2(::System::String* a1, ::System::Int64 a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_2_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_3(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_3_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_4(::System::String* a1, ::System::Single a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_4_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_5(::System::String* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_5_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_6(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_6_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_7(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_7_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_8(::System::String* a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_8_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_9(::System::String* a1, ::RPG::GameCore::SkillType a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_9_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_10(::System::String* a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_10_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_11(::System::String* a1, ::RPG::GameCore::HealFormulaType a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::HealFormulaType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_11_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_12(::System::String* a1, ::RPG::GameCore::AttackFormulaType a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AttackFormulaType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_12_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CSVRow* Col_13(::System::String* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_13_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_TOSTRING_OFFSET))(this);
		}

		::System::Void ToStreamWriter(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_TOSTREAMWRITER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_CLEAR_OFFSET))(this);
		}
	};
}
