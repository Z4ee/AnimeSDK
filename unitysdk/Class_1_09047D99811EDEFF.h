#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_46D3441D3469DF34;
class Class_2_584A6534C6157D2A;
class Class_2_78AF2AD995A1A7F0;
class Class_3_F5924891E2C8D3BA;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_09047D99811EDEFF_METHOD_1_0A7536BB63A5E303_OFFSET UNITYSDK_OFFSET(0x13574EB0)
#define CLASS_1_09047D99811EDEFF_METHOD_1_17145D10F0D79BAC_OFFSET UNITYSDK_OFFSET(0x13574B00)
#define CLASS_1_09047D99811EDEFF_METHOD_1_37A6562FFB01B3D2_OFFSET UNITYSDK_OFFSET(0x13575390)
#define CLASS_1_09047D99811EDEFF_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x13575340)
#define CLASS_1_09047D99811EDEFF_METHOD_1_BA6B648FFA4D8B56_OFFSET UNITYSDK_OFFSET(0x13574FF0)
#define CLASS_1_09047D99811EDEFF_METHOD_1_D3CDE7A94912ECB6_OFFSET UNITYSDK_OFFSET(0x135751B0)
#define CLASS_1_09047D99811EDEFF_METHOD_1_D6354DA460996F57_OFFSET UNITYSDK_OFFSET(0x13574A50)
#define CLASS_1_09047D99811EDEFF_METHOD_1_D88D92A5EF815725_OFFSET UNITYSDK_OFFSET(0x13575250)
#define CLASS_1_09047D99811EDEFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13575410)
#define CLASS_1_09047D99811EDEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13574EA0)

inline static constexpr unsigned int Class_1_09047D99811EDEFF_TypeDefinitionIndex = 67005;

class Class_1_09047D99811EDEFF : public ::System::Object
{
public:
	static ::Class_1_46D3441D3469DF34** StaticGet_Field_1_0()
	{
		return (::Class_1_46D3441D3469DF34**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09047D99811EDEFF_TypeDefinitionIndex)->GetStaticField(0x44480);
	}
	// static const ::System::Single Field_1_1; // 0x0
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* Field_1_4; // 0x20
	::System::String* Field_1_5; // 0x28
	::System::Single Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF__CCTOR_OFFSET))();
	}

	static ::Class_1_09047D99811EDEFF* Method_1_D6354DA460996F57(::Class_2_584A6534C6157D2A* a1, ::Class_2_78AF2AD995A1A7F0* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::Class_1_09047D99811EDEFF*(*)(::Class_2_584A6534C6157D2A*, ::Class_2_78AF2AD995A1A7F0*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_D6354DA460996F57_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_09047D99811EDEFF* Method_1_17145D10F0D79BAC(::Class_3_F5924891E2C8D3BA* a1, ::Class_2_78AF2AD995A1A7F0* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::Class_1_09047D99811EDEFF*(*)(::Class_3_F5924891E2C8D3BA*, ::Class_2_78AF2AD995A1A7F0*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_17145D10F0D79BAC_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_BA6B648FFA4D8B56(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_BA6B648FFA4D8B56_OFFSET))(a1);
	}

	static ::System::String* Method_1_D3CDE7A94912ECB6(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_D3CDE7A94912ECB6_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_0A7536BB63A5E303(::Il2CppArray<::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::Il2CppArray<::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_0A7536BB63A5E303_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_D88D92A5EF815725(::Class_2_78AF2AD995A1A7F0* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::Class_2_78AF2AD995A1A7F0*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_09047D99811EDEFF_METHOD_1_D88D92A5EF815725_OFFSET))(a1, a2);
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
