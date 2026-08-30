#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_C56A98B39593B09F;
class Class_2_68C34B5C1C40C2FF_2;
class Class_2_8AC1E618F6014D69;
class Class_3_F5924891E2C8D3BA;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_09047D99811EDEFF_METHOD_1_0A7536BB63A5E303_OFFSET UNITYSDK_OFFSET(0x152EBCB0)
#define CLASS_1_09047D99811EDEFF_METHOD_1_17145D10F0D79BAC_OFFSET UNITYSDK_OFFSET(0x152EB840)
#define CLASS_1_09047D99811EDEFF_METHOD_1_2E7CD2C9492C5D9F_OFFSET UNITYSDK_OFFSET(0x152EBEF0)
#define CLASS_1_09047D99811EDEFF_METHOD_1_37A6562FFB01B3D2_OFFSET UNITYSDK_OFFSET(0x152EC170)
#define CLASS_1_09047D99811EDEFF_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x152EC120)
#define CLASS_1_09047D99811EDEFF_METHOD_1_B258190A9C1B4FE4_OFFSET UNITYSDK_OFFSET(0x152EBDF0)
#define CLASS_1_09047D99811EDEFF_METHOD_1_BEAC01CDE88C18DE_OFFSET UNITYSDK_OFFSET(0x152EC000)
#define CLASS_1_09047D99811EDEFF_METHOD_1_D4F29D49968E39CE_OFFSET UNITYSDK_OFFSET(0x152EB760)
#define CLASS_1_09047D99811EDEFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x152EC1F0)
#define CLASS_1_09047D99811EDEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x152EBCA0)

inline static constexpr unsigned int Class_1_09047D99811EDEFF_TypeDefinitionIndex = 71643;

class Class_1_09047D99811EDEFF : public ::System::Object
{
public:
	static ::Class_1_C56A98B39593B09F** StaticGet_LHNBJBCOOHH()
	{
		return (::Class_1_C56A98B39593B09F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09047D99811EDEFF_TypeDefinitionIndex)->GetStaticField(0x64B60);
	}
	// static const ::System::Single FOPMNAAAIDC; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* NPFHEANBOLE; // 0x10
	::System::String* DDDAKMPHEEJ; // 0x18
	::System::String* GEJIJFFILEB; // 0x20
	::System::String* GEPAHMFFAOF; // 0x28
	::System::Single MMOCIIJHFHL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF__CCTOR_OFFSET))();
	}

	static ::Class_1_09047D99811EDEFF* Method_1_D4F29D49968E39CE(::Class_2_8AC1E618F6014D69* a1, ::Class_2_68C34B5C1C40C2FF_2* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::Class_1_09047D99811EDEFF*(*)(::Class_2_8AC1E618F6014D69*, ::Class_2_68C34B5C1C40C2FF_2*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_D4F29D49968E39CE_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_09047D99811EDEFF* Method_1_17145D10F0D79BAC(::Class_3_F5924891E2C8D3BA* a1, ::Class_2_68C34B5C1C40C2FF_2* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::Class_1_09047D99811EDEFF*(*)(::Class_3_F5924891E2C8D3BA*, ::Class_2_68C34B5C1C40C2FF_2*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_17145D10F0D79BAC_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_B258190A9C1B4FE4(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_B258190A9C1B4FE4_OFFSET))(a1);
	}

	static ::System::String* Method_1_2E7CD2C9492C5D9F(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_2E7CD2C9492C5D9F_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_0A7536BB63A5E303(::Il2CppArray<::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::Il2CppArray<::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_0A7536BB63A5E303_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_BEAC01CDE88C18DE(::Class_2_68C34B5C1C40C2FF_2* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::Class_2_68C34B5C1C40C2FF_2*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_BEAC01CDE88C18DE_OFFSET))(a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageParam* Method_1_37A6562FFB01B3D2()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_37A6562FFB01B3D2_OFFSET))(this);
	}
};
