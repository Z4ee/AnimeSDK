#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_15265A3D7B506C11;
class Class_1_63D18ECF87218619_2;
class Class_2_E7C20EB0E801CE2E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2473F69A4899C84_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C6AE70)
#define CLASS_1_C2473F69A4899C84_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x15C6B810)
#define CLASS_1_C2473F69A4899C84_METHOD_1_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x15C6ABD0)
#define CLASS_1_C2473F69A4899C84_METHOD_1_386786BB7A640BBC_OFFSET UNITYSDK_OFFSET(0x15C6B6D0)
#define CLASS_1_C2473F69A4899C84_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x15C6B800)
#define CLASS_1_C2473F69A4899C84_METHOD_1_5F0036ED5CF109B4_1_OFFSET UNITYSDK_OFFSET(0x15C6B3E0)
#define CLASS_1_C2473F69A4899C84_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x15C6B250)
#define CLASS_1_C2473F69A4899C84_METHOD_1_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x15C6AA10)
#define CLASS_1_C2473F69A4899C84_METHOD_1_D114AD6D57BD6A9C_OFFSET UNITYSDK_OFFSET(0x15C6B570)
#define CLASS_1_C2473F69A4899C84_SET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x15C6B820)
#define CLASS_1_C2473F69A4899C84__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6A850)

inline static constexpr unsigned int Class_1_C2473F69A4899C84_TypeDefinitionIndex = 60200;

class Class_1_C2473F69A4899C84 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>* NHDBGCCOFPH; // 0x10
	::Class_2_E7C20EB0E801CE2E* OJMMJIALPON; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PetDiySlotType, ::Class_1_63D18ECF87218619_2*>* IGJAIDPOKPO; // 0x20
	::System::Boolean _NeedTick_k__BackingField; // 0x28

	::System::Void _ctor(::Class_2_E7C20EB0E801CE2E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E7C20EB0E801CE2E*))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_15265A3D7B506C11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F0036ED5CF109B4_1(::Class_1_15265A3D7B506C11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15265A3D7B506C11*))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_5F0036ED5CF109B4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D114AD6D57BD6A9C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_D114AD6D57BD6A9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_386786BB7A640BBC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_386786BB7A640BBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_368884BBCA3D2697(::Class_1_63D18ECF87218619_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_2*))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::Class_2_E7C20EB0E801CE2E* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_E7C20EB0E801CE2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void set_NeedTick(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C2473F69A4899C84_SET_NEEDTICK_OFFSET))(this, a1);
	}
};
