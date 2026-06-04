#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_403;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_74F7A8BE5C5500BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4BE1F0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_21DDACC432A5587E_OFFSET UNITYSDK_OFFSET(0xA4BE8F0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA4BE960)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0xA4BEA70)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_C411E5881DF297DE_OFFSET UNITYSDK_OFFSET(0xA4BE9E0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_C64CFE041D1DADDE_OFFSET UNITYSDK_OFFSET(0xA4BE9A0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA4BE520)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_EC5AF9232853FA6E_OFFSET UNITYSDK_OFFSET(0xA4BE340)
#define CLASS_1_74F7A8BE5C5500BF__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4BED20)
#define CLASS_1_74F7A8BE5C5500BF__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BE070)

inline static constexpr unsigned int Class_1_74F7A8BE5C5500BF_TypeDefinitionIndex = 56922;

class Class_1_74F7A8BE5C5500BF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74F7A8BE5C5500BF_TypeDefinitionIndex)->GetStaticField(0x12420);
	}
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_403*>* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Single>* Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EC5AF9232853FA6E(::Class_0_16E4307DCC419505_403* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_EC5AF9232853FA6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_21DDACC432A5587E(::Class_0_16E4307DCC419505_403* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_21DDACC432A5587E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Single>* Method_1_C64CFE041D1DADDE()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_C64CFE041D1DADDE_OFFSET))(this);
	}

	::System::Void Method_1_C411E5881DF297DE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_C411E5881DF297DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}
};
