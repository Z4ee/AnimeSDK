#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_247;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_1DFC6D2E621A7EE8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A56C20)
#define CLASS_1_1DFC6D2E621A7EE8___C__COLLECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x16A56C60)
#define CLASS_1_1DFC6D2E621A7EE8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A56C50)

inline static constexpr unsigned int Class_1_1DFC6D2E621A7EE8___c_TypeDefinitionIndex = 33783;

class Class_1_1DFC6D2E621A7EE8___c : public ::System::Object
{
public:
	static ::Class_1_1DFC6D2E621A7EE8___c** StaticGet___9()
	{
		return (::Class_1_1DFC6D2E621A7EE8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8___c_TypeDefinitionIndex)->GetStaticField(0xEB0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_247*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_247*>*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_247*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_247*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8___c_TypeDefinitionIndex)->GetStaticField(0xEB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_247*>* _Collect_b__4_0(::Class_0_16E4307DCC419505_247* node)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_247*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_247*))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8___C__COLLECT_B__4_0_OFFSET))(this, node);
	}
};
