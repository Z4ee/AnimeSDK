#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_A92BC063ED2379EB;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_B66C1067C0468FBB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FD4BB06BFF81EDF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13BB2A20)
#define CLASS_1_5FD4BB06BFF81EDF_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x13BB2840)
#define CLASS_1_5FD4BB06BFF81EDF_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x13BB2CC0)
#define CLASS_1_5FD4BB06BFF81EDF_TICK_OFFSET UNITYSDK_OFFSET(0x13BB2C50)
#define CLASS_1_5FD4BB06BFF81EDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BB2D00)
#define CLASS_1_5FD4BB06BFF81EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13BB2590)

inline static constexpr unsigned int Class_1_5FD4BB06BFF81EDF_TypeDefinitionIndex = 72180;

class Class_1_5FD4BB06BFF81EDF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FD4BB06BFF81EDF_TypeDefinitionIndex)->GetStaticField(0x62F00);
	}
	::Class_1_3F1549C2A53A3A5B* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_2; // 0x18

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelStatusType a2, ::Class_1_2CE61CB9B2E57F36* a3, ::Class_1_A92BC063ED2379EB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelStatusType, ::Class_1_2CE61CB9B2E57F36*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

	::Class_1_3F1549C2A53A3A5B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3F1549C2A53A3A5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
