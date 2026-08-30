#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_92;
class Class_0_16E4307DCC419505_94;

#define CLASS_1_6D09836D10100C8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF61BB0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_0BAAB07E3C65F44A_OFFSET UNITYSDK_OFFSET(0x1BF627A0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_5C21952B8052CF5E_OFFSET UNITYSDK_OFFSET(0x1BF63330)
#define CLASS_1_6D09836D10100C8E_METHOD_1_6B24B69257E45CD5_OFFSET UNITYSDK_OFFSET(0x1BF63BF0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_7292E88454453E63_OFFSET UNITYSDK_OFFSET(0x1BF62F10)
#define CLASS_1_6D09836D10100C8E_METHOD_1_85C7F3F72F8137A0_OFFSET UNITYSDK_OFFSET(0x1BF63600)
#define CLASS_1_6D09836D10100C8E_METHOD_1_87327B925C8C27BB_OFFSET UNITYSDK_OFFSET(0x1BF62220)
#define CLASS_1_6D09836D10100C8E_METHOD_1_8A008884C0726E1E_OFFSET UNITYSDK_OFFSET(0x1BF62A10)
#define CLASS_1_6D09836D10100C8E_METHOD_1_8C93AE8E84F634FE_OFFSET UNITYSDK_OFFSET(0x1BF624F0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_A02D09E02927EE05_OFFSET UNITYSDK_OFFSET(0x1BF64B50)
#define CLASS_1_6D09836D10100C8E_METHOD_1_B951C57153A2D92E_1_OFFSET UNITYSDK_OFFSET(0x1BF64FF0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_B951C57153A2D92E_OFFSET UNITYSDK_OFFSET(0x1BF64E50)
#define CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1BF61390)
#define CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BF61380)
#define CLASS_1_6D09836D10100C8E_METHOD_1_F2036561F2A2A055_OFFSET UNITYSDK_OFFSET(0x1BF64220)
#define CLASS_1_6D09836D10100C8E_METHOD_1_FCC4E3367D9F1E89_OFFSET UNITYSDK_OFFSET(0x1BF61DF0)
#define CLASS_1_6D09836D10100C8E_METHOD_1_FEBBA91C1894D402_OFFSET UNITYSDK_OFFSET(0x1BF64830)
#define CLASS_1_6D09836D10100C8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF613A0)

inline static constexpr unsigned int Class_1_6D09836D10100C8E_TypeDefinitionIndex = 40185;

class Class_1_6D09836D10100C8E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_92* DJBCDAHGGKF; // 0x10
	::Class_0_16E4307DCC419505_92* JCCODDDMPKE; // 0x18
	::Class_0_16E4307DCC419505_94* IAAGKLIIKBM; // 0x20
	::Class_0_16E4307DCC419505_94* GLGBOAHLPOE; // 0x28
	::System::Int32 PFIONLPCAND; // 0x30
	::System::Int32 PHDOOFHJIIF; // 0x34
	::System::Int32 LCOMHACOGGD; // 0x38
	::System::Int32 HJGLHGMKOHN; // 0x3C

	::System::Void _ctor(::Class_0_16E4307DCC419505_92* a1, ::Class_0_16E4307DCC419505_92* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_92*, ::Class_0_16E4307DCC419505_92*))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_FCC4E3367D9F1E89(::System::Int32 a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_FCC4E3367D9F1E89_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_87327B925C8C27BB(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3, ::RPG::Client::CachedAssetLogicType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_87327B925C8C27BB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8C93AE8E84F634FE(::System::Int32 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_8C93AE8E84F634FE_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_0BAAB07E3C65F44A(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_0BAAB07E3C65F44A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_8A008884C0726E1E(::System::UInt64 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_8A008884C0726E1E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7292E88454453E63(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_7292E88454453E63_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_5C21952B8052CF5E(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_5C21952B8052CF5E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_85C7F3F72F8137A0(::System::UInt64 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_85C7F3F72F8137A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6B24B69257E45CD5(::System::UInt64 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_6B24B69257E45CD5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F2036561F2A2A055(::System::UInt64 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_F2036561F2A2A055_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_FEBBA91C1894D402(::System::Int32 a1, ::System::UInt32& a2, ::RPG::Client::CachedAssetLogicType& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::RPG::Client::CachedAssetLogicType&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_FEBBA91C1894D402_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A02D09E02927EE05(::System::Int32 a1, ::System::UInt32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_A02D09E02927EE05_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_B951C57153A2D92E(::System::Int32 a1, ::Class_0_16E4307DCC419505_92*& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_92*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_B951C57153A2D92E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B951C57153A2D92E_1(::System::Int32 a1, ::Class_0_16E4307DCC419505_92*& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_92*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D09836D10100C8E_METHOD_1_B951C57153A2D92E_1_OFFSET))(this, a1, a2, a3);
	}
};
