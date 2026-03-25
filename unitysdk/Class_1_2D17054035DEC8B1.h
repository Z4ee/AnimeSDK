#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_A9BB9C9E4D3134C4;
class Class_1_DD4C1258A1C5CB26;
class Class_2_099B78418029B3B1_2;
class Class_2_F3C45F1FC7349B6E;
class Class_3_98C806684F7CC372_6;
class Class_3_DA3467C8E23483C5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2D17054035DEC8B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16711820)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x167118E0)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_360C0FD88CF24176_OFFSET UNITYSDK_OFFSET(0x167122A0)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_4AAC3896039C2FB5_OFFSET UNITYSDK_OFFSET(0x16711CD0)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_5ED395B1E0B4287C_OFFSET UNITYSDK_OFFSET(0x16711C70)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_7660AC56C29AD44A_OFFSET UNITYSDK_OFFSET(0x167123A0)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_89D6FE8F0804BB43_OFFSET UNITYSDK_OFFSET(0x16711980)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_8EA390F189C9CDC6_OFFSET UNITYSDK_OFFSET(0x16711640)
#define CLASS_1_2D17054035DEC8B1_METHOD_1_B146DB4C3FE9A447_OFFSET UNITYSDK_OFFSET(0x16711FC0)
#define CLASS_1_2D17054035DEC8B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16711770)

inline static constexpr unsigned int Class_1_2D17054035DEC8B1_TypeDefinitionIndex = 28951;

class Class_1_2D17054035DEC8B1 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10
	::Class_2_099B78418029B3B1_2* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCoreEventType, ::System::Collections::Generic::List_1<::Class_1_DD4C1258A1C5CB26*>*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_099B78418029B3B1_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_099B78418029B3B1_2*))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_2D17054035DEC8B1* Method_1_8EA390F189C9CDC6(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_099B78418029B3B1_2* a2)
	{
		return ((::Class_1_2D17054035DEC8B1*(*)(::Class_2_F3C45F1FC7349B6E*, ::Class_2_099B78418029B3B1_2*))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_8EA390F189C9CDC6_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D6FE8F0804BB43(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_89D6FE8F0804BB43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5ED395B1E0B4287C(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_3_98C806684F7CC372_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_3_98C806684F7CC372_6*))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_5ED395B1E0B4287C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4AAC3896039C2FB5(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_3_98C806684F7CC372_6* a2, ::Class_3_DA3467C8E23483C5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_3_98C806684F7CC372_6*, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_4AAC3896039C2FB5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B146DB4C3FE9A447(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_3_98C806684F7CC372_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_3_98C806684F7CC372_6*))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_B146DB4C3FE9A447_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_1_360C0FD88CF24176(::RPG::GameCore::CakeRaceCoreEventType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_360C0FD88CF24176_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7660AC56C29AD44A(::RPG::GameCore::CakeRaceCoreEventType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType))((::PBYTE)hIl2Cpp + CLASS_1_2D17054035DEC8B1_METHOD_1_7660AC56C29AD44A_OFFSET))(this, a1);
	}
};
