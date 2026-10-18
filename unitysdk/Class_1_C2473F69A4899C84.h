#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_15265A3D7B506C11;
class Class_1_63D18ECF87218619_2;
class Class_2_E7C20EB0E801CE2E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2473F69A4899C84_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C777E0)
#define CLASS_1_C2473F69A4899C84_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x15C78180)
#define CLASS_1_C2473F69A4899C84_METHOD_1_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x15C77540)
#define CLASS_1_C2473F69A4899C84_METHOD_1_386786BB7A640BBC_OFFSET UNITYSDK_OFFSET(0x15C78040)
#define CLASS_1_C2473F69A4899C84_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x15C78170)
#define CLASS_1_C2473F69A4899C84_METHOD_1_5F0036ED5CF109B4_1_OFFSET UNITYSDK_OFFSET(0x15C77D50)
#define CLASS_1_C2473F69A4899C84_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x15C77BC0)
#define CLASS_1_C2473F69A4899C84_METHOD_1_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x15C77380)
#define CLASS_1_C2473F69A4899C84_METHOD_1_D114AD6D57BD6A9C_OFFSET UNITYSDK_OFFSET(0x15C77EE0)
#define CLASS_1_C2473F69A4899C84_SET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x15C78190)
#define CLASS_1_C2473F69A4899C84__CTOR_OFFSET UNITYSDK_OFFSET(0x15C771C0)

inline static constexpr unsigned int Class_1_C2473F69A4899C84_TypeDefinitionIndex = 60200;

class Class_1_C2473F69A4899C84 : public ::System::Object
{
public:
	::Class_2_E7C20EB0E801CE2E* OJMMJIALPON; // 0x10
	::System::Collections::Generic::List_1<::Class_1_63D18ECF87218619_2*>* NHDBGCCOFPH; // 0x18
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
