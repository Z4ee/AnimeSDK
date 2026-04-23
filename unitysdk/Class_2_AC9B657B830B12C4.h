#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_96.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_738;
class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_AC9B657B830B12C4_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x12116F70)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12116F30)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_725C72DE2214630C_1_OFFSET UNITYSDK_OFFSET(0x12117270)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_725C72DE2214630C_OFFSET UNITYSDK_OFFSET(0x121171D0)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_83CA89BBCCDC6288_OFFSET UNITYSDK_OFFSET(0x12118450)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_B8D63AEBA05C4F85_OFFSET UNITYSDK_OFFSET(0x12117310)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_CB8C32B0B6E6CB27_OFFSET UNITYSDK_OFFSET(0x12117030)
#define CLASS_2_AC9B657B830B12C4_METHOD_2_F745997B4997525D_OFFSET UNITYSDK_OFFSET(0x12118200)
#define CLASS_2_AC9B657B830B12C4__CTOR_OFFSET UNITYSDK_OFFSET(0x12117020)

inline static constexpr unsigned int Class_2_AC9B657B830B12C4_TypeDefinitionIndex = 60122;

class Class_2_AC9B657B830B12C4 : public ::Class_1_43BD383C98B4C0C5_96
{
public:
	static ::Class_2_AC9B657B830B12C4** StaticGet_Field_2_1()
	{
		return (::Class_2_AC9B657B830B12C4**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC9B657B830B12C4_TypeDefinitionIndex)->GetStaticField(0x5B9F0);
	}
	::Class_0_16E4307DCC419505_738* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_128774387667156B_OFFSET))(this);
	}

	static ::Class_2_AC9B657B830B12C4* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_AC9B657B830B12C4*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::Class_2_AC9B657B830B12C4* Method_2_CB8C32B0B6E6CB27()
	{
		return ((::Class_2_AC9B657B830B12C4*(*)())((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_CB8C32B0B6E6CB27_OFFSET))();
	}

	static ::Class_2_AC9B657B830B12C4* Method_2_725C72DE2214630C(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Class_2_AC9B657B830B12C4*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_725C72DE2214630C_OFFSET))(a1);
	}

	static ::Class_2_AC9B657B830B12C4* Method_2_725C72DE2214630C_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Class_2_AC9B657B830B12C4*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_725C72DE2214630C_1_OFFSET))(a1);
	}

	::System::String* Method_2_B8D63AEBA05C4F85(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_B8D63AEBA05C4F85_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_83CA89BBCCDC6288(::RPG::GameCore::FixPoint a1, ::System::String* a2, ::System::Int32& a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_83CA89BBCCDC6288_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F745997B4997525D(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AC9B657B830B12C4_METHOD_2_F745997B4997525D_OFFSET))(this, a1, a2);
	}
};
