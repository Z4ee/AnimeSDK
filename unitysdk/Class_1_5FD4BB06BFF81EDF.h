#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_199;
class Class_1_A92BC063ED2379EB;
class Class_1_B58468E7171EFB5E;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_B66C1067C0468FBB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FD4BB06BFF81EDF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x157E8500)
#define CLASS_1_5FD4BB06BFF81EDF_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x157E8320)
#define CLASS_1_5FD4BB06BFF81EDF_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x157E87A0)
#define CLASS_1_5FD4BB06BFF81EDF_TICK_OFFSET UNITYSDK_OFFSET(0x157E8730)
#define CLASS_1_5FD4BB06BFF81EDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x157E87E0)
#define CLASS_1_5FD4BB06BFF81EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x157E8070)

inline static constexpr unsigned int Class_1_5FD4BB06BFF81EDF_TypeDefinitionIndex = 73705;

class Class_1_5FD4BB06BFF81EDF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FD4BB06BFF81EDF_TypeDefinitionIndex)->GetStaticField(0x59DE0);
	}
	::Class_1_E518B582305CCAFF* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_199*>* Field_1_2; // 0x18

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelStatusType a2, ::Class_1_B58468E7171EFB5E* a3, ::Class_1_A92BC063ED2379EB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelStatusType, ::Class_1_B58468E7171EFB5E*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_METHOD_1_51AC7912135C5E23_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_TICK_OFFSET))(this, a1);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
