#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_1C4DDF45E3291F49_OFFSET UNITYSDK_OFFSET(0x12531610)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x12530D70)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_453FBBF5A15CA9B4_OFFSET UNITYSDK_OFFSET(0x125307D0)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_46049D0DD3BDCF94_OFFSET UNITYSDK_OFFSET(0x12530AD0)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_460ED92A9D08B0B6_OFFSET UNITYSDK_OFFSET(0x12532B20)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_4DE866BD1F83957B_OFFSET UNITYSDK_OFFSET(0x12530CD0)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_53CE46B1534DD5B2_OFFSET UNITYSDK_OFFSET(0x125303C0)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_574557F0C72DA73B_OFFSET UNITYSDK_OFFSET(0x12530710)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x12530C30)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x12530B90)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_A03912A0C4517211_OFFSET UNITYSDK_OFFSET(0x12531370)
#define CLASS_1_FD4B9EC97CC7C706_METHOD_1_E23BAFD0820A36F0_OFFSET UNITYSDK_OFFSET(0x125309B0)
#define CLASS_1_FD4B9EC97CC7C706__CTOR_OFFSET UNITYSDK_OFFSET(0x12532FD0)

inline static constexpr unsigned int Class_1_FD4B9EC97CC7C706_TypeDefinitionIndex = 72072;

class Class_1_FD4B9EC97CC7C706 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Single>*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Int32 Field_1_8; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::System::UInt32 Field_1_2; // 0x38
	::System::UInt32 Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_53CE46B1534DD5B2(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_53CE46B1534DD5B2_OFFSET))(this, a1, a2);
	}

	::System::Tuple_3<::System::UInt32, ::System::UInt32, ::System::Boolean>* Method_1_453FBBF5A15CA9B4(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Tuple_3<::System::UInt32, ::System::UInt32, ::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_453FBBF5A15CA9B4_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_E23BAFD0820A36F0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_E23BAFD0820A36F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_46049D0DD3BDCF94(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_46049D0DD3BDCF94_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Boolean Method_1_4DE866BD1F83957B(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_4DE866BD1F83957B_OFFSET))(this, a1);
	}

	::System::Single Method_1_574557F0C72DA73B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_574557F0C72DA73B_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_A03912A0C4517211(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_A03912A0C4517211_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1C4DDF45E3291F49(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_1C4DDF45E3291F49_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_460ED92A9D08B0B6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4B9EC97CC7C706_METHOD_1_460ED92A9D08B0B6_OFFSET))(this);
	}
};
