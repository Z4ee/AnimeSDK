#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_2626D71FD1EE4F41;
class Class_1_649FDFDFE5CF8F7D;

#define CLASS_1_24A7320C7EF051E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B6E740)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_052DB1D67985B32A_OFFSET UNITYSDK_OFFSET(0x17B6F700)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_05F5F71A74353C29_OFFSET UNITYSDK_OFFSET(0x17B6EF30)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_22CFD7EDF6D46A03_OFFSET UNITYSDK_OFFSET(0x17B6FD80)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_2792A292856EF92E_OFFSET UNITYSDK_OFFSET(0x17B6FF70)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_2FDFB18467FEA17F_OFFSET UNITYSDK_OFFSET(0x17B6F0F0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_375997786EB051DE_OFFSET UNITYSDK_OFFSET(0x17B6FA50)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_37D0382D0C30A2DC_1_OFFSET UNITYSDK_OFFSET(0x17B6E830)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x17B6E7B0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_5284E7ADB3A28679_OFFSET UNITYSDK_OFFSET(0x17B6F8E0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_57C40DF78C4D03E5_OFFSET UNITYSDK_OFFSET(0x17B6F980)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_6FBC3C0C754BE94C_OFFSET UNITYSDK_OFFSET(0x17B700B0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_7EC563560FEB2BC2_OFFSET UNITYSDK_OFFSET(0x17B6FCC0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_8C88B627F6391981_OFFSET UNITYSDK_OFFSET(0x17B70110)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_8C93AE8E84F634FE_OFFSET UNITYSDK_OFFSET(0x17B6F540)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_97EF4AD65255C3E8_OFFSET UNITYSDK_OFFSET(0x17B6EAD0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_E066ED1A494E1034_OFFSET UNITYSDK_OFFSET(0x17B6E8A0)
#define CLASS_1_24A7320C7EF051E7_METHOD_1_F43BF50442C309E1_OFFSET UNITYSDK_OFFSET(0x17B6F2F0)
#define CLASS_1_24A7320C7EF051E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B70180)
#define CLASS_1_24A7320C7EF051E7__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6E5F0)

inline static constexpr unsigned int Class_1_24A7320C7EF051E7_TypeDefinitionIndex = 37769;

class Class_1_24A7320C7EF051E7 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_24A7320C7EF051E7_TypeDefinitionIndex)->GetStaticField(0x4D30);
	}
	::Class_1_1B9BBF1B9A8CC806* Field_1_1; // 0x10
	::Class_1_649FDFDFE5CF8F7D* Field_1_0; // 0x18
	::Il2CppArray<::Class_1_2626D71FD1EE4F41*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_5; // 0x30

	::System::Void _ctor(::Class_1_649FDFDFE5CF8F7D* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_649FDFDFE5CF8F7D*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_37D0382D0C30A2DC_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_E066ED1A494E1034(::System::UInt64 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_E066ED1A494E1034_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_05F5F71A74353C29(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_05F5F71A74353C29_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2FDFB18467FEA17F(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_2FDFB18467FEA17F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F43BF50442C309E1(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3, ::RPG::Client::CachedAssetLogicType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_F43BF50442C309E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8C93AE8E84F634FE(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_8C93AE8E84F634FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_052DB1D67985B32A(::System::Int32 a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_052DB1D67985B32A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5284E7ADB3A28679(::System::UInt64 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_5284E7ADB3A28679_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_57C40DF78C4D03E5(::System::UInt64 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_57C40DF78C4D03E5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_7EC563560FEB2BC2(::System::UInt64 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_7EC563560FEB2BC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2792A292856EF92E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_2792A292856EF92E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_97EF4AD65255C3E8(::System::UInt64 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_97EF4AD65255C3E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6FBC3C0C754BE94C(::System::UInt64 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_6FBC3C0C754BE94C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_375997786EB051DE(::System::Int32 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_375997786EB051DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_22CFD7EDF6D46A03(::System::Int32 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_22CFD7EDF6D46A03_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::CachedAssetLogicType Method_1_8C88B627F6391981(::System::UInt32 a1)
	{
		return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24A7320C7EF051E7_METHOD_1_8C88B627F6391981_OFFSET))(this, a1);
	}
};
