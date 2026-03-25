#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_43BD383C98B4C0C5_176;
class Class_1_C4FD36003027AC99;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_14;
class Class_2_49CAB3DE74280C58;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FD4BB06BFF81EDF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10C87290)
#define CLASS_1_5FD4BB06BFF81EDF_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x10C87060)
#define CLASS_1_5FD4BB06BFF81EDF_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10C87550)
#define CLASS_1_5FD4BB06BFF81EDF_TICK_OFFSET UNITYSDK_OFFSET(0x10C874E0)
#define CLASS_1_5FD4BB06BFF81EDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C87590)
#define CLASS_1_5FD4BB06BFF81EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x10C86E30)

inline static constexpr unsigned int Class_1_5FD4BB06BFF81EDF_TypeDefinitionIndex = 63202;

class Class_1_5FD4BB06BFF81EDF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FD4BB06BFF81EDF_TypeDefinitionIndex)->GetStaticField(0x48B80);
	}
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_176*>* Field_1_1; // 0x10
	::Class_1_F9EBB5A401350F78* Field_1_2; // 0x18

	::System::Void _ctor(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelStatusType a2, ::Class_1_2CE61CB9B2E57F36* a3, ::Class_1_C4FD36003027AC99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelStatusType, ::Class_1_2CE61CB9B2E57F36*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_METHOD_1_885DF4DA0F709E3E_OFFSET))();
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_TICK_OFFSET))(this, a1);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FD4BB06BFF81EDF_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
