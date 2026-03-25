#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FBC3BC94D96CB59;
class Class_1_6FBC3BC94D96CB59_1;
class Class_1_799AB7BE4813D50A;
class Class_1_CA9459FF704380AC;
namespace RPG::Client { class RogueBuffData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_98274A1A3981A020___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x110C5D60)
#define CLASS_1_98274A1A3981A020___C__CTOR_OFFSET UNITYSDK_OFFSET(0x110C5D90)
#define CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_0_OFFSET UNITYSDK_OFFSET(0x110C5DA0)
#define CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_1_OFFSET UNITYSDK_OFFSET(0x110C61A0)
#define CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_2_OFFSET UNITYSDK_OFFSET(0x110C6180)
#define CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_3_OFFSET UNITYSDK_OFFSET(0x110C65A0)

inline static constexpr unsigned int Class_1_98274A1A3981A020___c_TypeDefinitionIndex = 54652;

class Class_1_98274A1A3981A020___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_799AB7BE4813D50A*, ::RPG::Client::RogueBuffData*>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::Class_1_799AB7BE4813D50A*, ::RPG::Client::RogueBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020___c_TypeDefinitionIndex)->GetStaticField(0x45050);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>*, ::Class_1_6FBC3BC94D96CB59_1*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>*, ::Class_1_6FBC3BC94D96CB59_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020___c_TypeDefinitionIndex)->GetStaticField(0x45058);
	}
	static ::Class_1_98274A1A3981A020___c** StaticGet___9()
	{
		return (::Class_1_98274A1A3981A020___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020___c_TypeDefinitionIndex)->GetStaticField(0x45060);
	}
	static ::System::Func_2<::Class_1_CA9459FF704380AC*, ::RPG::Client::RogueBuffData*>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::Class_1_CA9459FF704380AC*, ::RPG::Client::RogueBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020___c_TypeDefinitionIndex)->GetStaticField(0x45068);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>*, ::Class_1_6FBC3BC94D96CB59*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>*, ::Class_1_6FBC3BC94D96CB59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020___c_TypeDefinitionIndex)->GetStaticField(0x45070);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020___C__CTOR_OFFSET))(this);
	}

	::Class_1_6FBC3BC94D96CB59* _HandlePostProcess_b__1_0(::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>* actionToMerge)
	{
		return ((::Class_1_6FBC3BC94D96CB59*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_0_OFFSET))(this, actionToMerge);
	}

	::RPG::Client::RogueBuffData* _HandlePostProcess_b__1_2(::Class_1_799AB7BE4813D50A* a)
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::Class_1_799AB7BE4813D50A*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_2_OFFSET))(this, a);
	}

	::Class_1_6FBC3BC94D96CB59_1* _HandlePostProcess_b__1_1(::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>* actionToMerge)
	{
		return ((::Class_1_6FBC3BC94D96CB59_1*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_1_OFFSET))(this, actionToMerge);
	}

	::RPG::Client::RogueBuffData* _HandlePostProcess_b__1_3(::Class_1_CA9459FF704380AC* a)
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::Class_1_CA9459FF704380AC*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020___C__HANDLEPOSTPROCESS_B__1_3_OFFSET))(this, a);
	}
};
