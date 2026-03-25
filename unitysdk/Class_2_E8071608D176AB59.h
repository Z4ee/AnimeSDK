#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_135.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_643;
class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_E8071608D176AB59_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x89D9F00)
#define CLASS_2_E8071608D176AB59_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x89D9EC0)
#define CLASS_2_E8071608D176AB59_METHOD_2_13A230E477C974C4_OFFSET UNITYSDK_OFFSET(0x89D9FC0)
#define CLASS_2_E8071608D176AB59_METHOD_2_3807F62ACB9F46BC_OFFSET UNITYSDK_OFFSET(0x89DA8B0)
#define CLASS_2_E8071608D176AB59_METHOD_2_725C72DE2214630C_1_OFFSET UNITYSDK_OFFSET(0x89DA190)
#define CLASS_2_E8071608D176AB59_METHOD_2_725C72DE2214630C_OFFSET UNITYSDK_OFFSET(0x89DA0F0)
#define CLASS_2_E8071608D176AB59_METHOD_2_96548BB5E28CF746_OFFSET UNITYSDK_OFFSET(0x89DA230)
#define CLASS_2_E8071608D176AB59__CTOR_OFFSET UNITYSDK_OFFSET(0x89D9FB0)

inline static constexpr unsigned int Class_2_E8071608D176AB59_TypeDefinitionIndex = 53028;

class Class_2_E8071608D176AB59 : public ::Class_1_43BD383C98B4C0C5_135
{
public:
	static ::Class_2_E8071608D176AB59** StaticGet_Field_2_1()
	{
		return (::Class_2_E8071608D176AB59**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E8071608D176AB59_TypeDefinitionIndex)->GetStaticField(0x44700);
	}
	::Class_0_16E4307DCC419505_643* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_128774387667156B_OFFSET))(this);
	}

	static ::Class_2_E8071608D176AB59* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_E8071608D176AB59*(*)())((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::Class_2_E8071608D176AB59* Method_2_13A230E477C974C4()
	{
		return ((::Class_2_E8071608D176AB59*(*)())((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_13A230E477C974C4_OFFSET))();
	}

	static ::Class_2_E8071608D176AB59* Method_2_725C72DE2214630C(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Class_2_E8071608D176AB59*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_725C72DE2214630C_OFFSET))(a1);
	}

	static ::Class_2_E8071608D176AB59* Method_2_725C72DE2214630C_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Class_2_E8071608D176AB59*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_725C72DE2214630C_1_OFFSET))(a1);
	}

	::System::String* Method_2_96548BB5E28CF746(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_96548BB5E28CF746_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_3807F62ACB9F46BC(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59_METHOD_2_3807F62ACB9F46BC_OFFSET))(this, a1, a2);
	}
};
