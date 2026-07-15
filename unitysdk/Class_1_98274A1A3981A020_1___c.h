#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_799AB7BE4813D50A;
class Class_1_CA9459FF704380AC;
class Class_1_F6D921FAC2989366;
class Class_1_F6D921FAC2989366_1;
namespace RPG::Client { class RogueBuffData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_98274A1A3981A020_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179CE670)
#define CLASS_1_98274A1A3981A020_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179CE6A0)
#define CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_0_OFFSET UNITYSDK_OFFSET(0x179CE6B0)
#define CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_1_OFFSET UNITYSDK_OFFSET(0x179CEA40)
#define CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_2_OFFSET UNITYSDK_OFFSET(0x179CEA20)
#define CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_3_OFFSET UNITYSDK_OFFSET(0x179CEDD0)

inline static constexpr unsigned int Class_1_98274A1A3981A020_1___c_TypeDefinitionIndex = 64140;

class Class_1_98274A1A3981A020_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_799AB7BE4813D50A*, ::RPG::Client::RogueBuffData*>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::Class_1_799AB7BE4813D50A*, ::RPG::Client::RogueBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020_1___c_TypeDefinitionIndex)->GetStaticField(0xCD40);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>*, ::Class_1_F6D921FAC2989366*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>*, ::Class_1_F6D921FAC2989366*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020_1___c_TypeDefinitionIndex)->GetStaticField(0xCD48);
	}
	static ::Class_1_98274A1A3981A020_1___c** StaticGet___9()
	{
		return (::Class_1_98274A1A3981A020_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020_1___c_TypeDefinitionIndex)->GetStaticField(0xCD50);
	}
	static ::System::Func_2<::Class_1_CA9459FF704380AC*, ::RPG::Client::RogueBuffData*>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::Class_1_CA9459FF704380AC*, ::RPG::Client::RogueBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020_1___c_TypeDefinitionIndex)->GetStaticField(0xCD58);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>*, ::Class_1_F6D921FAC2989366_1*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>*, ::Class_1_F6D921FAC2989366_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98274A1A3981A020_1___c_TypeDefinitionIndex)->GetStaticField(0xCD60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1___C__CTOR_OFFSET))(this);
	}

	::Class_1_F6D921FAC2989366* _HandlePostProcess_b__1_0(::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>* a1)
	{
		return ((::Class_1_F6D921FAC2989366*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_799AB7BE4813D50A*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_0_OFFSET))(this, a1);
	}

	::RPG::Client::RogueBuffData* _HandlePostProcess_b__1_2(::Class_1_799AB7BE4813D50A* a1)
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::Class_1_799AB7BE4813D50A*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_2_OFFSET))(this, a1);
	}

	::Class_1_F6D921FAC2989366_1* _HandlePostProcess_b__1_1(::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>* a1)
	{
		return ((::Class_1_F6D921FAC2989366_1*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_CA9459FF704380AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_1_OFFSET))(this, a1);
	}

	::RPG::Client::RogueBuffData* _HandlePostProcess_b__1_3(::Class_1_CA9459FF704380AC* a1)
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::Class_1_CA9459FF704380AC*))((::PBYTE)hIl2Cpp + CLASS_1_98274A1A3981A020_1___C__HANDLEPOSTPROCESS_B__1_3_OFFSET))(this, a1);
	}
};
