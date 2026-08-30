#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3067535EE9196665_EXECUTE_OFFSET UNITYSDK_OFFSET(0x134BD140)
#define CLASS_1_3067535EE9196665_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x134BC4D0)
#define CLASS_1_3067535EE9196665_METHOD_1_1E5D842A629207ED_OFFSET UNITYSDK_OFFSET(0x134BD6B0)
#define CLASS_1_3067535EE9196665_METHOD_1_1EBEFBB7EE8C072B_OFFSET UNITYSDK_OFFSET(0x134BDC90)
#define CLASS_1_3067535EE9196665_METHOD_1_45D9C24224AE3B46_OFFSET UNITYSDK_OFFSET(0x134BD790)
#define CLASS_1_3067535EE9196665_METHOD_1_4E6F72124EC1C84B_OFFSET UNITYSDK_OFFSET(0x134BE0E0)
#define CLASS_1_3067535EE9196665_METHOD_1_5B9C3FA065DF5EBD_OFFSET UNITYSDK_OFFSET(0x134BD4C0)
#define CLASS_1_3067535EE9196665_METHOD_1_6869E6C5F0E9C74C_OFFSET UNITYSDK_OFFSET(0x134BD560)
#define CLASS_1_3067535EE9196665_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x134BC6A0)
#define CLASS_1_3067535EE9196665_METHOD_1_A7D1A74B05FAAD01_OFFSET UNITYSDK_OFFSET(0x134BD980)
#define CLASS_1_3067535EE9196665_METHOD_1_AAC47A98A4776461_OFFSET UNITYSDK_OFFSET(0x134BCCD0)
#define CLASS_1_3067535EE9196665_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x134BC720)
#define CLASS_1_3067535EE9196665_METHOD_1_D24360837195BABB_OFFSET UNITYSDK_OFFSET(0x134BDE20)
#define CLASS_1_3067535EE9196665__CCTOR_OFFSET UNITYSDK_OFFSET(0x134BE160)
#define CLASS_1_3067535EE9196665__CTOR_OFFSET UNITYSDK_OFFSET(0x134BC340)

inline static constexpr unsigned int Class_1_3067535EE9196665_TypeDefinitionIndex = 76337;

class Class_1_3067535EE9196665 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_CFBBDBLLJHG()
	{
		return (::RPG::Client::RPGProfilerMarkerWithIntData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3067535EE9196665_TypeDefinitionIndex)->GetStaticField(0x17570);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AOOEKNAAKBH; // 0x10
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x18
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x20
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* CJKEOKDMINK; // 0x28
	::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>* CFNLBDCGGOC; // 0x30
	::System::Int32 KKHAOECDOEC; // 0x38
	::System::Int32 OOLMHABGKPC; // 0x3C
	::System::Boolean CMIJNMIOLMA; // 0x40
	::System::Boolean MOOFJKJEPKD; // 0x41
	::System::Boolean FHACDJADCEK; // 0x42
	::System::Int32 ENLILBBFANB; // 0x44
	::System::Int32 JEGDCHEIEAK; // 0x48

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_AAC47A98A4776461(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_AAC47A98A4776461_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6869E6C5F0E9C74C(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_6869E6C5F0E9C74C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1E5D842A629207ED(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_1E5D842A629207ED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_45D9C24224AE3B46(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a2, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a3, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_45D9C24224AE3B46_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::FourRotateVoxelCameraDirectionMask Method_1_5B9C3FA065DF5EBD(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FourRotateVoxelCameraDirectionMask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_5B9C3FA065DF5EBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A7D1A74B05FAAD01(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_A7D1A74B05FAAD01_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1EBEFBB7EE8C072B(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_1EBEFBB7EE8C072B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D24360837195BABB(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_D24360837195BABB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4E6F72124EC1C84B(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3067535EE9196665_METHOD_1_4E6F72124EC1C84B_OFFSET))(this, a1);
	}
};
