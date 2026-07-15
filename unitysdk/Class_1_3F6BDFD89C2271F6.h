#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_046112F54DBF767D;
class Class_1_30036F21476A564F;
class Class_1_45D6DE6073A1FCE3;
class Class_1_56399002D78307A1;
class Class_1_EA125597F40188F6;
class Class_4_F441CE80F00840D2;
namespace RPG::Client::PixAir { class PixAirEquipBar; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_388FEC785A0F3619_OFFSET UNITYSDK_OFFSET(0x14B7A320)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_567F8A730104DD51_1_OFFSET UNITYSDK_OFFSET(0x14B7AE50)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_567F8A730104DD51_OFFSET UNITYSDK_OFFSET(0x14B7A8B0)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_6C3C12189079F6F8_OFFSET UNITYSDK_OFFSET(0x14B7C000)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_74C1213CA22B38E3_OFFSET UNITYSDK_OFFSET(0x14B7B720)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_89A922723D48494B_OFFSET UNITYSDK_OFFSET(0x14B7B3F0)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_8B011B5876331381_OFFSET UNITYSDK_OFFSET(0x14B7BB10)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_AC7D48E04CF7AC13_OFFSET UNITYSDK_OFFSET(0x14B79E00)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_B183289631AFC755_OFFSET UNITYSDK_OFFSET(0x14B79CE0)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_B305F2F45FFA6195_OFFSET UNITYSDK_OFFSET(0x14B7C110)
#define CLASS_1_3F6BDFD89C2271F6_METHOD_1_EF5359BABBC42671_OFFSET UNITYSDK_OFFSET(0x14B7A010)
#define CLASS_1_3F6BDFD89C2271F6__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7C220)

inline static constexpr unsigned int Class_1_3F6BDFD89C2271F6_TypeDefinitionIndex = 75367;

class Class_1_3F6BDFD89C2271F6 : public ::System::Object
{
public:
	::Class_1_30036F21476A564F* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B183289631AFC755(::RPG::Client::PixAir::PixAirEquipBar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_B183289631AFC755_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirEquipInstance* Method_1_74C1213CA22B38E3(::RPG::Client::PixAir::PixAirEquipBar* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
	{
		return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_74C1213CA22B38E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AC7D48E04CF7AC13(::RPG::Client::PixAir::PixAirEquipBar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_AC7D48E04CF7AC13_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::Class_1_EA125597F40188F6*, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*> Method_1_EF5359BABBC42671(::RPG::Client::PixAir::PixAirEquipBar* a1)
	{
		return ((::System::ValueTuple_2<::Class_1_EA125597F40188F6*, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*>(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_EF5359BABBC42671_OFFSET))(this, a1);
	}

	::System::ValueTuple_3<::Class_1_EA125597F40188F6*, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*, ::System::Boolean> Method_1_8B011B5876331381(::RPG::Client::PixAir::PixAirEquipBar* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
	{
		return ((::System::ValueTuple_3<::Class_1_EA125597F40188F6*, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*, ::System::Boolean>(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_8B011B5876331381_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_388FEC785A0F3619(::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_388FEC785A0F3619_OFFSET))(this, a1);
	}

	::System::Void Method_1_567F8A730104DD51(::Class_1_56399002D78307A1* a1, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56399002D78307A1*, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_567F8A730104DD51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_567F8A730104DD51_1(::Class_1_56399002D78307A1* a1, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56399002D78307A1*, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_567F8A730104DD51_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C3C12189079F6F8(::Class_1_56399002D78307A1* a1, ::Class_1_046112F54DBF767D* a2, ::Class_1_45D6DE6073A1FCE3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56399002D78307A1*, ::Class_1_046112F54DBF767D*, ::Class_1_45D6DE6073A1FCE3*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_6C3C12189079F6F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B305F2F45FFA6195(::Class_1_56399002D78307A1* a1, ::Class_4_F441CE80F00840D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56399002D78307A1*, ::Class_4_F441CE80F00840D2*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_B305F2F45FFA6195_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89A922723D48494B(::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_046112F54DBF767D*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F6BDFD89C2271F6_METHOD_1_89A922723D48494B_OFFSET))(this, a1);
	}
};
