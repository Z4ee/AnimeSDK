#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_A9BB9C9E4D3134C4;
class Class_1_F916DC6CF582E95A;
class Class_2_3616FDE8A71D0590_2;
class Class_2_F3C45F1FC7349B6E;
class Class_3_98C806684F7CC372_11;
class Class_3_DA3467C8E23483C5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D09581DBA307887_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A02D10)
#define CLASS_1_7D09581DBA307887_METHOD_1_20C46A6901C419D2_OFFSET UNITYSDK_OFFSET(0x189E8750)
#define CLASS_1_7D09581DBA307887_METHOD_1_22E51A4B5C625684_OFFSET UNITYSDK_OFFSET(0x189E8AE0)
#define CLASS_1_7D09581DBA307887_METHOD_1_360C0FD88CF24176_OFFSET UNITYSDK_OFFSET(0x18A03150)
#define CLASS_1_7D09581DBA307887_METHOD_1_7660AC56C29AD44A_OFFSET UNITYSDK_OFFSET(0x18A03240)
#define CLASS_1_7D09581DBA307887_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18A02DC0)
#define CLASS_1_7D09581DBA307887_METHOD_1_8EA390F189C9CDC6_OFFSET UNITYSDK_OFFSET(0x18A02B30)
#define CLASS_1_7D09581DBA307887_METHOD_1_BEA562ECAB07B483_OFFSET UNITYSDK_OFFSET(0x189E8A80)
#define CLASS_1_7D09581DBA307887_METHOD_1_CED1C0B734BF7541_OFFSET UNITYSDK_OFFSET(0x18A02E50)
#define CLASS_1_7D09581DBA307887__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02C60)

inline static constexpr unsigned int Class_1_7D09581DBA307887_TypeDefinitionIndex = 34968;

class Class_1_7D09581DBA307887 : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_2* Field_1_0; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCoreEventType, ::System::Collections::Generic::List_1<::Class_1_F916DC6CF582E95A*>*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3616FDE8A71D0590_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_3616FDE8A71D0590_2*))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_7D09581DBA307887* Method_1_8EA390F189C9CDC6(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3616FDE8A71D0590_2* a2)
	{
		return ((::Class_1_7D09581DBA307887*(*)(::Class_2_F3C45F1FC7349B6E*, ::Class_2_3616FDE8A71D0590_2*))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_8EA390F189C9CDC6_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CED1C0B734BF7541(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_CED1C0B734BF7541_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BEA562ECAB07B483(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_3_98C806684F7CC372_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_3_98C806684F7CC372_11*))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_BEA562ECAB07B483_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20C46A6901C419D2(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_3_98C806684F7CC372_11* a2, ::Class_3_DA3467C8E23483C5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_3_98C806684F7CC372_11*, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_20C46A6901C419D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_22E51A4B5C625684(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_3_98C806684F7CC372_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_3_98C806684F7CC372_11*))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_22E51A4B5C625684_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_1_360C0FD88CF24176(::RPG::GameCore::CakeRaceCoreEventType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_360C0FD88CF24176_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7660AC56C29AD44A(::RPG::GameCore::CakeRaceCoreEventType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType))((::PBYTE)hIl2Cpp + CLASS_1_7D09581DBA307887_METHOD_1_7660AC56C29AD44A_OFFSET))(this, a1);
	}
};
