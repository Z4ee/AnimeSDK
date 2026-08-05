#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_03DE57D25AB27AE9.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_1_7B5BC5F7531D3B01;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_4019A5E2CD84D24E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17180200)
#define CLASS_5_4019A5E2CD84D24E_METHOD_5_08B7D15C48D5132C_OFFSET UNITYSDK_OFFSET(0x17180410)
#define CLASS_5_4019A5E2CD84D24E_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17180350)
#define CLASS_5_4019A5E2CD84D24E_METHOD_5_555A5887DD06C528_OFFSET UNITYSDK_OFFSET(0x17180540)
#define CLASS_5_4019A5E2CD84D24E_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x171804B0)
#define CLASS_5_4019A5E2CD84D24E_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17180400)
#define CLASS_5_4019A5E2CD84D24E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x171802D0)
#define CLASS_5_4019A5E2CD84D24E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17180250)
#define CLASS_5_4019A5E2CD84D24E__CTOR_OFFSET UNITYSDK_OFFSET(0x17180390)

inline static constexpr unsigned int Class_5_4019A5E2CD84D24E_TypeDefinitionIndex = 80664;

class Class_5_4019A5E2CD84D24E : public ::Class_4_03DE57D25AB27AE9<::Class_5_4019A5E2CD84D24E*>
{
public:
	// static const ::System::Int32 Field_5_1 = 0x231; // 0x0
	::Class_1_7B5BC5F7531D3B01* Field_5_7; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* Field_5_6; // 0x60
	::System::Boolean Field_5_0; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_08B7D15C48D5132C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_METHOD_5_08B7D15C48D5132C_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_5_4019A5E2CD84D24E* Method_5_555A5887DD06C528()
	{
		return ((::Class_5_4019A5E2CD84D24E*(*)())((::PBYTE)hIl2Cpp + CLASS_5_4019A5E2CD84D24E_METHOD_5_555A5887DD06C528_OFFSET))();
	}
};
