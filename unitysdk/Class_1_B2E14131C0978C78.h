#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_4770AAB4DD7D317C_2;
class Class_1_CC5989D0025C57AE;
namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry460; }
namespace RPG::Client::BlindBox::Pool { class IPoolContents; }
namespace RPG::Client::BlindBox::Pool { class PoolContentEntry460; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetRepository; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_B2E14131C0978C78_METHOD_1_4F19E3A3EA2DDF1D_OFFSET UNITYSDK_OFFSET(0x15580300)
#define CLASS_1_B2E14131C0978C78_METHOD_1_6DAE14AEA2820879_OFFSET UNITYSDK_OFFSET(0x15580B00)
#define CLASS_1_B2E14131C0978C78_METHOD_1_C4ABA72EBF45764A_OFFSET UNITYSDK_OFFSET(0x15581360)
#define CLASS_1_B2E14131C0978C78_METHOD_1_CF0959DB29CDB9A0_OFFSET UNITYSDK_OFFSET(0x155808C0)
#define CLASS_1_B2E14131C0978C78_METHOD_1_D3B7E4F5CEA0567D_OFFSET UNITYSDK_OFFSET(0x155801D0)
#define CLASS_1_B2E14131C0978C78_METHOD_1_ECC04171ECDAA75D_OFFSET UNITYSDK_OFFSET(0x1557F190)
#define CLASS_1_B2E14131C0978C78_METHOD_1_ECC8039CBC8C2472_OFFSET UNITYSDK_OFFSET(0x155809B0)
#define CLASS_1_B2E14131C0978C78__CREATE_B__1_3_OFFSET UNITYSDK_OFFSET(0x15581410)
#define CLASS_1_B2E14131C0978C78__CTOR_OFFSET UNITYSDK_OFFSET(0x1557F140)

inline static constexpr unsigned int Class_1_B2E14131C0978C78_TypeDefinitionIndex = 74933;

class Class_1_B2E14131C0978C78 : public ::System::Object
{
public:
	::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* OAOJEPCGCFO; // 0x10

	::System::Void _ctor(::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository*))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::BlindBox::Pool::IPoolContents* Method_1_ECC04171ECDAA75D(::System::UInt32 a1)
	{
		return ((::RPG::Client::BlindBox::Pool::IPoolContents*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_ECC04171ECDAA75D_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_CF0959DB29CDB9A0(::RPG::Client::BlindBox::Pool::IPoolContentEntry460*& a1, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::RPG::Client::BlindBox::Pool::IPoolContentEntry460*&, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_CF0959DB29CDB9A0_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::BlindBox::Pool::PoolContentEntry460* Method_1_4F19E3A3EA2DDF1D(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a3, ::System::Boolean& a4, ::System::Boolean& a5, ::System::Boolean& a6)
	{
		return ((::RPG::Client::BlindBox::Pool::PoolContentEntry460*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_4F19E3A3EA2DDF1D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* Method_1_6DAE14AEA2820879(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_6DAE14AEA2820879_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C4ABA72EBF45764A(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_C4ABA72EBF45764A_OFFSET))(a1);
	}

	static ::Class_1_CC5989D0025C57AE* Method_1_D3B7E4F5CEA0567D(::System::UInt32 a1)
	{
		return ((::Class_1_CC5989D0025C57AE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_D3B7E4F5CEA0567D_OFFSET))(a1);
	}

	static ::Class_1_4770AAB4DD7D317C_2* Method_1_ECC8039CBC8C2472(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_4770AAB4DD7D317C_2*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78_METHOD_1_ECC8039CBC8C2472_OFFSET))(a1, a2);
	}

	::RPG::Client::Pet::BlindBox::IBlindBoxPet* _Create_b__1_3(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B2E14131C0978C78__CREATE_B__1_3_OFFSET))(this, a1);
	}
};
