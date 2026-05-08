#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_700E393C573D3A0E.h"
#include "unitysdk/Enum_3_8EC276EFD52BFFE6.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01E3578B80D3E1F9;
class Class_1_46FECA8E1D551D46_75;
class Class_1_8C28E085C991E9A7;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E8F11DE8E098281_METHOD_1_0865E94460F11643_1_OFFSET UNITYSDK_OFFSET(0xE5107A0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xE50FFA0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_08B7BEF105F90BD3_OFFSET UNITYSDK_OFFSET(0xE510110)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_15101F7F03C83F24_OFFSET UNITYSDK_OFFSET(0xE50F460)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_1851C433B7254E4E_OFFSET UNITYSDK_OFFSET(0xE50FAA0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE50F3A0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE50F050)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_2C6FEC36548719AA_OFFSET UNITYSDK_OFFSET(0xE510AC0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_31928010C9B2104C_OFFSET UNITYSDK_OFFSET(0xE510910)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_3522061D06F0BCC2_OFFSET UNITYSDK_OFFSET(0xE50FCD0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xE50EFE0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_36514F0B3165A4F0_OFFSET UNITYSDK_OFFSET(0xE50F160)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_44B53D1A958057E2_OFFSET UNITYSDK_OFFSET(0xE50F970)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE5100C0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_6CF31E0925095FDB_OFFSET UNITYSDK_OFFSET(0xE5108E0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xE50F390)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xE50F400)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_9789C70DDD6E4966_OFFSET UNITYSDK_OFFSET(0xE510D10)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_B65A37D0B84800F4_OFFSET UNITYSDK_OFFSET(0xE5108C0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_BC4278C2777D6ADF_OFFSET UNITYSDK_OFFSET(0xE510630)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xE5100B0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE5108B0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_C84E83FAE39BE654_OFFSET UNITYSDK_OFFSET(0xE50F060)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xE5104E0)
#define CLASS_1_5E8F11DE8E098281_METHOD_1_CE9A2932C52F636A_OFFSET UNITYSDK_OFFSET(0xE50F7B0)
#define CLASS_1_5E8F11DE8E098281__CTOR_OFFSET UNITYSDK_OFFSET(0xE50EF50)

inline static constexpr unsigned int Class_1_5E8F11DE8E098281_TypeDefinitionIndex = 57225;

class Class_1_5E8F11DE8E098281 : public ::System::Object
{
public:
	static ::Class_1_5E8F11DE8E098281** StaticGet_Field_1_0()
	{
		return (::Class_1_5E8F11DE8E098281**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E8F11DE8E098281_TypeDefinitionIndex)->GetStaticField(0x34090);
	}
	::System::Collections::Generic::Dictionary_2<::Enum_3_700E393C573D3A0E, ::Class_1_01E3578B80D3E1F9*>* Field_1_1; // 0x10
	::MoleMole::Config::SceneConfigRuntimeData* Field_1_2; // 0x18
	::MoleMole::Config::SceneConfigRuntimeDataArea Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::Class_1_5E8F11DE8E098281* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5E8F11DE8E098281*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_24748FC20F375725_OFFSET))();
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* Method_1_C84E83FAE39BE654()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_C84E83FAE39BE654_OFFSET))(this);
	}

	::System::Boolean Method_1_36514F0B3165A4F0(::System::String* a1, ::MoleMole::Config::SceneConfigRuntimeDataArea& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_36514F0B3165A4F0_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_8C8625211DA811AE(::Class_1_5E8F11DE8E098281* a1)
	{
		return ((::System::Void(*)(::Class_1_5E8F11DE8E098281*))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_8C8625211DA811AE_OFFSET))(a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_15101F7F03C83F24(::Class_1_8C28E085C991E9A7* a1, ::Class_1_46FECA8E1D551D46_75* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46_75*))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_15101F7F03C83F24_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3522061D06F0BCC2(::UnityEngine::Vector3 a1, ::MoleMole::Config::SceneConfigRuntimeDataArea& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_3522061D06F0BCC2_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_0865E94460F11643_OFFSET))();
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::ValueTuple_2<::Class_1_01E3578B80D3E1F9*, ::Class_1_01E3578B80D3E1F9*> Method_1_08B7BEF105F90BD3(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::Class_1_01E3578B80D3E1F9*, ::Class_1_01E3578B80D3E1F9*>(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_08B7BEF105F90BD3_OFFSET))(a1);
	}

	::System::Boolean Method_1_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_C982C8295D29DA97_OFFSET))(this);
	}

	::System::Boolean Method_1_BC4278C2777D6ADF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::Config::SceneConfigRuntimeDataArea& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_BC4278C2777D6ADF_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0865E94460F11643_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_0865E94460F11643_1_OFFSET))();
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_B65A37D0B84800F4(::MoleMole::Config::SceneConfigRuntimeDataArea a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_B65A37D0B84800F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE9A2932C52F636A(::System::Collections::Generic::List_1<::Class_1_01E3578B80D3E1F9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_01E3578B80D3E1F9*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_CE9A2932C52F636A_OFFSET))(this, a1);
	}

	::MoleMole::Config::SceneConfigRuntimeDataArea Method_1_6CF31E0925095FDB()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_6CF31E0925095FDB_OFFSET))(this);
	}

	::System::ValueTuple_2<::Class_1_01E3578B80D3E1F9*, ::Class_1_01E3578B80D3E1F9*> Method_1_31928010C9B2104C()
	{
		return ((::System::ValueTuple_2<::Class_1_01E3578B80D3E1F9*, ::Class_1_01E3578B80D3E1F9*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_31928010C9B2104C_OFFSET))(this);
	}

	::System::Void Method_1_44B53D1A958057E2(::Class_1_8C28E085C991E9A7* a1, ::Class_1_46FECA8E1D551D46_75* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46_75*))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_44B53D1A958057E2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2C6FEC36548719AA(::UnityEngine::Vector3 a1, ::Enum_3_8EC276EFD52BFFE6& a2, ::MoleMole::Config::SceneConfigRuntimeDataArea& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Enum_3_8EC276EFD52BFFE6&, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_2C6FEC36548719AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1851C433B7254E4E(::Class_1_8C28E085C991E9A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C28E085C991E9A7*))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_1851C433B7254E4E_OFFSET))(this, a1);
	}

	::MoleMole::Config::SceneConfigRuntimeData* Method_1_9789C70DDD6E4966()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8F11DE8E098281_METHOD_1_9789C70DDD6E4966_OFFSET))(this);
	}
};
