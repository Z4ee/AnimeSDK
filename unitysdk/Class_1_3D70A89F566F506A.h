#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_137C00B46E99044C;
class Class_1_CFC41C1E202F76CF_1;
class Class_1_ED78E2C86A4B45C0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D70A89F566F506A_METHOD_1_05CD40642A37C892_1_OFFSET UNITYSDK_OFFSET(0x189E36E0)
#define CLASS_1_3D70A89F566F506A_METHOD_1_05CD40642A37C892_OFFSET UNITYSDK_OFFSET(0x189E35C0)
#define CLASS_1_3D70A89F566F506A_METHOD_1_35390D8C94AA80FF_OFFSET UNITYSDK_OFFSET(0x189E3940)
#define CLASS_1_3D70A89F566F506A_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x189E3570)
#define CLASS_1_3D70A89F566F506A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x189D0BD0)
#define CLASS_1_3D70A89F566F506A_METHOD_1_6FEF2FF63226CECC_OFFSET UNITYSDK_OFFSET(0x189E3C60)
#define CLASS_1_3D70A89F566F506A_METHOD_1_7C8C0AFEEF17C1DF_OFFSET UNITYSDK_OFFSET(0x189E3800)
#define CLASS_1_3D70A89F566F506A_METHOD_1_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0x189E3EC0)
#define CLASS_1_3D70A89F566F506A__CTOR_OFFSET UNITYSDK_OFFSET(0x189E3FC0)

inline static constexpr unsigned int Class_1_3D70A89F566F506A_TypeDefinitionIndex = 34262;

class Class_1_3D70A89F566F506A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_ED78E2C86A4B45C0*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* Field_1_1; // 0x18
	::Class_1_137C00B46E99044C* Field_1_2; // 0x20
	::Class_1_CFC41C1E202F76CF_1* Field_1_3; // 0x28
	::Class_1_137C00B46E99044C* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Int32 Field_1_9; // 0x48
	::System::Int32 Field_1_10; // 0x4C
	::System::Int32 Field_1_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::Class_1_ED78E2C86A4B45C0* Method_1_05CD40642A37C892(::System::UInt32 a1)
	{
		return ((::Class_1_ED78E2C86A4B45C0*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_05CD40642A37C892_OFFSET))(this, a1);
	}

	::Class_1_ED78E2C86A4B45C0* Method_1_05CD40642A37C892_1(::System::UInt32 a1)
	{
		return ((::Class_1_ED78E2C86A4B45C0*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_05CD40642A37C892_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C8C0AFEEF17C1DF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_7C8C0AFEEF17C1DF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_35390D8C94AA80FF(::RPG::GameCore::DiceCombatAdditivePropertyType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_35390D8C94AA80FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6FEF2FF63226CECC(::RPG::GameCore::DiceCombatModifierFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatModifierFlag))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_6FEF2FF63226CECC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7E3C3DAFBD8F4B2(::Class_1_3D70A89F566F506A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D70A89F566F506A*))((::PBYTE)hIl2Cpp + CLASS_1_3D70A89F566F506A_METHOD_1_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}
};
