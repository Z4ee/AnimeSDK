#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_462;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_74F7A8BE5C5500BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF50FC0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_21DDACC432A5587E_OFFSET UNITYSDK_OFFSET(0x1AF51830)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1AF519B0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1AF51350)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1AF518A0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_C411E5881DF297DE_OFFSET UNITYSDK_OFFSET(0x1AF51920)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_C64CFE041D1DADDE_OFFSET UNITYSDK_OFFSET(0x1AF518E0)
#define CLASS_1_74F7A8BE5C5500BF_METHOD_1_EC5AF9232853FA6E_OFFSET UNITYSDK_OFFSET(0x1AF51110)
#define CLASS_1_74F7A8BE5C5500BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF51D30)
#define CLASS_1_74F7A8BE5C5500BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF50E30)

inline static constexpr unsigned int Class_1_74F7A8BE5C5500BF_TypeDefinitionIndex = 60996;

class Class_1_74F7A8BE5C5500BF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_GNBIAKAFMDD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74F7A8BE5C5500BF_TypeDefinitionIndex)->GetStaticField(0x15470);
	}
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* CFEENIHHMDN; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_462*>* PKOIFFNOLOE; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Single>* LFNOJHEMDFD; // 0x20
	::System::Int32 HNHGNMBGABG; // 0x28

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

	::System::Void Method_1_EC5AF9232853FA6E(::Class_0_16E4307DCC419505_462* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_EC5AF9232853FA6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_21DDACC432A5587E(::Class_0_16E4307DCC419505_462* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_21DDACC432A5587E_OFFSET))(this, a1);
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

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74F7A8BE5C5500BF_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}
};
