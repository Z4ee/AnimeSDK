#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_2626D71FD1EE4F41;
class Class_1_F23DA1E3F152DCCE;

#define CLASS_1_D1B009FA2AC3F9EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16535900)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_052DB1D67985B32A_OFFSET UNITYSDK_OFFSET(0x16536A20)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_05F5F71A74353C29_OFFSET UNITYSDK_OFFSET(0x16536250)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_22CFD7EDF6D46A03_OFFSET UNITYSDK_OFFSET(0x165370A0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_2792A292856EF92E_OFFSET UNITYSDK_OFFSET(0x16537290)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_2FDFB18467FEA17F_OFFSET UNITYSDK_OFFSET(0x16536410)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_375997786EB051DE_OFFSET UNITYSDK_OFFSET(0x16536D70)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_37D0382D0C30A2DC_1_OFFSET UNITYSDK_OFFSET(0x16535B50)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x16535AD0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_5284E7ADB3A28679_OFFSET UNITYSDK_OFFSET(0x16536C00)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_57C40DF78C4D03E5_OFFSET UNITYSDK_OFFSET(0x16536CA0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_6FBC3C0C754BE94C_OFFSET UNITYSDK_OFFSET(0x165373D0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_7EC563560FEB2BC2_OFFSET UNITYSDK_OFFSET(0x16536FE0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_8C88B627F6391981_OFFSET UNITYSDK_OFFSET(0x16537430)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_8C93AE8E84F634FE_OFFSET UNITYSDK_OFFSET(0x16536860)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_97EF4AD65255C3E8_OFFSET UNITYSDK_OFFSET(0x16535DF0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_E066ED1A494E1034_OFFSET UNITYSDK_OFFSET(0x16535BC0)
#define CLASS_1_D1B009FA2AC3F9EF_METHOD_1_F43BF50442C309E1_OFFSET UNITYSDK_OFFSET(0x16536610)
#define CLASS_1_D1B009FA2AC3F9EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165374A0)
#define CLASS_1_D1B009FA2AC3F9EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1651CBA0)

inline static constexpr unsigned int Class_1_D1B009FA2AC3F9EF_TypeDefinitionIndex = 32049;

class Class_1_D1B009FA2AC3F9EF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1B009FA2AC3F9EF_TypeDefinitionIndex)->GetStaticField(0x29B0);
	}
	::Class_1_F23DA1E3F152DCCE* Field_1_0; // 0x10
	::Class_1_1B9BBF1B9A8CC806* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_2626D71FD1EE4F41*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor(::Class_1_F23DA1E3F152DCCE* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F23DA1E3F152DCCE*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_37D0382D0C30A2DC_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_E066ED1A494E1034(::System::UInt64 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_E066ED1A494E1034_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_05F5F71A74353C29(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_05F5F71A74353C29_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2FDFB18467FEA17F(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_2FDFB18467FEA17F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F43BF50442C309E1(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3, ::RPG::Client::CachedAssetLogicType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_F43BF50442C309E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8C93AE8E84F634FE(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_8C93AE8E84F634FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_052DB1D67985B32A(::System::Int32 a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_052DB1D67985B32A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5284E7ADB3A28679(::System::UInt64 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_5284E7ADB3A28679_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_57C40DF78C4D03E5(::System::UInt64 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_57C40DF78C4D03E5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_7EC563560FEB2BC2(::System::UInt64 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_7EC563560FEB2BC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_2792A292856EF92E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_2792A292856EF92E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_97EF4AD65255C3E8(::System::UInt64 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_97EF4AD65255C3E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6FBC3C0C754BE94C(::System::UInt64 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_6FBC3C0C754BE94C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_375997786EB051DE(::System::Int32 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_375997786EB051DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_22CFD7EDF6D46A03(::System::Int32 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_22CFD7EDF6D46A03_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::CachedAssetLogicType Method_1_8C88B627F6391981(::System::UInt32 a1)
	{
		return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1B009FA2AC3F9EF_METHOD_1_8C88B627F6391981_OFFSET))(this, a1);
	}
};
